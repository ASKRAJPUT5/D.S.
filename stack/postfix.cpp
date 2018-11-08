#include<iostream>
using namespace std;
#include<string>
class stack
{
    int a[20],top=-1;
    char exp[20];
    char *e;
    int result;
    int y;
public:

    void doo();
    void push(int);
    int pop();

};
void stack::doo()
{
    int n1,n2,num;
    cout<<"Enter expression:";
    cin>>exp;
    e=exp;
    while(*e!='\0')
    {
        if(isdigit(*e))
        {
            num=*e-'0';
            //cout<<num<<endl;
            push(num);
        }
        else
        {
            n1=pop();
            n2=pop();
            switch(*e)
            {
            case '+':
                result=n2+n1;
                break;
            case '-':
                result=n2-n1;
                break;
                result=n2*n1;
                break;
            case '/':
                result=n2/n1;
                break;
            case '%':
                result=n2%n1;
                break;
            }
            push(result);

        }
         e++;
    }
    cout<<"Result is:"<<pop();
}

void stack:: push(int n)
{

        ++top;
        a[top]=n;

}
int stack::pop()
{

        int t;
        t=a[top];
        top=top-1;
        return t;
}
main()
{
    stack s;
    s.doo();

}
