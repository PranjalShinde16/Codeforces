#include<iostream>
using namespace std;
int main()
{ios:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
   int n,m,z1=0,z2=0;
   cin>>n>>m;
for(int i=0;i<n;i++)
   {int a; cin>>a;
    if(a>0){z1++;}
    else z2++;}
for(int i=0;i<m;i++){
   int c,d;
  cin>>c>>d;
   if((d-c+1)/2<=z1&&(d-c+1)/2<=z2&&(d-c+1)%2 == 0){cout<<"1"<<endl;}
  else{cout<<"0"<<endl;}
}}
