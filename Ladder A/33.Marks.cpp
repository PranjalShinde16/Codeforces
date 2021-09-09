#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, m;
        cin >> n >> m;

        string v[n];
        for(int i = 0; i < n; ++i)
                {cin >> v[i];}
        char t[m];
        for(int i = 0; i < m; i++) {t[i]=0;}
        for(int i = 0; i < m; i++) {
                for(int j = 0; j < n; j++) {
                        t[i] = max(t[i], v[j][i]);
                }
        }

        int count = 0;
        for(int i = 0; i < n; ++i) {
                for(int j = 0; j < m; ++j) {
                        if(v[i][j] == t[j]) {
                                count++;
                                break;
                        }

                }
        }

        cout << count;
        return 0;
}
