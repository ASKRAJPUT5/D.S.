#include<iostream>
using namespace std;
main()
{
    int i,a[55],x,n;
    char y;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter array";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter number to search";
    cin>>x;
    y=false;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
            {
                y=true;
                cout<<"Number found at i="<<i;
                break;
            }
        else
            continue;
    }
    if(y==false)
        cout<<"Number not found!":
}
