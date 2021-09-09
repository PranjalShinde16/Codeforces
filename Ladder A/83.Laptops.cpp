//#include<bits/stdc++.h>
//#define ll long long
//#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
//using namespace std;
//class laptop
//{
//public:
//     ll price,quality;
//};
//int main()
//{
//    fast;
//    ll n;
//    cin>>n;
//    laptop a[n];
//    for(int i=0;i<n;i++){cin>>a[i].price>>a[i].quality;}
//    laptop dummy;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            if(a[i].price>a[j].price)
//            {
//                dummy.price = a[i].price;
//                dummy.quality = a[i].quality;
//                a[i].price = a[j].price;
//                a[i].quality = a[j].quality;
//                a[j].price = dummy.price;
//                a[j].quality = dummy.quality;
//            }
//        }
//    }
//    for(int i=0;i<n-1;i++)
//    {
//        if(a[i+1].quality >a[i].quality){cout<<"Happy Alex";return 0;}
//    }
//    cout<<"Poor Alex";
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector <pair<int,int>> vect;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		vect.push_back(make_pair(a,b));
	}
	sort(vect.begin(),vect.end());
	bool r(false);
	for(int i=1;i<n;i++){
		if(vect[i].second<vect[i-1].second){
			r=true;
			break;
		}
	}
	if(r){cout<<"Happy Alex";}
	else{cout<<"Poor Alex";}
    return 0;
}
