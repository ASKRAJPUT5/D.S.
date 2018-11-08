#include<iostream>
using namespace std;
int t=1;
class trees
{

public:
    int tree[50];
    trees()
    {

        for(int i=1;i<=50;i++)
        {
            tree[i]=-1;
        }

    }

    int search1(int s1,int nm1)
    {

        if(t==1)
        {
            cout<<"No element in tree."<<endl;
            return -1;
        }
        if(tree[s1]==-1)
            return s1/2;
        if(tree[s1]>nm1)
            search1(2*s1,nm1);
        else
            search1((2*s1)+1,nm1);
    }
    void insert1(int s,int num)
    {
        int x;
        if(t==1)
        {
            tree[t++]=num;
            return;
        }
            x=search1(s,num);
            if(tree[x]>num)
                tree[2*x]=num;
            else
                tree[(2*x)+1]=num;
            t++;

    }
};
int main()
{
    trees tr;
    int n,i,num1;
    cout<<"Enter size:";
    cin>>n;
    cout<<"Enter nodes:";
    for(i=1;i<=n;i++)
    {
        cin>>num1;
        tr.insert1(1,num1);
    }
    tr.display();
    return 0;
}
