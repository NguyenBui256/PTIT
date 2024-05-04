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
#define pll pair<long long, long long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()

int ok = 0;
string ans = "";

bool check(string s){
    int a = (s[0] - '0') * 10 + s[1] - '0';
    int b = (s[5] - '0') * 10 + s[6] - '0';
    int sum = 0;
    if(s[3] == '+') sum = a + b;
    else if(s[3] == '-') sum = a - b;
    return sum == (s[10] - '0') * 10 + s[11] - '0';
}

void Try(int i, string s)
{
    if(ok) return;
    if(i == s.size()){
        if(check(s)){
            ans = s;
            ok = 1;
        }
        return;
    }
    if(s[i] == '?'){
        if(i == 3){
            s[i] = '+';
            Try(i+1,s);
            s[i] = '-';
            Try(i+1,s);
        }
        else if(i == 0 || i == 5 || i == 10){
            for(char j = '1'; j <= '9'; j++){
                s[i] = j;
                Try(i+1,s);
            }
        }
        else if(i == 1 || i == 6 || i == 11){
            for(char j = '0'; j <= '9'; j++){
                s[i] = j;
                Try(i+1,s);
            }
        }
    }
    else Try(i+1,s);
}

void solve()
{
    string s; 
    getline(cin, s);
    ans = ""; ok = 0;
    Try(0,s);
    if(ans != "") cout << ans << "\n";
    else cout << "WRONG PROBLEM!\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        solve();
    }
}