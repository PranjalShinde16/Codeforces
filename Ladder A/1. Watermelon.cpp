#include<iostream>
using namespace std;
int main()
{
    int w;
    cin>>w;
    for(int i=1; i<=w; i++)
        {
            if(i%2==0&&(w-i)%2==0&&i<w)
                {cout<<"YES";
                break;}
                else if(i==w){
                    cout<<"NO";}}
}