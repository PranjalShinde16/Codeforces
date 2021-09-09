#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,r2,c1,c2,d1,d2;
    int p1,p2,p3,p4;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    for(int i=1;i<=9;i++)
    {
        p1 = i;
        p2 = c1-i;
        p3 = d1-i;
        p4 = c2-p3;
        if(p1>0 && p2>0 && p3>0 && p4>0){
        if(p1<10 && p2<10 && p3<10 &&p4<10){
        if( p1!=p2 &&p2!=p3 && p3!=p4 && p1!=p3 && p2!=p4 && p1!=p4){
        if( p2+p3==r2 && p1+p4==r1 && p2+p4==d2)
        {cout<<p1<<"  "<<p4<<endl<<p2<<"  "<<p3;return 0;
        }}}}}
    cout<<"-1";
    return 0;
}
