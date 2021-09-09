#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int k[8];
    k[0] = (a+b)*c;
    k[1] = (a*b)+c;
    k[2] = a+b*c;
    k[3] = a*b+c;
    k[4] = a+(b*c);
    k[5] = a*(b+c);
    k[6] = a+b+c;
    k[7] = a*b*c;
    int max;
    max = k[0];
    for(int i=0;i<8;i++)
    {
        if(k[i]>max){max = k[i];}
    }
    cout<<max;
    return 0;
}
