#include<iostream>
using namespace std;
struct node{
int data;
node *left;
node *right;
};
struct node1
{
    node *t;
    node1 *next;
};
node *root;
node1 *top=NULL;

void insert(node *root1,node *newnode)
{
if(root1==NULL)
{
    root=newnode;
    return;
}
if((root1->data)>=(newnode->data))
{
    if((root1->left)==NULL)
        root1->left=newnode;
    else
        insert((root1->left),newnode);
}
else{
    if((root1->right)==NULL)
        root1->right=newnode;
    else
        insert((root1->right),newnode);
}
}
void push(node *current)
{
    node1 temp=new node1;
    temp->t=current;
    temp->next=NULL;
    if(top==NULL)
    {
        top=temp;
    }
    else
    {
        top->next=temp;
        top=temp;
    }
}
node pop()
{
    node1 *p,*s;
    s=top;
    while(p->next!=top)
    {
        p=p->next;
    }
    p->next=NULL;
    top=p;
    return s->t;
}
void display(node *root1)
{
    if(root1==NULL)
        return;
    node *curr=root1;
    while(curr!=NULL) || top!=NULL)
    {
        while(curr!=NULL)
        {
            push(curr);
            curr->left;
        }
        curr=pop();
        cout<<curr->data<<" ";
        curr=curr->right;
    }
}
int main()
{
int i,n,d;
cout<<"Enter no of elements"<<endl;
cin>>n;
root=NULL;

for(i=0;i<n;i++)
{
cin>>d;
node *node1=new node;
node1->data=d;
node1->left=NULL;
node1->right=NULL;
insert(root,node1);
}
display(root);
}
