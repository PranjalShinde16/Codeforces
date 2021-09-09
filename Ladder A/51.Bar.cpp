#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        if(isalpha(str[0])){
            if(str == "ABSINTH" || str == "BEER" || str == "BRANDY" || str == "CHAMPAGNE" || str == "GIN" || str == "RUM" || str == "SAKE" || str == "TEQUILA" || str == "VODKA" || str == "WHISKEY" || str == "WINE")
            count++;
        }
        else{
            if(stoi(str) < 18){count++;}
        }
    }
    cout<<count;
    return 0;
}
