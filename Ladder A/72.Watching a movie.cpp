#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,x;
   cin>>n>>x;
   int count=1,sum=0;
   for(int i=0;i<n;i++)
   {
       int l,r;
		cin>>l>>r;
		while(count+x<=l)
			count+=x;
		sum+=r-count+1;
		count=r+1;
   }
   cout<<sum;
   return 0;
}
