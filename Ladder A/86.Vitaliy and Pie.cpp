#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
int main()
{
    fast;
    ll n,ans=0;
    cin>>n;
    string str;
    cin>>str;
    map<char,int>key;
    for(int i=0;i<str.length();i++)
    {
        if(i%2==0)
        {
           key[toupper(str[i])]++;
        }
        else
        {
           if(key[str[i]]>0){key[str[i]]--;}
           else{ans++;}
        }
    }
    cout<<ans;
}
//#include<bits/stdc++.h>
//#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
//#define ll long long
//using namespace std;
//int main()
//{
//    fast;
//    ll n;
//    cin>>n;
//    string str;
//    cin>>str;
//    int r=0,k=0,ans=0;
//    int m = str.length()/2;
//    for(int i=0;i<m;i++)
//    {
//      char p;
//      p = str[(2*i)+ 1];
//      for(int j=0;j<(2*i)+1;j++){ if(str[j]==p){r++;} }
//      p = str[(2*i) + 1] + 32;
//      for(int j=0;j<=(2*i)+1;j++){ if(str[j]==p){k++;} }
//      if(k<=r){ans++;}
//      r=0;k=0;
//    }
//    cout<<ans;
//    return 0;
//}
//// break
//#include<bits/stdc++.h>
//#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
//#define ll long long
//using namespace std;
//int main()
//{
//    fast;
//    ll n;
//    cin>>n;
//    string str,key,room;
//    cin>>str;
//    for(int i=0;i<str.length();i++)
//    {
//        if(i%2==0)
//        {
//            key += str[i];
//        }
//        else
//        {
//            room += str[i];
//        }
//    }
//    int r=0,k=0,ans=0;
//    int m = key.length();
//    for(int i=0;i<m;i++)
//    {
//      char p;
//      p = room[i];
//      for(int j=0;j<i;j++){ if(room[j]==p){r++;} }
//      p = room[i] + 32;
//      for(int j=0;j<=i;j++){ if(key[j]==p){k++;} }
//      if(k<=r){ans++;}
//      r=0;k=0;
//    }
//    cout<<ans;
//    return 0;
//}
