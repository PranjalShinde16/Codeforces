#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[5];
    for(int i=0;i<5;i++){cin>>num[i];}
    string str[5] = {"S","M","L","XL","XXL"};
    int n;
    cin>>n;
    string a[n];
    int m[n],z=0;
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<5;j++)
      {
         if(a[i]==str[j]){ m[z]=j;z++; break; }
      }
    }
    for(int i=0;i<n;i++)
    {
        if(m[i]==0)
        {
            if(num[0]!=0){cout<<"S"<<endl;num[0]--;}
            else if(num[1]!=0){ cout<<"M"<<endl;num[1]--; }
            else if(num[2]!=0){ cout<<"L"<<endl;num[2]--; }
            else if(num[3]!=0){ cout<<"XL"<<endl;num[3]--; }
            else if(num[4]!=0){ cout<<"XXL"<<endl;num[4]--; }
        }
        else if(m[i]==1)
        {
            if(num[1]!=0){cout<<"M"<<endl;num[1]--;}
            else if(num[2]!=0){ cout<<"L"<<endl;num[2]--; }
            else if(num[0]!=0){ cout<<"S"<<endl;num[0]--; }
            else if(num[3]!=0){ cout<<"XL"<<endl;num[3]--; }
            else if(num[4]!=0){ cout<<"XXL"<<endl;num[4]--; }
        }
        else if(m[i]==2)
        {
            if(num[2]!=0){cout<<"L"<<endl;num[2]--;}
            else if(num[3]!=0){ cout<<"XL"<<endl;num[3]--; }
            else if(num[1]!=0){ cout<<"M"<<endl;num[1]--; }
            else if(num[4]!=0){ cout<<"XXL"<<endl;num[4]--; }
            else if(num[0]!=0){ cout<<"S"<<endl;num[0]--; }
        }
        else if(m[i]==3)
        {
            if(num[3]!=0){cout<<"XL"<<endl;num[3]--;}
            else if(num[4]!=0){ cout<<"XXL"<<endl;num[4]--; }
            else if(num[2]!=0){ cout<<"L"<<endl;num[2]--; }
            else if(num[1]!=0){ cout<<"M"<<endl;num[1]--; }
            else if(num[0]!=0){ cout<<"S"<<endl;num[0]--; }
        }
        else if(m[i]==4)
        {
            if(num[4]!=0){cout<<"XXL"<<endl;num[4]--;}
            else if(num[3]!=0){ cout<<"XL"<<endl;num[3]--; }
            else if(num[2]!=0){ cout<<"L"<<endl;num[2]--; }
            else if(num[1]!=0){ cout<<"M"<<endl;num[1]--; }
            else if(num[0]!=0){ cout<<"S"<<endl;num[0]--; }
        }
    }
}
