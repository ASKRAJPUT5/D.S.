7#include<iostream>
using namespace std;
struct node{
int data;
node *left;
node *right;
};
node *root;
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
struct node* deleteNode(node *root,int key)
{
   if(root==NULL)
        return NULL;
   if(key < root->key)
        root->left=deleteNode(root->left,key);
   else if(key > root->key)
        root->right=deleteNode(root->right,key);
   else
   {

   }
}
void display(node *t)
{
if(t==NULL)
    cout<<"Tree is empty"<<endl;
if(t->left)
    display(t->left);
cout<<t->data<<" ";
if(t->right)
    display(t->right);
}
int main()
{
int i,n,d,x;
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
cout<<"Enter node to delete:";
cin>>x;
deleteNode(root,x);

display(root);
}
