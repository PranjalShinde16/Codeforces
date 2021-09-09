#include<bits/stdc++.h>
#include<math.h>
using namespace std;
class parallel
{
public:
    long long x,y,z;
    parallel()
    {cin>>x>>y>>z;}
};
int main()
{
    parallel obj;
    long long temp,h,b,l;
    temp = obj.x*obj.y*obj.z;
    temp = sqrt(temp);
    l = temp/obj.x;
    b = temp/obj.y;
    h = temp/obj.z;
    cout<<(l+b+h)*4;
    return 0;
}
