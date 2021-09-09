#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int l1,l2,count=0,n1,n2;
    bool f(false);
    l1 = s1.length();
    l2 = s2.length();
    if(l1!=l2){cout<<"NO"; return 0;}
    else
    {
        for(int i=0;i<l1;i++)
        {
            if(s1[i]!=s2[i])
            {
                count++;
                if(f == false){n1 = i; f= true;}
                else {n2 = i;}
            }
        }
        if(count>2){cout<<"NO"; return 0;}
        else
        {
            if(s1[n1]==s2[n2]&&s1[n2]==s2[n1]){cout<<"YES";}
            else {cout<<"NO";}
        }
    }
    return 0;
}
