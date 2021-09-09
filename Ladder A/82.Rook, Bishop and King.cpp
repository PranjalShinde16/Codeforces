#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,b1,a2,b2;
    cin>>a1>>b1>>a2>>b2;
    if(a1==a2||b1==b2){cout<<"1"<<endl;}
    else{cout<<"2"<<endl;}
	if(abs(a2-a1)==abs(b2-b1)){cout<<"1"<<endl;}
	else if((a1+b1)%2==(a2+b2)%2){ cout<<"2"<<endl;	}
	else{ cout<<"0"<<endl;	}
    int k1,k2;
    k1 = max(a1,a2) - min(a1,a2);
    k2 = max(b1,b2) - min(b1,b2);
    if(k2>k1){cout<<k2<<endl;}
    else if(k1>k2){cout<<k1<<endl;}
    else{cout<<k1<<endl;}
    return 0;
}
