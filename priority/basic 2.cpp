#include<iostream>
using namespace std;
struct node
{
    int p;
    int data;
    node *next;
};
main()
{
    node *front,*rear;
    front=NULL;
    rear=NULL;
    int a,d1,p1,u,flag=0;
    u:
    cout<<"Do you want to 1)insert 2)exit";
    cin>>a;
    if(a==1)
    {
        cout<<"Enter value:";
        cin>>d1;
        cout<<"Enter priority:";
        cin>>p1;
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
            if((temp->p)>=(s->p))
            {
                n=s;
                s=s->next;
            }
            else
            {
                if(s==front)
                {
                    temp->next=front;
                    front=temp;
                    flag=1;
                    break;
                }
                flag=1;
                n->next=temp;
                temp->next=s;
                break;
            }
        }
        if(flag==0)
            n->next=temp;
    }
    flag=0;
    goto u;
    }
    node *p;
    p=front;
    cout<<"Final priority queue is:"<<endl;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
