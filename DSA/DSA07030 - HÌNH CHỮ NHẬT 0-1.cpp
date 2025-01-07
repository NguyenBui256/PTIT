#include <bits/stdc++.h>
using namespace std;

int a[1005][1005];
int l[1005], r[1005];

void solve(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            if(a[i][j] && i > 0) a[i][j] += a[i-1][j]; 
        }
    }
    int area = 0;
    pair<int,int> canh;
    for(int i = 0; i < n; i++){
        memset(l,0,sizeof(l));
        memset(r,0,sizeof(r));
        stack<int> b,c;
        for(int j = m - 1; j >= 0; j--){
            while(!b.empty() && a[i][j] <= a[i][b.top()]) b.pop();
            if(b.empty()) r[j] = -1;
            else r[j] = b.top();
            b.push(j);
        }
        for(int j = 0; j < m; j++){
            while(!c.empty() && a[i][j] <= a[i][c.top()]) c.pop();
            if(c.empty()) l[j] = -1;
            else l[j] = c.top();
            c.push(j);
        }
        for(int j = 0; j < m; j++){
            int tmp = 0;
            int left, right;
            if(l[j] == -1){
                tmp += a[i][j] * (j + 1);
                left = j + 1;
            }
            else {
                tmp += a[i][j] * (j - l[j]);
                left = j - l[j];
            }
            if(r[j] == -1){
                tmp += a[i][j] * (m - j - 1);
                right = m - j - 1;
            }
            else {
                tmp += a[i][j] * (r[j] - j - 1);
                right = r[j] - j - 1;
            }
            if(tmp == area){
                if(abs(canh.first - canh.second) > abs(a[i][j] - (right + left))){
                    canh = {a[i][j], right + left};
                }
            }
            if(tmp > area){
                area = tmp;
                canh = {a[i][j], right + left};
            }
        }
    }
    cout << area << '\n';
    // cout << canh.first << ' ' << canh.second << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}