#include<iostream>
using namespace std;
int main()
{   ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int m,n,eat=0,eat1=0,numofrow,numofcolumn;
    cin>>m>>n;
    char a[m][n];
    for(int i=0;i<m;i++){
            int count=0;
        for(int j=0;j<n;j++)
            {cin>>a[i][j];
            if(a[i][j]=='.'){count = count + 1;}}
    if(count == n){eat = eat + count;}
}
numofrow = eat/n;
    for(int i=0;i<n;i++){
            int count=0;
        for(int j=0;j<m;j++)
            {
            if(a[j][i]=='.'){count = count + 1;}}
    if(count == m){eat1 = eat1 + count;}
}
numofcolumn = eat1/m;
eat = eat + eat1;
eat = eat - (numofcolumn*numofrow);
cout<<eat;
}
