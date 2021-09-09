#include<bits/stdc++.h>
//Pranjal_Shinde
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define fast
using namespace std;
int main()
{
    int a , b;
    cin >> a >> b;
    int n = 0;
    int l1 = 0 , l2 = 0;
    for(int i = a ; i > 0 ; i /= 10)
    {
        n = max(n , i % 10);
        l1++;
    }
    for(int i = b ; i > 0 ; i /= 10)
    {
        n = max(n , i % 10);
        l2++;
    }
    n++;
    ll carry = 0;
    ll ans;
    ll num = 0;
    for(ll i=0;i<max(l1,l2);i++)
    {
        ans = (a%10) + (b%10) + carry;
        num++;
        carry = ans/n;
        a = a/10;
        b = b/10;
    }
    if(carry>0){ num++; }
    cout<<num;
}
