#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[14] = {4,7,44,47,74,77,444,447,474,744,777,772,747,477};
    for(int i=0;i<14;i++)
    {
        int k = n%a[i];
        if(k == 0){cout<<"YES";return 0;}
    }
    cout<<"NO";
    return 0;
}
