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
vector<string> ke[100003];
map<string,bool> ok;
map<string,int> dem;
map<string,int> mp;

int n;
string s;
vector<int> a;

bool check(vector<int> a)
{
    FOR(i,0,s.size())
    {
        if((s[i] == 'D' && a[i] <= a[i+1]) || (s[i] == 'I' && a[i] >= a[i+1])) return false;
    }
    return true;
}

void solve(){
    a.clear();
    cin >> s;
    int n = s.size() + 1;
    a.resize(n);

    FOR(i,0,n) a[i] = i + 1;
    do
    {
        if(check(a)){
            for(int x : a) cout << x;
            cout << "\n";
            return;
        }
    } while (next_permutation(all(a)));  
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