#include<bits/stdc++.h>
#define input for(int i=0;i<n;i++){cin>>a[i];}
using namespace std;
int main()
{
    int n;
    bool r(false);
    cin>>n;
    int a[n];
    input
    sort(a,a+n);
    cout<<"1\t"<<a[0]<<endl;
    if(a[n-1]>0){cout<<"1\t"<<a[n-1]<<endl;}
    else if (a[1]<0&&a[2]<0){cout<<"2\t"<<a[1]<<"\t"<<a[2]<<endl;r=true;}
    if(r==false)
    {
        cout<<n-2<<"\t";
        for(int i=1;i<n-1;i++){cout<<a[i]<<"\t";}
        cout<<endl;
    }
    else
    {
        cout<<n-3<<"\t";
        for(int i=3;i<n;i++){cout<<a[i]<<"\t";}
        cout<<endl;
    }
    return 0;
}
