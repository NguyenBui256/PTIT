#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define ll long long
#define FORU(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--)
#define fi first
#define se second

void solve()
{
    ifstream input("Input.txt");
    fstream output; 
    output.open("Output.txt", ios::out);
    int t; input >> t;
    while(t--)
    {
        string s; input >> s;
        string ans = "";
        for(int i = 0; i < s.size(); i++) 
        {
            if(s[i] >= '0' && s[i] <= '9') ans += s[i];
        }
        if(ans != "") output << ans << '\n';
        else cout << -1 << '\n';
    }
    input.close();
    output.close();
}


int main(){
    solve();
}   