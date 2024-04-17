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

int k;

string cong(string a, string b)
{
    while(a.size() < b.size()) a = "0" + a;
    while(b.size() < a.size()) b = "0" + b;
    int du = 0;
    int n = a.size();
    for(int i = n - 1; i >= 0; i--)
    {
        int tmp = (a[i] - '0') + (b[i] - '0') + du;
        if(tmp >= k) 
        {
            du = 1;
            tmp %= k;
        }else du = 0;
        a[i] = (char)(tmp + '0');
    }
    if(du) a.insert(0,to_string(du));
    while(a[0] == '0') a.erase(0,1);
    return a;
}

void solve()
{
    int n; cin >> n;
    int a[n+1] = {};
    int Min = 1e9;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] < Min) Min = a[i];
    }
    sort(a,a+n);
    ll ans = 1e9;
    for(int i = Min; i >= 1; i--)
    {
        int k = Min / i; // tỉ số trong đề bài
        int tmp = 1; //mảng a tăng dần, biến tmp coi như phần tử tạo đc cho mảng b từ a[j]
        int sum = 0; //tổng phần tử mảng b
        int ok = 0;
        for(int j = 0; j < n; j++)
        {
            while(a[j] / tmp > k) tmp++;
            if(a[j] / tmp == k)
            {
                sum += tmp;
            }else{
                ok = 1;
                break;
            }
        }
        if(!ok && sum < ans) ans = sum;
    }
    cout << ans << "\n";
}

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // TEST
    {
        solve();
    }
}