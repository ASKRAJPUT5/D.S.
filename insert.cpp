#include<iostream>
using namespace std;
main()
{
    int i,a[55],n,pos,item;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter elements";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter position to insert";
    cin>>pos;
    cout<<"Enter item to insert";
    cin>>item;
    for(i=n-1;i>=pos;i--)
        a[i+1]=a[i];
    a[pos]=item;
    for(i=0;i<n+1;i++)
        cout<<a[i]<<endl;
}
