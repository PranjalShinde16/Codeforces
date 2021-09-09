#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,numA=0,numD=0;
    cin>>n;
    string s;
    cin>>s;
    int k=s.length();
    for(int i=0;i<k;i++)
    {
        if(s[i]=='A'){numA=numA+1;}
        else{numD=numD+1;}
    }
    if(numA>numD){cout<<"Anton";}
    else if(numA<numD){cout<<"Danik";}
    else{cout<<"Friendship";}
    return 0;
}
