#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n][2];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
    }
    for(int i=0;i<n;i++){
        if(a[i][1]>k){
            b[i]=a[i][0]-a[i][1]+k;
        }
        else{
            b[i]=a[i][0];
        }
    }
    int max=b[0];
    for(int i=0;i<n;i++){
        if(b[i]>max){max = b[i];}
    }
    cout<<max;
    return 0;
}
