#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define ii pair<int,int>
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; cin.ignore(); while(t--)
#define all(a) a.begin(), a.end()

map<int,int> mp;
string a, b;
vector<pair<int,int>> ans;

void proc(string s){
    s += " ";
    int heso = 0, bac = 0, daumu = 0;
    for(char i : s){
        if(isdigit(i)){
            if(!daumu) heso = heso * 10 + (i - '0');
            else bac = bac * 10 + (i - '0');
        }
        else if(i == '^') daumu = 1;
        else if(i == ' '){
            mp[bac] += heso;
            heso = bac = daumu = 0;
        }
    }
}

void solve(){
    getline(cin,a);
    getline(cin,b);
    mp.clear(); ans.clear();
    proc(a);
    proc(b);
    for(auto i : mp) ans.pb(i);
    FORD(i,ans.size()-1,0){
        cout << ans[i].se << "*x^" << ans[i].fi << " + ";
    }
    cout << ans[0].se << "*x^" << ans[0].fi << "\n";
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