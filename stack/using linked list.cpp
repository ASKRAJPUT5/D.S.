#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
main()
{
    node *top,*first;
    top=NULL;
    first=NULL;
    int n,i,u,choice;
    cout<<"Enter number of nodes in stack:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        node *temp=new node;
        cout<<"Enter value in stack at "<<i<<" node:";
        cin>>temp->data;
        temp->next=NULL;
        if(first==NULL)
        {
            first=temp;
            top=temp;
        }
        else
        {
            top->next=temp;
            top=temp;
        }
    }
    u:
    node *t=new node;
    node *p=new node;

    cout<<"Do you want to 1)insert 2)delete 3)display 4)exit";
    cin>>choice;
    switch(choice)
    {
    case 1:

        cout<<"Enter data to insert:";
        cin>>t->data;
        t->next=NULL;
        top->next=t;
        top=t;
        goto u;
    case 2:
        node *ptr;
        ptr=first;
        while(ptr->next!=top)
        {
            ptr=ptr->next;
        }
        p=ptr->next;
        ptr->next=NULL;
        top=ptr;
        delete p;
        goto u;
        break;
    case 3:
        node *s;
        s=first;
        cout<<"Created stack is:"<<endl;
        while(s!=NULL)
        {
           cout<<s->data<<endl;
           s=s->next;
        }
        goto u;
        break;
    case 4:
        break;
    default:
        cout<<"Invalid entry try again.";
        goto u;

    }
    node *s;
    s=first;
    cout<<"Created stack is:"<<endl;
    while(s!=NULL)
    {
        cout<<s->data<<endl;
        s=s->next;
    }

}
