#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main() {
  ll n;
  cin>>n;
  ll i;
  vector <int> v;

  rep(i,n) {
    ll a; cin>>a;
    v.push_back(a);
  }
  map <int,vector<int>> mp;
  rep(i,n)
  {
    mp[v[i]].push_back(i);
  }

  vector< pair<int, int> > fin;
  for(auto m: mp) {
    if(m.second.size()==1) {
      fin.push_back(make_pair(m.first, 0));
    }
    else {
      ll p = m.second[1]-m.second[0];
      bool b=1;
      rep(i,m.second.size()-1)
      {
        if(m.second[i+1]-m.second[i]!=p) {
          b=0;
          break;
        }
      }
      if(b) fin.push_back(make_pair(m.first, p));
    }
  }
  cout<<fin.size()<<endl;
  for(auto z: fin) {
    cout<<z.first<<" "<<z.second<<endl;
  }
  return 0;
}
