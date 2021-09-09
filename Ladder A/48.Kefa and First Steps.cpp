#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    int length=1,l=1;
    for(int i=0;i<n-1;i++){
        if(a[i+1]>=a[i]){l++;
        if(i==n-2){
            if(l>length){length = l;}
        }}
        else{
            if(l>length){length = l;}
            l=1;
        }
    }
    cout<<length;
    return 0;
}
