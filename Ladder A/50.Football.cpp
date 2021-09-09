#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;
    cin>>n;
    string s[n],s1,s2;
    for(int i=0;i<n;i++)
    {cin>>s[i];
    }
    s1 = s[0];
    for(int i=0;i<n;i++){
        if(s[i]!=s1){s2 = s[i];break;}
    }
    int score1=0,score2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s1){score1++;}
        else if(s[i]==s2){score2++;}
    }
    if(score1>score2){cout<<s1;}
    else{cout<<s2;}
    return 0;
}
