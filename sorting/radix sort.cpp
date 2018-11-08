#include<iostream>
using namespace std;
class sort
{
    int j,max_data,exp,output[];
public:
    void sorts(int a[],int n)
    {
        max_data=get_max(a[],n);
        for(exp=1;(max_data/exp)>0;exp=exp*10)
        {
            count_sort(a[],n,exp);
        }
    }
    void count_sort(int a[],int n,int exp)
    {
        int count[10]={0};
        for(i=0;i<n;i++)
        {
            count[(a[i]/exp)%10]++;
        }
        for(i=0;i<10;i++)
        {
            count[i]=count[i]+count[i-1];
        }
        for(i=n-1;i>0;i++)
        {
            output[count[(a[i]/exp)%10]-1]=a[i];
            count[(a[i]/exp)%10]--;
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
    sort s;
    s.sorts();
    s.display();
}
