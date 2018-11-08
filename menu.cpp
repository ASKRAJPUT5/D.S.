#include<iostream>
using namespace std;
main()
{
    int i,n,a[99],x,choice,pos,item,b;
    char y,v;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    b:
    cout<<"Enter choice of operation:\n1) Display\n2) Insertion\n3) Deletion\n4) Searching"<<endl;
    cin>>choice;
    if(choice<1 || choice>4)
    {
        cout<<"Invalid choice! try again!"<<endl;
        goto b;

    }
    else
    {

    switch(choice)
    {
        case 1:
            for(i=0;i<n;i++)
                cout<<a[i]<<endl;
            break;
        case 2:
            cout<<"Enter position to insert";
            cin>>pos;
            cout<<"Enter item to insert";
            cin>>item;
            for(i=n-1;i>=pos;i--)
                a[i+1]=a[i];
            a[pos]=item;
            for(i=0;i<n+1;i++)
                cout<<a[i]<<endl;
            break;
        case 3:
            cout<<"Enter position to delete";
            cin>>pos;
            for(i=pos;i<n;i++)
                a[i]=a[i+1];
            for(i=0;i<n-1;i++)
                cout<<a[i]<<endl;
            break;
        case 4:
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
                cout<<"Number not found!";
            break;
    }
    }
    cout<<"Do you want to carry another operation y or n?";
    cin>>v;
    if(v=='y')
        goto b;
    else
        cout<<"Thank you!";
}
