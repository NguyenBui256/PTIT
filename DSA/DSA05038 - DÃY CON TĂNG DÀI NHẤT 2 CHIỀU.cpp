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

int n, ans;
ii a; 
set<ii> s[100005];

bool checkpair(ii a, ii b){
    return a.fi < b.fi && a.se < b.se;
}

bool checkset(set<ii> &se){
    for(auto i = se.begin(); i != se.end(); i++){
        if(checkpair(*i, a)) //nếu 
            return 1;
        else if(i->first >= a.first) 
            break;
    }
    return 0;
}

int bsearch(int l, int r) //tìm ra set xa nhất (về mặt chỉ số) có thể chèn thêm a vào
{
    while(l < r){
        int m = (l + r) / 2;
        if(checkset(s[m])) //kiểm tra set này liệu có thể chèn thêm a vào ko
            l = m + 1;
        else 
            r = m;
    }
    return l;
}

void solve()
{
    cin >> n;
    FOR(i,1,n+1) {
        cin >> a.fi >> a.se;
        int pos = bsearch(0,n); //vị trí 
        if(pos < n){
            auto it = ++s[pos].insert(a).first; //thêm a vào set[pos]
            while(it != s[pos].end()){
                if(checkpair(a,*it)) s[pos].erase(it++); //xóa những pair đằng sau a, bước này đảm bảo s[pos] có phần tử cuối cùng nhỏ nhất có thể
                else it++;
            }
        }
    }
    while(ans < n && s[ans].size()) ans++;
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    // TEST
    {
        solve();
    }
}