#include<iostream>
using namespace std;
struct node
{
    int p;
    int data;
    node *next;
};
class queue
{
    node *front,*rear;
    int flag=0;
public:
    queue()
    {
        front=NULL;
        rear=NULL;
    }
    void insert(int p1,int d1);
    void display();
    void del();
};
void queue::insert(int p1,int d1)
{
    node *temp=new node;
    temp->p=p1;
    temp->data=d1;
    temp->next=NULL;
    if(front==NULL)
    {
        front=temp;
        rear=temp;
    }
    else
    {
        node *s,*n;
        s=front;
        while(s!=NULL)
        {
            if(temp->p >= s->p)
            {
                n=s;
                s=s->next;
            }

            else
            {
                flag=1;
                if(s==front)
                {
                    temp->next=front;
                    front=temp;
                    s=front;
                }
                else{


                n->next=temp;
                temp->next=s;
                }
                break;
            }
        }
        if(flag==0)
            n->next=temp;
    }
    flag=0;
}
void queue::display()
{
    node *ptr;
    ptr=front;
    cout<<"Final priority queue is:"<<endl;
    cout<<"DATA\tPRIORITY"<<endl;;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"\t"<<ptr->p<<endl;
        ptr=ptr->next;
    }
}
void queue::del()
{
    if(front==NULL)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
    front=front->next;
    }
}
main()
{
    queue q;
    int a,x,y,u;
    u:
    cout<<"Do you want to 1)insert 2)deletion 3)exit";
    cin>>a;
    if(a==1)
    {
        cout<<"Enter value:";
        cin>>y;
        cout<<"Enter priority:";
        cin>>x;
        q.insert(x,y);
        goto u;
    }
    else if(a==2)
    {
        q.del();
        goto u;
    }
    q.display();
}
