#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,count=0;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>h){count=count+2;}
            else{count=count+1;}
    }
    cout<<count;
    return 0;
}
