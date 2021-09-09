#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i%2!=0){
                for(int x=0;x<m;x++){cout<<"#";}
                    cout<<endl;break;
            }
            else{
                int k;
                k=i/2;
                if(k%2!=0){
                    for(int x=0;x<m-1;x++){cout<<".";}
                    cout<<"#"<<endl;break;
                }
                else{
                    cout<<"#";
                    for(int x=0;x<m-1;x++){cout<<".";}
                    cout<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
