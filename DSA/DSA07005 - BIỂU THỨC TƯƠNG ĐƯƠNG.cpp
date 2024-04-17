#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define ppb pop_back()
#define TEST cin >> t; while(t--)
#define MOD 1000000007
#define ii pair<int,int> 
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()


void solve(){
    string s; cin >> s;
    int n = s.size();
    int cnt[n+1] = {};
    int up = 0;
    FOR(i,0,n)
    {
        if(s[i] == '-' || s[i] == '+')
        {
            cnt[i] += up;
            if((s[i] == '-') && (i+1 < n) && (s[i+1] == '(')) up++;
        }
        else if(s[i] == ')') 
        {
            up--;   
        }
    }
    FOR(i,0,n)
    {
        if(s[i] == '+' || s[i] == '-')
        {
            if(cnt[i] % 2 == 0) cout << s[i];
            else{
                if(s[i] == '+') s[i] = '-';
                else if(s[i] == '-') s[i] = '+';
                cout << s[i];
            }
        }
        else if(s[i] != '(' && s[i] != ')') cout << s[i];
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST
    {
        solve();
    }
}