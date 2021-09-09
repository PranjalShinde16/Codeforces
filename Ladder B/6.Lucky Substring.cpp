#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n7=0,n4=0;
    cin>>str;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]=='7'){n7++;}
        if(str[i]=='4'){n4++;}
    }
    if(n7==0&&n4==0){cout<<"-1";}
    else if(n7>n4){cout<<"7";}
    else if(n4>n7){cout<<"4";}
    else {cout<<"4";}
    return 0;
}
