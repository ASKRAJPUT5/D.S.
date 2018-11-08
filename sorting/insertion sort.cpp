#include<iostream>
using namespace std;
class insertionSort
{
    int a[20],n,i;
public:
    void get()
    {
        cout<<"Enter number of elements:";
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
    }
    void sort()
    {
        int j,key;
        for(j=1;j<n;j++)
        {
            key=a[j];
            i=j-1;
            while(i>=0 && a[i]>key)
            {
                a[i+1]=a[i];
                i=i-1;
            }
            a[i+1]=key;
        }
    }
    void display()
    {
        cout<<"Sorted list is:"<<endl;
        for(i=0;i<n;i++)
            cout<<a[i]<<endl;
    }
};
main()
{
    insertionSort s;
    s.get();
    s.sort();
    s.display();
}
