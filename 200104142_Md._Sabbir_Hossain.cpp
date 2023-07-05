#include<stdio.h>

typedef struct student_info
{
    int ID;
    char name[50];
    double t_gpa;
    double hsc;
    double ssc;
} sInfo;

void compare_double(double a, double b, int *f)// double comparing function
{
    int x = (int)a, y = (int)b, m=0, n=0;
    float p = (a-x), q = (b-y);
    while(p!=((int)p))
    {
        m++;
        p=p*10;
    }
    while(q!=((int)q))
    {
        n++;
        q=q*10;
    }
    int u = p, v = q;
    if(x==y && u==v)
    {
        *f = 1;
    }
}

int main()
{
    /************************************************************ student_data.txt file reading *************************************************************/
    FILE *s_data = fopen("student_data.txt", "r");
    sInfo s1[5], stud;
    char buf[20], buf1[20], buf2[20], buf3[20], buf4[20];
    int f, p;

    if(s_data== NULL)
    {
        printf("File cannot be read!\n");
    }
    else
    {
        printf("File reading successful!\n");
        for (int j=0; j<5; j++)
        {
            fscanf(s_data, "%s %d %s %s %s %lf %s %lf %s %lf", &buf, &s1[j].ID, &buf1, &s1[j].name, &buf2, &s1[j].t_gpa, &buf3, &s1[j].hsc, &buf4, &s1[j].ssc);
            printf("%s %d \n%s %s \n%s %lf \n%s %lf \n%s %lf", buf, s1[j].ID, buf1, s1[j].name, buf2, s1[j].t_gpa, buf3, s1[j].hsc, buf4, s1[j].ssc);
            printf("\n");
        }
        fclose(s_data);
    }
    /****************************************************************** SSC GPA Analysis ***************************************************************/
    FILE *ssc_gpa = fopen("ssc_gpa_analysis.txt", "w");
    if(ssc_gpa==NULL)
    {
        printf("File creation unsuccessful!\n");
    }
    else
    {
        printf("\"ssc_gpa_analysis.txt\" file Created successfully!\n");
        fprintf(ssc_gpa,"SSC GPA Analysis :\n\n");
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<4; j++)
            {
                if(s1[j].ssc<s1[j+1].ssc)
                {
                    stud=s1[j];
                    s1[j]=s1[j+1];
                    s1[j+1]=stud;
                }
            }
        }
        for(int i=0; i<5; i++)
        {
            p=0;
            fprintf(ssc_gpa,"Total GPA : %.2lf\n================\n", s1[i].ssc);
            //fprintf(ssc_gpa,"%s : %d %s : %s\n\n", buf, s1[i].ID, buf1,s1[i].name);
            for(int j=i; j<5; j++)
            {
                f=0;
                compare_double(s1[i].ssc, s1[j].ssc, &f);
                if(f==1)
                {
                    fprintf(ssc_gpa,"%s : %d %s : %s\n\n", buf, s1[j].ID, buf1,s1[j].name);
                    p++;
                }
            }
            i+=(p-1);
        }
        fclose(ssc_gpa);
    }
    /*********************************************************** HSC GPA Analysis ********************************************************/
    FILE *hsc_gpa = fopen("hsc_gpa_analysis.txt", "w");
    if(ssc_gpa==NULL)
    {
        printf("\"hsc_gpa_analysis.txt\" file creation unsuccessful!\n");
    }
    else
    {
        printf("\"hsc_gpa_analysis.txt\" file Created successfully!\n");
        fprintf(hsc_gpa,"HSC GPA Analysis :\n\n");
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<4; j++)
            {
                if(s1[j].hsc<s1[j+1].hsc)
                {
                    stud=s1[j];
                    s1[j]=s1[j+1];
                    s1[j+1]=stud;
                }
            }
        }
        for(int i=0; i<5; i++)
        {
            p=0;
            fprintf(hsc_gpa,"Total GPA : %.2lf\n================\n", s1[i].hsc);
            //fprintf(ssc_gpa,"%s : %d %s : %s\n\n", buf, s1[i].ID, buf1,s1[i].name);
            for(int j=i; j<5; j++)
            {
                f=0;
                compare_double(s1[i].hsc, s1[j].hsc, &f);
                if(f==1)
                {
                    fprintf(hsc_gpa,"%s : %d %s : %s\n\n", buf, s1[j].ID, buf1,s1[j].name);
                    p++;
                }
            }
            i+=(p-1);
        }
        fclose(hsc_gpa);
    }
    /********************************************************* Total GPA Analysis *****************************************************/
    FILE *total_gpa = fopen("total_gpa_analysis.txt", "w");
    if(total_gpa==NULL)
    {
        printf("\"total_gpa_analysis.txt\" file creation unsuccessful!\n");
    }
    else
    {
        printf("\"total_gpa_analysis.txt\" file Created successfully!\n");
        fprintf(total_gpa,"Total GPA Analysis :\n\n");
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<4; j++)
            {
                if(s1[j].t_gpa<s1[j+1].t_gpa)
                {
                    stud=s1[j];
                    s1[j]=s1[j+1];
                    s1[j+1]=stud;
                }
            }
        }
        for(int i=0; i<5; i++)
        {
            p=0;
            fprintf(total_gpa,"Total GPA : %.2lf\n================\n", s1[i].t_gpa);
            for(int j=i; j<5; j++)
            {
                f=0;
                compare_double(s1[i].t_gpa, s1[j].t_gpa, &f);
                if(f==1)
                {
                    fprintf(total_gpa,"%s : %d %s : %s\n\n", buf, s1[j].ID, buf1,s1[j].name);
                    p++;
                }
            }
            i+=(p-1);
        }
        fclose(total_gpa);
    }
    return 0;
}
/*for(int i=0; i<5; i++)
        {
            printf("%s %d\n%s %s\n%s %.2lf\n%s %.2lf\n%s %.2lf\n", buf, s1[i].ID, buf1, s1[i].name, buf2, s1[i].t_gpa, buf3, s1[i].hsc,buf4, s1[i].ssc);
        }*/

