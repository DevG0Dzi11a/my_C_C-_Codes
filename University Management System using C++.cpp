#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Student Student;
typedef struct Teacher Teacher;
typedef struct User User;



struct User///////////Common Structure
{
    int ID;
    char name[50];
    char email[50];
    char pass[50];
};

struct Student///////////Student Structure
{
    User student;
    double cgpa;
};
struct Teacher///////////Teacher Structure
{
    User teacher;
    char desig[50];
};

/****************** Student Data Input***********************/
Student sinput()
{
    Student s1;
    printf("Name :");
    scanf("%[^'\n']s", &s1.student.name);
    fflush(stdin);
    printf("ID :");
    scanf("%d", &s1.student.ID);
    fflush(stdin);
    printf("Email :");
    scanf("%[^'\n']s", &s1.student.email);
    fflush(stdin);
    printf("Password :");
    scanf("%[^'\n']s", &s1.student.pass);
    fflush(stdin);
    printf("CGPA :");
    scanf("%lf", &s1.cgpa);
    fflush(stdin);
    return s1;
}
/****************** Teacher Data Input ***********************/
Teacher tinput()
{
    Teacher t1;
    printf("Name :");
    scanf("%[^'\n']s", &t1.teacher.name);
    fflush(stdin);
    printf("ID :");
    scanf("%d", &t1.teacher.ID);
    fflush(stdin);
    printf("Email :");
    scanf("%[^'\n']s", &t1.teacher.email);
    fflush(stdin);
    printf("Password :");
    scanf("%[^'\n']s", &t1.teacher.pass);
    fflush(stdin);
    printf("Designation :");
    scanf("%[^'\n']s", &t1.desig);
    fflush(stdin);
    return t1;
}

/****************** Email and Pass Comparison ***********************/
void checkUser(User u1, User u2, int *flag)
{
    int flag1;
    int flag2;
    flag1=strcmp(u1.email, u2.email);
    flag2=strcmp(u1.pass, u2.pass);
    if(flag1==0 && flag2==0)
    {
        printf("Login Successful!\n");
        *flag =1;
    }
}

/****************** Teacher Data Output ***********************/
void sprint(Student s, int i)
{
    printf("Student %d Info: \n");
    printf("Name :%s\n", s.student.name);
    printf("ID :%d\n", s.student.ID);
    printf("Email :%s\n", s.student.email);
    printf("CGPA :%.3lf\n", s.cgpa);
}
/****************** Student Data Output ***********************/
void tprint(Teacher t, int i)
{
    printf("Teacher %d Info: \n");
    printf("Name :%s\n", t.teacher.name);
    printf("ID :%d\n", t.teacher.ID);
    printf("Email :%s\n", t.teacher.email);
    printf("Designation :%s\n", t.desig);
}
/****************** Student ID checkUser ***********************/
void student_ID_checkUser(User u1, User u2, int *flag)
{

    if(u1.ID==u2.ID)
    {
        printf("Student Found!\n");
        *flag =1;
    }
}



int main()
{
    int a, b;
    printf("How many students : ");
    scanf("%d", &a);
    printf("How many teachers : ");
    scanf("%d", &b);

    Student stu[a];
    Teacher tcher[b];
    fflush(stdin);

    /*****************************************************      Student Data      ******************************************************/
    if(a>0)
    {
        printf("Enter student information : \n\n");
        for(int i=0; i<a; i++)
        {
            printf("Student %d information :\n", i);
            stu[i]= sinput();
            printf("\n");
        }
    }
    /****************************************************      Teacher Data     ******************************************************/
    if(b>0)
    {
        printf("Enter teacher information : \n\n");
        for(int i=0; i<b; i++)
        {
            printf("Teacher %d information :\n", i);
            tcher[i]= tinput();
            printf("\n");
        }
    }
    /*******************************************************      LOG IN       ****************************************************/
    int check, flag, temp, options;
    User cUser;
label:
    printf("Log in as : \n1. Student\n2. Teacher\n");
    scanf("%d", &check);
    fflush(stdin);
    printf("Enter email ID :");
    scanf("%[^'\n']s", &cUser.email);
    fflush(stdin);
    printf("Enter password :");
    scanf("%[^'\n']s", &cUser.pass);
    fflush(stdin);
    printf("\n");
    /**************************************************      Email and Pass checkUser      ****************************************************/
    switch(check)
    {
    /****************** Student checkUser ***********************/
    case 1:
    {
        for(int i=0; i<a; i++)
        {
            flag =0;
            checkUser(cUser, stu[i].student, &flag);
            if(flag==1)
            {
                temp=i;
                break;
            }
        }
        if(flag ==0)
        {
            printf("User not found!\n\n");
            goto label;//return to Log in
        }
        break;
    }
    /****************** Teacher checkUser ***********************/
    case 2:
    {
        for(int i=0; i<a; i++)
        {
            flag=0;
            checkUser(cUser, tcher[i].teacher, &flag);
            if(flag==1)
            {
                temp=i;
                break;
            }
        }
        if(flag ==0)
        {
            printf("User not found!\n\n");
            goto label;        //return to Log in
        }
        break;
    }
    default :
    {
        goto label;      //return to Log in
    }
    }
    if(flag ==1)
    {
        switch(check)
        {
        /****************** Student Accessible Options ***********************/
        case 1:
        {
label1:
            printf("\nOptions: \n1. SeeDetails \n2. Logout \n3. Exit\n");
            scanf("%d", &options);
            printf("\n");

            if(options == 1)
            {
                printf("Student Details :\n");
                printf("ID :%d\n", stu[temp].student.ID);
                printf("Name :%s\n", stu[temp].student.name);
                printf("Email :%s\n", stu[temp].student.email);
                printf("Password :%s\n", stu[temp].student.pass);
                printf("CGPA :%.3lf\n", stu[temp].cgpa);
                goto label1;//return to Options
            }
            else if(options==2)
            {
                goto label;    //return to Log in
            }
            else
                exit(0);
            break;
        }
        /****************** Teacher Accessible Options ***********************/
        case 2:
        {
label2:
            printf("\nOptions: \n1. See All Students \n2. See All Teachers \n3. Edit Student \n4. Logout \n5. Exit\n");
            scanf("%d", &options);
            printf("\n");
            switch(options)
            {
            case 1:
            {
                if(a>0)
                {
                    printf("All Students :\n\n");
                    for(int i=0; i<a; i++)
                    {
                        sprint(stu[i], i);
                        printf("\n");
                    }
                    goto label2;    //return to Options
                }
                else
                    printf("No students found!\n");
                break;
            }
            case 2:
            {
                printf("All Teachers :\n\n");
                for(int i=0; i<b; i++)
                {
                    tprint(tcher[i], i);
                    printf("\n");
                }
                goto label2;      //return to Options
                break;
            }
            case 3:
            {
                User cID;
                int f=0, rID;
label3:
                printf("Enter student ID :");
                scanf("%d", &cID.ID);
                fflush(stdin);

                for(int i=0; i<a; i++)
                {
                    student_ID_checkUser(cID, stu[i].student, &f);
                    rID=i;
                    if(f==1)
                    {
                        printf("Enter new name :");
                        scanf("%[^'\n']s", &stu[rID].student.name);
                        fflush(stdin);
                        break;    //return to Options

                    }
                }
                if(f!=1)
                {
                    printf("Not Found!\n");
                    goto label3;
                }
                goto label2;
                break;
            }
            case 4:
                goto label;     //return to Log in
                break;
            case 5:
                exit(0);
            default:
            {
                printf("Wrong Input!\n");
                goto label2;
            }
            }

        }
        default:
        {
            printf("Wrong Input!\n");
            goto label1;
        }
        }
        return 0;
    }
}
