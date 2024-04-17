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

string ans = "1238004765", v;
map<string, int> m;
string left1(string l)
{
    char tmp = l[1];
    l[1] = l[0];
    l[0] = l[3];
    l[3] = l[7];
    l[7] = l[8];
    l[8] = l[5];
    l[5] = tmp;
    return l;
}
string right1(string r)
{
    char tmp = r[2];
    r[2] = r[1];
    r[1] = r[4];
    r[4] = r[8];
    r[8] = r[9];
    r[9] = r[6];
    r[6] = tmp;
    return r;
}
string left2(string l)
{
    char tmp = l[1];
    l[1] = l[5];
    l[5] = l[8];
    l[8] = l[7];
    l[7] = l[3];
    l[3] = l[0];
    l[0] = tmp;
    return l;
}
string right2(string r)
{
    char tmp = r[2];
    r[2] = r[6];
    r[6] = r[9];
    r[9] = r[8];
    r[8] = r[4];
    r[4] = r[1];
    r[1] = tmp;
    return r;
}
void Try()
{
    queue<pair<string, int>> q;
    q.push({v, 0});
    pair<string , int> p;
    string s;
    while(1)
    {
        p = q.front();
        q.pop();
        if(p.se == 13) return;
        s = left1(p.fi);
        if(!m[s])
        {
            m[s] = p.se+1;
            q.push({s, p.se+1});
        }
        s = right1(p.fi);
        if(!m[s])
        {
            m[s] = p.se+1;
            q.push({s, p.se+1});
        }
    }
}
int solve()
{
    int res = 1e9;
    queue<pair<string, int>> q;
    q.push({ans, 0});
    pair<string , int> front;
    while(1)
    {
        front = q.front();
        q.pop();
        if(m[front.fi]) res = min(res, m[front.fi] + front.se);
        if(front.se == 13) return res;
        q.push({left2(front.fi), front.se+1});
        q.push({right2(front.fi), front.se+1});
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        v = "";
        m.clear();
        char c;
        for(int i = 0; i < 10; i++)
        {
            cin>>c;
            v += c;
        }
        Try();
        cout<<solve()<<"\n";
    }
}
