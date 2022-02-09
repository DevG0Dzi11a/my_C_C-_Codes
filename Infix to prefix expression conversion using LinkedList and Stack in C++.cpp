
#include<bits/stdc++.h>
#include<sstream>
#include<string>
using namespace std;

struct node
{
    char val;
    node *next;

    node(char a)
    {
        val = a;
        next = NULL;
    }
};
node *head;

void PUSH(char x)
{
    node *n =  new node(x);
    n->next = head;
    head = n;
}
int converter(string x)
{
    stringstream geek(x);
    int ret = 0;
    geek >> ret;
    return ret;
}

char POP()
{
    char a = head->val;
    head = head->next;
    return a;
}
void PRINT()
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<"\t";
        temp = temp->next;
    }
    cout<<endl;
}
int checkPriority(char a)
{
    if(a == '(')
        return 0;
    else if(a == '+' || a == '-')
        return 1;
    else if(a == '*' || a =='/')
        return 2;
}

int strConvert(string x)
{
    stringstream sstream(x);

    int s = 0;
    sstream >> s;
    return s;
}
void reverseStr(string& str)
{
    int n = str.length();

    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
void reverseCharArr(char str[])
{
    int start = 0, ending = strlen(str)-1;
    while (start < ending)
    {
        swap(str[start], str[ending]);
        start++;
        ending--;
    }
    start = 0, ending = strlen(str)-1;
    for(int i = start; i<ending/2;i++)
    {
        for(int j =start+1; j<=ending;j++)
        {
            if(str[i]==')' && str[j] == '(')
                swap(str[i], str[j]);
        }
    }

}

int main()
{
    head = NULL;
    char infix[40];
    int num[10];
    string str="";
    char store;
    cout<<"Enter an expression:";
    cin>>infix;
    reverseCharArr(infix);
    char *ptr;
    ptr = infix;

    while(*ptr !='\0')
    {
        if(isalnum(*ptr))
        {
            str=str+*ptr;
            //cout<<*ptr;
        }
        else if(*ptr == '(')
        {
            PUSH('(');
        }
        else if(*ptr == ')')
        {
            while((store = POP()) != '(')
            {
                str=str+store;
                //cout<<store;
            }
        }
        else
        {
            if(head != NULL)
            {
                while(checkPriority(head->val)>= checkPriority(*ptr))
                {
                    char pop = POP();
                    str = str+pop;
                    //cout<< pop;
                    if(head == NULL)break;

                }
            }

            PUSH(*ptr);
        }
        ptr++;
    }

    while(head != NULL)
    {
        char pop = POP();
        str = str+pop;
        //cout<<pop;
    }
    reverseStr(str);
    cout <<"Prefix:"<< str;
    return 0;
}

