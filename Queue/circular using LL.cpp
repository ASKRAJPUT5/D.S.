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
        temp->next=front;
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
    node *p;
    u:
    cout<<"Do you want to 1)insert 2) Delete 3)exit:";
    cin>>q;
    if(q==1)
    {
        node *a=new node;
        cout<<"Enter data to insert";
        cin>>a->data;
        rear->next=a;
        rear=a;
        rear->next=front;
        goto u;
    }
    else if(q==2)
    {
         node *t=new node;
         t=front;
         front=t->next;
         delete t;
         rear->next=front;
         goto u;
    }
    else
        goto z;

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
    node *ptr;
    ptr=front;
    cout<<"Final list is:"<<endl;
    do
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }while(ptr!=front);
}

