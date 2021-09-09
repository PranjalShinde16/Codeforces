#include<iostream>
using namespace std;
 
int main(){
 int n;
 cin>>n;
 int a[n]; 
 int maxvalue=0, maxindex=0, minvalue=1001, minindex=0;
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 for(int i=0; i<n; i++){
    if(maxvalue<a[i]){
        maxvalue=a[i];
        maxindex=i;
    }
     if(minvalue>=a[i]){
        minvalue=a[i];
        minindex=i;
    }
 }
 if(maxindex>minindex){
    cout<<(maxindex-1)+(n-minindex)-1;
 }
 else{
    cout<<(maxindex-1)+(n-minindex);
 }
}