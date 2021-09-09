#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char a[n][m];
    bool b[n][m];
    for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>a[i][j]; b[i][j]=0;}}
    for(int x=0;x<n;x++)
    {
        for(int y=0;y<m;y++)
        {
            for(int z=0;z<m;z++)
            {
                if(z!=y&&a[x][y]==a[x][z]){ b[x][y]=1; b[x][z]=1; }
            }
        }
    }
    for(int x=0;x<m;x++)
    {
        for(int y=0;y<n;y++)
        {
            for(int z=0;z<n;z++)
            {
                if(z!=y&&a[y][x]==a[z][x]){ b[y][x]=1; b[z][x]=1; }
            }
        }
    }
    for(int i=0;i<n;i++){for(int j=0;j<m;j++){ if(b[i][j]==0){ cout<<a[i][j]; } }}
    return 0;
}
