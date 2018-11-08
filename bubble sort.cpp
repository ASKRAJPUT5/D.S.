#include<iostream>
using namespace std;
main()
{
    int i,n,a[55],j,temp,c;
    cout<<"Enter size";
    cin>>n;
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(j=0;j<n-1;j++)
    {
       c=0;
       for(i=0;i<n-j-1;i++)
       {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                c=1;
            }
       }
       if(c==0)
            break;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<"\t";
}
