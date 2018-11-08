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
    int n,i,data1;
    cout<<"Enter no. of nodes:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter data to store at "<<i<<" node:";
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
    //insert at last
    node *newnode=new node;
    cout<<"Enter data to insert";
    cin>>newnode->data;
    node *ptr2;
    ptr2=head;
    while(ptr2!=NULL)
    {
        tail=ptr2;
        ptr2=ptr2->next;
    }
    tail->next=newnode;
    tail=newnode;
    tail->next=NULL;


    //printing
    node *ptr;
    ptr=head;
    cout<<"Created list is:"<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
