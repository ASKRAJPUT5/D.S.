#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
    {
        return (fibo(n-1)+fibo(n-2));
    }
}
main()
{
    int n,y;
    cout<<"Enter number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<fibo(i)<<endl;
    }
}
