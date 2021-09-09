#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(y1==y2)
    {
        cout<<x1<<" "<<y1+(x2-x1)<<" "<<x2<<" "<<y2+(x2-x1);
        return 0;
    }
    if(x1==x2)
    {
        cout<<x1+(y2-y1)<<" "<<y1<<" "<<x2+(y2-y1)<<" "<<y2;
        return 0;
    }
    else
    {
        int k1=x2-x1,k2=y2-y1;
        if(k1<0){k1 = k1*(-1);}
        if(k2<0){k2 = k2*(-1);}
        if(k1==k2)
        {cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
        return 0;}
    }
    cout<<"-1";
    return 0;
}
