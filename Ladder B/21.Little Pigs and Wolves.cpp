#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    char a[n+1][m+1];
    for(int i=0;i<n;i++){ for(int j=0;j<m;j++){ cin>>a[i][j]; } }
    for(int i=0;i<n;i++){ for(int j=0;j<m;j++)
        {
            if(a[i][j]=='W')
            {
              if(a[i][j+1]=='P'){ a[i][j]='l';a[i][j+1]='l';count++;continue; }
              else if(a[i][j-1]=='P'){  a[i][j]='l';a[i][j-1]='l';count++;continue; }
              else if(a[i+1][j]=='P'){  a[i][j]='l';a[i+1][j]='l';count++;continue; }
              else if(a[i-1][j]=='P'){ a[i][j]='l';a[i-1][j]='l';count++;continue; }
            }
        }
    }
    cout<<count;
    return 0;
}
