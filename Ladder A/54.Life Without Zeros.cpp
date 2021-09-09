#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    long long a,b;
    string x,y,z;
    cin>>a>>b;
    long long c=a+b;
    while(a!=0)
    {
        int k = a%10;
        if(k!=0){ x=to_string(k)+x;}
        a = a/10;
    }
    while(b!=0)
    {
        int k = b%10;
        if(k!=0){ y=to_string(k)+y;}
        b = b/10;
    }
    while(c!=0)
    {
        int k = c%10;
        if(k!=0){ z=to_string(k)+z;}
        c = c/10;
    }
    a = stoi(x);
    b = stoi(y);
    c = stoi(z);
    if(c == a+b){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}
