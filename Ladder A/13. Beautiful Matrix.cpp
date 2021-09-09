#include<iostream>
using namespace std;
int main()
{
    int a[5][5];
    int p,q;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            }
        }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){p=i+1;q=j+1;}
            }
        } 
    p = max(p,3)-min(p,3);
    q = max(q,3)-min(q,3);
    cout<<p+q; 
    }
