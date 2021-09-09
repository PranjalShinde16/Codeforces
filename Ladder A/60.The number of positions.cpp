#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,count = 0;
    cin>>n>>a>>b;
    for(int i=a;i<n;i++)
    {
        for(int j=0;j<=b;j++)
        {
            if(i+j == n-1){count++;}
        }
    }
    cout<<count;
    return 0;
}
