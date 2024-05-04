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

bool check(string s){
    if(s == "") return false;
    int open = 0, close = 0;
    for(char i : s){
        if(i == '(') open++;
        if(i == ')') close++;
        if(close > open) return false;
    }
    if(!open && !close && s.size() == 1) return false;
    return open == close;
}

void solve()
{
    ok = 0;
    string s; cin >> s;
    if(s == ""){
        cout << "-1\n";
        return;
    }
    queue<string> q;
    set<string> se;
    map<string,int> m;
    m[s] = 1;
    q.push(s);
    while(!q.empty()){
        string tmp = q.front(); q.pop();
        if(check(tmp)){
            se.insert(tmp);
            ok = 1;
        }
        if(ok) continue;
        FOR(i,0,tmp.size()){
            if(tmp[i] == '(' || tmp[i] == ')'){
                string t = tmp.substr(0,i) + tmp.substr(i+1);
                if(m[t] == 0){
                    m[t] = 1;
                    q.push(t);
                }
            }
        }
    }
    if(se.size()){
        for(string i : se) cout << i << " ";
        cout << "\n";
    }else{
        cout << "-1\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    // cin.ignore();
    while(t--)
    {
        solve();
    }
}