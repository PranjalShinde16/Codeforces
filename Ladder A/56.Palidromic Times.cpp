#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int no,on,nt,tn;
    no = stoi(str);
    nt = str[3] - 48;
    tn = str[4] - 48;
    nt = nt*10 + tn;
    on = (no%10)*10 + (no/10);
    tn = (nt%10)*10 + (nt/10);
    if(no == 23 && nt > 32){cout<<"00:00";}
    else if(no == 5 && nt >= 50 || no == 6 || no == 7 || no == 8 || no == 9 || no ==10 && nt < 1){cout<<"10:01";}
    else if(no == 15 && nt >= 51 || no == 16 || no == 17 || no == 18 || no == 19 || no ==20 && nt < 2){cout<<"20:02";}
    else
    {
        if(nt<on)
        {
            if(no<10&&on<10){cout<<"0"<<no<<":"<<"0"<<on;}
            else if(no>9&&on<10){cout<<no<<":"<<"0"<<on;}
            else if(no<10&&on>9){cout<<"0"<<no<<":"<<on;}
            else {cout<<no<<":"<<on;}
        }
        else {no++;on = (no%10)*10 + (no/10);
        if(no<10&&on<10){cout<<"0"<<no<<":"<<"0"<<on;}
        else if(no>9&&on<10){cout<<no<<":"<<"0"<<on;}
        else if(no<10&&on>9){cout<<"0"<<no<<":"<<on;}
        else {cout<<no<<":"<<on;}}
    }
}
