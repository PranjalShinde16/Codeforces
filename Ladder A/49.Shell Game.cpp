#include<bits/stdc++.h>
using namespace std;
int main()
{   ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long n;
    cin>>n;
    long long a,b;
    for(int i=0;i<3;i++){
    cin>>a>>b;
    if(a==n){n=b;}
    else if(b==n){n=a;}
    }
    cout<<n;
    return 0;
}
