#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    int mintime,time=0,k;
    for(int i=0;i<n;i++){
        for(int j=0;j<a[i];j++)
        {
            cin>>k;
            time=time+(k*5)+15;

        }
        if(i==0){mintime=time;}
        else if(time<mintime){mintime = time;}
    time=0;}
    cout<<mintime;
    return 0;
}
