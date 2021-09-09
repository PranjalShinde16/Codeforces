#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);
using namespace std;
int main()
{
    fast
    int n;
    cin>>n;
    ll num1=0,num2=0;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll b=-1,e=-1,e2;
    for (int i=1;i<=n;i++)
    {
        if (a[i - 1] != i)
        {
            b = i - 1;
            e = a[i - 1] - 1;
            e2 = e;
            for (int j = b; j <= e2; j++)
            {
                swap(a[j], a[e2]);
                e2--;
            }
            break;
        }
    }
    num1= b + 1;
    num2= e + 1;
    bool k=1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i - 1] != i)
        {
            cout << 0 << " " << 0;
            k = false;
            break;
        }
    }
    if (k)
    {
        cout << num1 << " " << num2;
    }
}
