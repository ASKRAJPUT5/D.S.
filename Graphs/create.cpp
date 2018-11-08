#include<iostream>
using namespace std;
main()
{
    int g[50][50],i,j,k,m,n,u,v;
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
}
