#include<iostream>
using namespace std;
main()
{
    int i,n,a[55],j,temp,f,l,m,x,y=0;
    cout<<"Enter size:";
    cin>>n;
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Enter number to search:";
    cin>>x;
    f=0;
    l=n-1;
    while(f<=l)
    {
        m=(f+l)/2;
        if(x==a[m])
        {
            y=1;
            cout<<"Found! At index:"<<m;
            break;
        }
        else if(x<a[m])
            l=m-1;
        else
            f=m+1;
    }
    if(y==0)
        cout<<"Not Found!";
}
