#include<iostream>
using namespace std;
#include<cstring>
class stack1
{
public:
    char stack[30];
    int top=-1;
    void push(int);
    char pop();
    void infixtopostfix(char[],char[]);
    int prec(char);
};
void stack1::push(int x)
{
	int x1;
	x1=++top;
        stack[x1] = x;
}
char stack1::pop()
{
    int x2;
    x2=top--;
    return stack[x2];

}
int stack1::prec(char symb)
{
    if(symb=='(' || symb==')')
        return 0;
    else if(symb=='+' || symb=='-')
        return 1;
    else if(symb=='*' || symb=='/')
        return 2;
    else if(symb=='^')
        return 3;
}
void stack1::infixtopostfix(char infix[],char output[])
{
    int length,j=0;
    length=strlen(infix);
    infix[length]=')';
    for(int i=0;i<length;i++)
    {
        if(infix[i]!='+' && infix[i]!='-' && infix[i]!='*' && infix[i]!='/' && infix[i]!='^' && infix[i]!='(' && infix[i]!=')')
            output[j++]=infix[i];
        else
        {
            if(infix[i]!=')' && infix[i]!=')')
            {
                if(top==-1)
                    push(infix[i]);
                else if(prec(infix[i])<=prec(stack[top]))
                {
                    while(prec(infix[i]<=prec(stack[top])))
                        output[j++]=pop();
                    push(infix[i]);
                }
            }
            else
            {
                if(infix[i]=='(')
                    push(infix[i]);
                else if(infix[i]==')')
                {
                    char temp;
                    temp=pop();
                    while(temp!='(')
                    {
                        output[j++]=temp;
                        temp=pop();
                    }
                }
            }
        }
    }
    while(top!=-1)
        output[j++]=pop();
    cout<<output;
}
main()
{
    stack1 s;
    char output[30],infix[30];
    cout<<"Enter expression:";
    cin>>infix;
    s.infixtopostfix(infix,output);
}
