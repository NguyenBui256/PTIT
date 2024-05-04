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

int ok = 0, n, k, goal;
int a[50], used[50];

void Try(int sum, int cnt)
{
    if(sum > goal || ok) return;
    if(cnt == k){
        ok = 1;
        return;
    }
    for(int j = 0; j < n; j++){
        if(!used[j]){
            used[j] = 1;
            sum += a[j];
            if(sum == goal) Try(0,cnt+1);
            else Try(sum, cnt);
            sum -= a[j];
        }
        used[j] = 0; // backtrack
    }
}

void solve()
{
    ok = 0;
    memset(used,0,sizeof(used));
    cin >> n >> k;
    int sum = 0;
    FOR(i,0,n) {
        cin >> a[i];
        sum += a[i];
    }
    if(sum % k != 0){
        cout << "0\n";
        return;
    }
    else
    {
        goal = sum / k;
        Try(0,0);
        cout << ok << "\n";
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