#include<iostream>
using namespace std;
class sort
{
    int a[20],temp,n,i,j;
public:
    void create()
    {
        cout<<"Enter size:";
        cin>>n;
        cout<<"Enter array"<<endl;
        for(i=0;i<n;i++)
            cin>>a[i];
    }
    void solve()
    {
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
    }
    void display()
    {
        cout<<"Array is:"<<endl;
        for(i=0;i<n;i++)
            cout<<a[i]<<endl;
    }

};
main()
{
    sort s;
    s.create();
    s.solve();
    s.display();
}
