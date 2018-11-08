#include<iostream>
#include<conio.h>
using namespace std;

class BST
{
public:
    int tree[40], t;
    BST();
    void insert1(int,int);
    int search1(int,int);
    void display();
};

BST::BST()
{

    for(int i=1;i<=40;i++)
    {
        tree[i]=-1;
    }
    t=1;
}

int BST::search1(int s,int num)
{
    if(tree[s]==-1)
        return s/2;
    if(tree[s]>num)
        search1(2*s,num);
    else
        search1(2*s+1,num);
}

void BST::insert1(int s, int num)
{
    int x;
    if(t==1)
    {
        tree[t++]=num;
        return;
    }
    x=search1(s,num);
    if(tree[x]>=num)
        tree[2*x]=num;
    else
        tree[2*x+1]=num;
    t++;

}

void BST::display()
{
    for(int i=1;i<=40;i++)
    {
        if(tree[i]==-1)
        {
            cout<<"";
        }
        else
            cout<<tree[i]<<endl;
    }

}

int main()
{
    BST b;
    int n,data;
    cout<<"Enter size";
    cin>>n;

    cout<<"Enter elements";
    for(int i=1;i<=n;i++)
    {
        cin>>data;
        b.insert1(1,data);
    }

    b.display();
    getch();
}
