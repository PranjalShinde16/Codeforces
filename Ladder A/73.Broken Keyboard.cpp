#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define race s.erase(s.begin()+i)
using namespace std;
void func()
{
        string s;
        int c=0,i,j;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1])
            {
                race;
                race;
                i--;
            }
        }
        sort(s.begin(),s.end());
        if(s.size()!=0)
        {
        cout<<s[0];
        for(i=0;i<s.size()-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                   cout<<s[i+1];
            }
        }
        cout<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
}
int main()
{
    fast
    int k;
    cin>>k;
    while(k--)
    {
    func();
    }
    return 0;
}
