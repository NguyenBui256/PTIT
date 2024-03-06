#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;

int dp[1000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    char a[7][28];
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        pair<double,double> a[n];
        int Max = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        for(int i = 0; i < n; i++)
        {
            dp[i] = 1;
            for(int j = 0; j < i; j++)
            {
                if(a[j].first < a[i].first && a[j].second > a[i].second)
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        cout << *max_element(dp,dp+n) << "\n";
    }
}


