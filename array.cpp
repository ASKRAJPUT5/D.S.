#include<iostream>
using namespace std;
main()
{
    int i,n,a[5];
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter array elements";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cout<<"a["<<i<<"]="<<a[i]<<endl;
}
