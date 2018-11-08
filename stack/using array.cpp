#include<iostream>
using namespace std;
class stack
{
    int a[5],top=-1;
public:
    int IsEmpty();
    int IsFull();
    void push(int);
    void pop();
    void display();
};
void stack::display()
{
    int i;
    if(top==-1)
        cout<<"stack is empty";
    else
    {
        for(i=top;i>=0;i--)
        {
            cout<<a[i]<<endl;
        }
    }
}
void stack:: push(int n)
{
    if(IsFull())                         //if(top==4) cout<<"overflow";
        cout<<"Overflow"<<endl;
    else
    {
        ++top;
        a[top]=n;
    }
}
void stack::pop()
{
    if(IsEmpty())                        //if(top==-1) cout<<"underflow";
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        top=top-1;
    }
}
int stack::IsFull()
{
    if(top==4)
        return 1;
    else
        return 0;
}
int stack::IsEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
main()
{
    stack s;
    int x,choice,u;
    u:
    cout<<"Do you want 1)push 2)pop 3)display 4)exit ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"Enter value to insert";
        cin>>x;
        s.push(x);
        goto u;
        break;
    case 2:
        s.pop();
        goto u;
        break;
    case 3:
        s.display();
        goto u;
        break;
    case 4:
        break;
    default:
        cout<<"Invalid";
        goto u;
        break;
    }
}
