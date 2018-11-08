#include<iostream>
using namespace std;
class queue
{
    int q[5],n,front=-1,rear=-1;
public:
    void insert_rear(int n);//enqueue
    void insert_front(int n);
    void d();//dequeue
    void display();

};
void queue::insert_rear(int n)
{
    if(rear==5-1)
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
void queue::insert_front(int n)
{
    if(front==0)
    {
        cout<<"Overflow";
    }
    else
    {
        front=front-1;
        q[front]=n;
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

    u:
    cout<<"Do you want to 1)insert from rear 3)insert from front 3)delete  4)exit";
    cin>>x;
    if(x==1)
    {
        cout<<"Enter number to insert";
        cin>>n;
        q1.insert_rear(n);
        goto u;
    }
    else if(x==2)
    {
        cout<<"Enter number to insert";
        cin>>n;
        q1.insert_front(n);
        goto u;
    }
    else if(x==3)
    {
        q1.d();
        goto u;
    }
    q1.display();
}
