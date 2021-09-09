#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
int n,count=1;
cin>>n;
int p,q;
cin>>p;
int a[p];
for(int i=0;i<p;i++){cin>>a[i];}
cin>>q;
int b[q];
for(int i=0;i<q;i++){cin>>b[i];}
int c[p+q];
for(int i=0;i<p+q;i++){
    if(i<p){c[i]=a[i];}
    else{c[i]=b[i-p];}
}
sort(c,c+p+q);
int k=1;
for(int i=0;i<p+q;i++){
    if(c[i]==k){k+=1;
    if(k==n+1)
        {
            cout<<"I become the guy."; return 0;
        }
    }
}
cout<<"Oh, my keyboard!";
return 0;
}
