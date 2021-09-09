#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,k;
    std::cin>>n;
    string hand;
    std::cin>>hand;
    k = n/2;
    for(int i=0;i<k;i++)
    {
        if(hand[i]=='R'&&hand[i+k]=='L')
        {
            cout<<i+k+1<<"\t"<<i+1<<endl;
        }
        else
        {
            cout<<i+1<<"\t"<<i+k+1<<endl;
        }
    }
    return 0;
}
