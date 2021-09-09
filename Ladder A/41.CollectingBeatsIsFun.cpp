#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    k=2*k;
    char a[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    int b[9];
    for(int i=0;i<9;i++){b[i]=0;}
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(a[i][j]=='.'){}
            else if(a[i][j]=='1'){b[0]+=1;}
            else if(a[i][j]=='2'){b[1]+=1;}
            else if(a[i][j]=='3'){b[2]+=1;}
            else if(a[i][j]=='4'){b[3]+=1;}
            else if(a[i][j]=='5'){b[4]+=1;}
            else if(a[i][j]=='6'){b[5]+=1;}
            else if(a[i][j]=='7'){b[6]+=1;}
            else if(a[i][j]=='8'){b[7]+=1;}
            else if(a[i][j]=='9'){b[8]+=1;}
        }
    }
   for(int i=0;i<9;i++){
    if(b[i]>k){cout<<"NO";return 0;}
   }
   cout<<"YES";
    return 0;}
