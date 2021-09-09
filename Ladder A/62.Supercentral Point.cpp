#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n][2];
    for(int i=0;i<n;i++){cin>>a[i][0]>>a[i][1];}
    long long time = 0;
    for(int i=0;i<n;i++)
    {
        bool a1(false),a2(false),a3(false),a4(false);
        for(int j=0;j<n;j++)
        {
            if(a[j][0]==a[i][0]&&a[j][1]<a[i][1]){a1 = true;}
            else if(a[j][0]==a[i][0]&&a[j][1]>a[i][1]){a2 = true;}
            else if(a[j][1]==a[i][1]&&a[j][0]>a[i][0]){a3 = true;}
            else if(a[j][1]==a[i][1]&&a[j][0]<a[i][0]){a4 = true;}
        }
        if(a1 && a2 && a3 && a4){time++;}
    }
    cout<<time;
}
