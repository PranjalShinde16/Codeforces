#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    long double area=0.0000000000;
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    for(int i=n-1;i>=0;i--)
    {
        area = area + (3.1415926536*a[i]*a[i]);
        i--;
        if(i>=0)
        {
            area = area - (3.1415926536*a[i]*a[i]);
        }
    }
    cout<<setprecision(14)<<area;
    return 0;
}
