#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class list
{
    node *head,*tail,*ptr;
    int n,i,data1,u;
    char ans;
public:
    list()
    {
        head=NULL;
        tail=NULL;
    }

    void create()
    {
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
    }
    void display()
    {
        ptr=head;
        cout<<"Final list is:"<<endl;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<endl;
            ptr=ptr->next;
        }
    }
};
main()
{
    list l;
    l.create();
    l.display();
}
