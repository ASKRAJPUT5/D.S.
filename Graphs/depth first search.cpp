#include<iostream>
using namespace std;
main()
{
    int g[50][50],i,j,k,m,n,u,v,s,visit[20],visited[20],stack[20],top=-1;
    cout<<"Enter vertices:";
    cin>>n;
    cout<<"Enter edges:";
    cin>>m;
    for(u=1;u<=n;u++)
    {
        for(v=0;v<n;v++)
            g[u][v]=0;
    }
    for(k=1;k<=m;k++)
    {
        cout<<"Enter source:";
        cin>>i;
        cout<<"Enter destination:";
        cin>>j;
        g[i][j]=1;
    }
    for(u=1;u<=n;u++)
    {
        for(v=1;v<=n;v++)
            {
                cout<<g[u][v]<<" ";
            }
        cout<<endl;
    }
    cout<<"Enter Source===>";
    cin>>s;
    cout<<endl<<"DFS:"<<endl;
    cout<<s<<" ";
    visited[s]=1;
    k=1;
    while(k<n)
    {
        for(j=n;j>=1;j--)
        {
            if(g[s][j]==1 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                stack[++top]=j;
            }
        }
        s=stack[top--];
        cout<<s<<" ";
        k++;
        visit[s]=0;
        visited[s]=1;
    }
}
