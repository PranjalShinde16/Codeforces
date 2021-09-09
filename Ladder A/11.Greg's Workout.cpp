#include<iostream>
using namespace std;
int main()
{
    int n,chest=0,biceps=0,back=0,op;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){
        chest = chest + a[i];
        i++;
        if(i<n){biceps = biceps + a[i];
        i++;}
        else{break;}
        if(i<n){back = back + a[i];}
        else{break;}
        }
    op = chest;
    if(biceps>=chest&&biceps>=back){cout<<"biceps";}
    else if(back>=chest&back>=biceps){cout<<"back";}
    else {cout<<"chest";}
    }