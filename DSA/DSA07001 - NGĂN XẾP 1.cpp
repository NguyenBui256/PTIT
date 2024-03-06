#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back

// int n, k, s, final = 0;
int a[100][100];
// int X[100];
int cot[100], nguoc[100], xuoi[100];
int ans = 0;


void solve()
{
    stack<int> st;
    string s;
    while(cin >> s)
    {
        if(s == "push") 
        {
            int x; cin >> x;
            st.push(x);
        }
        else if(s == "show")
        {
            vector<int> v;
            while(!st.empty())
            {
                v.push_back(st.top());
                st.pop();
            }
            if(v.size())
            {
                for(int i = v.size() - 1; i >= 0; i--) 
                {
                    cout << v[i] << ' ';
                    st.push(v[i]);
                }
            }else cout << "empty";            
            cout << "\n";
        }
        else 
        {
            st.pop();
        }
    }
}



int main() 
{
    int T = 1;
    // cin >> T;
    while(T--)
    {
        solve();
    }
}