#include<bits/stdc++.h>
using namespace std;
 int G[10][10],visit[10],n;   

void dfs(int i)
{
    cout<<i<<endl;
    visit[i]=1;
    
    for(int j=0;j<n;j++)
    {
       if(!visit[j]&&G[i][j]==1)
            dfs(j);
    }
}
 
int main()
{
    cout<<"Enter number of vertices: "<<endl;
    cin>>n;

    cout<<"\nEnter adjencency matrix of the graph: "<<endl;
   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
       {
            cin>>G[i][j];
       }
    }
       
    for(int i=0;i<n;i++)
    {
        visit[i]=0;
    }
 
    dfs(0);
    return 0;
}
 
