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
        cout<<"Enter data to store at "<<i<<" node:";
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
    node *ptr;
    ptr=head;
    cout<<"Final list is:"<<endl;
    do
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }while(ptr!=head);
}
