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
    //insertion
    int pos;
    u:

    node *a=new node;
    cout<<"Enter data to insert:";
    cin>>a->data;
    node *p;
    p=head;

            cout<<"Enter position to insert:";
            cin>>pos;
            if(pos==1)
            {
            do
              {
                p=p->next;
              }while(p->next!=head);
            p->next=a;
            a->next=head;
            head=a;
            }
        else if(pos==n+1)
        {
            do
            {
                p=p->next;
            }while(p->next!=head);
            p->next=a;
            a->next=head;
        }
        else if(pos>n+1)
        {
            cout<<"Not Possible";
        }
        else
        {
            for(i=1;i<pos-1;i++)
            {
                p=p->next;
            }
            a->next=p->next;
            p->next=a;
        }

    cout<<"Do you want to insert more elements y or n?";
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
