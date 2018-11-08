#include<iostream>
using namespace std;
int size;
class queue
{
    int q[20],n,front=-1,rear=-1;
public:
    void insert(int n);//enqueue
    void d();//dequeue
    void display();
};
void queue::insert(int n)
{
    if(rear==size-1)
    {
        cout<<"Overflow"<<endl;
    }
    else if(front==-1)
    {
        front=0;
        rear=0;
        q[rear]=n;
    }
    else
    {
        rear++;
        q[rear]=n;
    }
}
void queue::d()
{
    if(front==-1)
    {
        cout<<"Underflow"<<endl;
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
        front=front+1;
}
void queue::display()
{
    int i;
    cout<<"Remaining queue is:"<<endl;
    for(i=front;i<=rear;i++)
            cout<<q[i]<<endl;
}
main()
{
    queue q1;
    int x,u,n;
    cout<<"Enter size of queue:";
    cin>>size;
    u:
    cout<<"Do you want to 1)insert 2)delete 3)exit";
    cin>>x;
    if(x==1)
    {
        cout<<"Enter number to insert";
        cin>>n;
        q1.insert(n);
        goto u;
    }
    else if(x==2)
    {
        q1.d();
        goto u;
    }
    q1.display();
}
