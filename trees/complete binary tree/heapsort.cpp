#include<iostream>
using namespace std;
void maxHeapify(int a[],int i,int n)
{
    int j,temp;
    temp=a[i];
    j=2*i;
    while(j<=n)
    {
        if(j<n && a[j]<a[j+1])
            j=j+1;
        if(temp>a[j])
            break;
        else if(temp<=a[j])
        {
            a[j/2]=a[j];
            j=2*j;
        }
    }
    a[j/2]=temp;
}
void buildMaxheap(int a[],int n)
{
    int i;
    for(i=n/2;i>=1;i--)
        maxHeapify(a,i,n);
}
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
}
void heapsort(int a[],int n)
{
    int i,temp;
    for(i=n;i>=2;i--)
    {
        temp=a[i];
        a[i]=a[1];
        a[1]=temp;
        maxHeapify(a,1,i-1);
    }
}
main()
{
    int x,i,a[20];
    cout<<"Enter no. of elements";
    cin>>x;
    for(i=0;i<x;i++)
        cin>>a[i];
    buildMaxheap(a,x);
    heapsort(a,x);
    display(a,x);

}
