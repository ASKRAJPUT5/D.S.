#include<iostream>
using namespace std;
main()
{
    int g[50][50],i,j,k,m,n,u,v,s,visit[20],visited[20],q[20],rear=0,front=0;
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
    cout<<endl<<"BFS:"<<endl;
    cout<<s<<" ";
    visited[s]=1;
    k=1;
    while(k<n)
    {
        for(j=1;j<=n;j++)
        {
            if(g[s][j]==1 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                q[rear++]=j;
            }
        }
        s=q[front++];
        cout<<s<<" ";
        k++;
        visit[s]=0;
        visited[s]=1;
    }
}
