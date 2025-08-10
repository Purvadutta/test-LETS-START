#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 4

int top=-1;
int stk[max];
void push(char);
char pop();
void main()
{
    char exp[max],temp;
    int i,flag=1;
    
    
    printf("enter an expression:");
    gets(exp);
    for(i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        push(exp[i]);
        if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
        if(top==-1)
        flag=0;
        else{
            temp=pop();
          if(exp[i]==')' && (temp=='{' || temp=='['))
            flag=0;
            if(exp[i]=='}' && (temp=='(' || temp=='['))
            flag=0;
            if(exp[i]==']' && (temp=='(' || temp=='{'))
            flag=0;
        }
        }
        if(top>=0)
        flag=0;
        if(flag==1)
        printf("\n valid expression");
        else
        printf("\n invalid expression");
}
        void push(char c)
    {if(top==(max-1))
    printf("stack overflow\n");
    else{
        top=top+1;
        stk[top]=c;
    }
    }
    char pop()
    {
        if(top==-1)
        printf("\n stack underflow");
        else
        return(stk[top--]);

    }
