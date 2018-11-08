//circular link list
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
main()
{
    node *head, *tail;
    head=NULL;
    tail=NULL;
    int n,i,data1,u;
    char ans;
    cout<<"Enter no. of nodes:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter data to store at "<<i+1<<" node:";
        cin>>data1;
        node *temp=new node;
        temp->data=data1;
        temp->next=head;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=tail->next;
        }
    }
    //deletion
     u:
    node *p;
    int pos;
    cout<<"Enter position to delete:";
    cin>>pos;
    node *prev;
    node *t=new node;
    t=head;
    if (pos==1)
    {
       head=t->next;
       delete t;
       do
       {
           t=t->next;
       }while(t->next!=head);
       t->next=head;
    }
    else if(pos==n)
    {
        do
        {
            prev=t;
            t=t->next;
        }while(t->next!=head);
        prev->next=head;
        delete t;
    }
    else
    {
        for(i=1;i<pos;i++)
        {
            prev=t;
            t=t->next;
        }
        prev->next=t->next;
        delete t;
    }
    cout<<"Do you wish to delete more nodes y or n?";
    cin>>ans;
    if(ans=='y')
    {
        p=head;
        n=0;
        do
        {
            p=p->next;
            n=n+1;
        }while(p->next!=head);
        node *ptr;
    ptr=head;
    cout<<"Final list is:"<<endl;
    do
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }while(ptr!=head);
        goto u;
    }

    //display
    node *ptr;
    ptr=head;
    cout<<"Final list is:"<<endl;
    do
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }while(ptr!=head);
}

