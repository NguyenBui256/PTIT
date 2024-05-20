#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define ii pair<int,int>
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

ll n, l, r;
ll a[100];

int proc(int pos, ll n, ll i){
    if(pos == 1) 
        return (n % 2); 
    ll tmp = a[pos-1];
    if(i == tmp + 1) return (n % 2);
    else if(i < tmp + 1) return proc(pos-1,n/2, i);
    return proc(pos-1,n/2,i-tmp-1);
}

void solve(){
    cin >> n >> l >> r;
    memset(a,0,sizeof(a));
    a[1] = 1;
    int pos = 2;
    ll tmp = n;
    n /= 2;

    //lưu các vị trí của mỗi bước tách 
    while(n){
        a[pos] = a[pos-1]*2 + 1;
        n /= 2;
        pos++;
    }

    pos--; //bước cuối bị pos++ thừa 1 lần
    ll ans = 0;
    for(ll i = l; i <= r; i++){
        ans += proc(pos,tmp,i);
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    TEST
    {
        solve();
    }
}