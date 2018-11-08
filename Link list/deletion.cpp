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
    int n,i,data1,u,v;
    char ans;
    cout<<"Enter no. of nodes:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter data to store at "<<i+1<<" node:";
        cin>>data1;
        node *temp=new node;
        temp->data=data1;
        temp->next=NULL;
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
    //delete
    u:
    node *p;
    int pos;
    cout<<"Enter position to delete:";
    cin>>pos;
    if (pos==1)
    {
       node *t=new node;
       t=head;
       head=t->next;
       delete t;
    }
    else if(pos==n)
    {
        node *prev,*t;
        t=head;
        while(t->next!=NULL)
        {
            prev=t;
            t=t->next;
        }
        prev->next=NULL;
        delete t;
    }
    else
    {
        node *prev,*t;
        t=head;
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
        while(p!=NULL)
        {
            p=p->next;
            n=n+1;
        }

    node *ptr;
    ptr=head;
    cout<<"Final list is:"<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
        goto u;
    }
    //display
    node *ptr;
    ptr=head;
    cout<<"Final list is:"<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }

}
