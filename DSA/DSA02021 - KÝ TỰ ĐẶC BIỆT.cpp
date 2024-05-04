#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
#define ll long long
#define FORU(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--)
#define fi first
#define se second

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    loop:;
	while (t--)
	{
        string s; cin >> s;
        ll n; cin >> n;
        ll sz = s.size();
        ll tmp = sz;
        if(n <= sz) 
        {
            cout << s[n-1] << "\n";
            continue;
        }
        while(tmp < n) tmp *= 2;
        while(n > sz)
        {
            while(tmp + 1 > n) tmp /= 2;
            if(tmp + 1 == n) n = tmp;
            else
            {
                n = n - tmp - 1;
            }
        }
        cout << s[n-1] << "\n";
        

        
    }
    
    
}