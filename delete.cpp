#include<iostream>
using namespace std;
main()
{
    int i,a[55],n,pos;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter elements";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter position to delete";
    cin>>pos;
    for(i=pos;i<n;i++)
        a[i]=a[i+1];
    for(i=0;i<n-1;i++)
        cout<<a[i]<<endl;
}
