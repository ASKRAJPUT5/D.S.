#include<iostream>
using namespace std;
int fact(int n)
{
    int t;
    if(n<0)
        t=-1;
    else if(n==0)
        t=1;
    else
        t=n*fact(n-1);
    return t;
}
main()
{
    int n,y;
    cout<<"Enter number to find factorial:";
    cin>>n;
    y=fact(n);
    cout<<"Answer="<<y;
}
