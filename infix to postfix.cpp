#include<bits/stdc++.h>
#include<sstream>>
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

int main()
{
    head = NULL;
    char infix[40];
    int num[10];
    string str="";
    char store;
    cout<<"Enter an expression:";
    cin>>infix;
    char *ptr;
    ptr = infix;

    cout<<"Postfix:";
    while(*ptr !='\0')
    {
        if(isalnum(*ptr))
        {
            cout<<*ptr;
        }
        else if(*ptr == '(')
        {
            PUSH('(');
        }
        else if(*ptr == ')')
        {
            while((store = POP()) != '(')
                cout<<store;
        }
        else
        {
            if(head != NULL)
            {
                while(checkPriority(head->val)>= checkPriority(*ptr))
                {
                    char pop = POP();
                    cout<< pop;
                    if(head == NULL)break;

                }
            }
            PUSH(*ptr);
        }
        ptr++;
    }

    while(head != NULL)
    {
        cout<<POP();
    }
    return 0;
}
