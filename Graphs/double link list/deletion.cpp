#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
main()
{
    node *head, *tail;
    head=NULL;
    tail=NULL;
    int n,i,data1,pos,u,x;
    char ans;
    cout<<"Enter no. of nodes:";
    cin>>n;
    x=n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter data to store at "<<i+1<<" node:";
        cin>>data1;
        node *temp=new node;
        temp->data=data1;
        temp->next=NULL;
        temp->prev=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            temp->prev=tail;
            tail=tail->next;
        }
    }
    //insertion
    u:
    node *ptr,*s,*p;
    node *t=new node;
    cout<<"Enter position to delete:";
    cin>>pos;
    if(pos==1)
    {
        t=head;
        head=head->next;
        head->prev=NULL;
        delete t;
    }
    else if(pos==n)
    {
        t=head;
        while(t->next!=NULL)
        {
            p=t;
            t=t->next;
        }
        p->next=NULL;
        delete t;
    }
    else if(pos>n)
    {
        cout<<"Error try again!"<<endl;
        goto u;
    }
    else
    {
        ptr=head;
        for(i=1;i<pos-1;i++)
        {
            ptr=ptr->next;
        }
        t=ptr->next;
        s=t->next;
        ptr->next=t->next;
        s->prev=ptr;
        delete t;
    }
    cout<<"Do you wish to delete more elements y or n?";
    cin>>ans;
    if(ans=='y')
    {
            ptr=head;
            n=0;
            cout<<"Created list is "<<"(n="<<x-1<<"):"<<endl;
            while(ptr!=NULL)
            {
                cout<<ptr->data<<endl;
                ptr=ptr->next;
                n=n+1;
                x=n;
            }
            goto u;
    }

    //printing
    ptr=head;
    cout<<"Created list is:"<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
