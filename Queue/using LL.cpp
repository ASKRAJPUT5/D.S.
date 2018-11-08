#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
main()
{
    node *front, *rear;
    front=NULL;
    rear=NULL;
    int n,i,data1,u,z,q;
    char ans;
    cout<<"Enter no. of nodes in queue:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter data to store at "<<i+1<<" node:";
        cin>>data1;
        node *temp=new node;
        temp->data=data1;
        temp->next=NULL;
        if(front==NULL)
        {
            front=temp;
            rear=temp;
        }
        else
        {
            rear->next=temp;
            rear=rear->next;
        }
    }
    //insert at all places multiple times
    u:
    cout<<"Do you want to 1)insert 2) Delete 3)exit:";
    cin>>q;
    if(q==1)
    {
        node *newnode=new node;
        cout<<"Enter data to insert";
        cin>>newnode->data;
        rear->next=newnode;
        rear=newnode;
        rear->next=NULL;
    }
    else if(q==2)
    {
         node *t=new node;
         t=front;
         front=t->next;
         delete t;
    }
    else
        goto z;

    node *p;
    p=front;
    n=0;
    while(p!=NULL)
    {
        p=p->next;
        n=n+1;
    }
    goto u;

    //printing
    z:
    p=front;
    cout<<"Final list is:"<<endl;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

