#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    vector<int> first_start, first_end, second_start, second_end;

    int a;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        int q, t;
        cin >> q >> t;

        first_start.pb(q), first_end.pb(t);
    }

    int b;
    cin >> b;

    for (int i = 0; i < b; i++)
    {
        int q, t;
        cin >> q >> t;

        second_start.pb(q), second_end.pb(t);
    }

    sort(first_start.begin(), first_start.end());
    sort(second_start.begin(), second_start.end());
    sort(first_end.begin(), first_end.end());
    sort(second_end.begin(), second_end.end());

    int res = 0;
    res = max(res, second_start[b - 1] - first_end[0]);

    res = max(res, first_start[a - 1] - second_end[0]);

    cout << res << "\n";
}
