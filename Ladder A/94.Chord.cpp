#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string str[] = {"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};
    int majormin[] = {0,0,0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<12;i++)
    {
        if(str[i]==s1){majormin[i]=1; }
    }
    for(int i=0;i<12;i++)
    {
        if(str[i]==s2){majormin[i]=1;}
    }
    for(int i=0;i<12;i++)
    {
        if(str[i]==s3){majormin[i]=1;}
    }
    for(int i=0;i<12;i++)
    {
        if(majormin[i]==1){
        if(majormin[(i+4)%12]==1&&majormin[(i+7)%12]==1){ cout<<"major"; return 0; }
        else if(majormin[(i+3)%12]==1&&majormin[(i+7)%12]==1){cout<<"minor"; return 0;}
    }}
    cout<<"strange";
    return 0;
}
