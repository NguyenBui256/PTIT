#include<bits/stdc++.h>
using namespace std;
using ll = long long; 
 
int n, m;
vector<int> ke[1005];
int color[1005];

// ban dau la mau trang (0), nhay vao chuyen thanh mau xam (1);
// nhay vao u ma dang mau` xam (1) thi ket luan la co chu trinh 
// neu da xet xong het thi chuyen thanh mau den (2) la ko con duong di nao nua

bool DFS(int u)
{
	color[u] = 1;
	for(int v : adj[u])
	{
		if(color[v] == 0)
		{
			if(DFS(v)) return true;
		}
	}
	else if(color[v] == 1)
	{
		return true;
	}
	color[u] = 2;
	return false;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) 
    {
        int n; cin >> n;
        int a[n], b[n];
        int A = 0, B = 0;
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
            A = max(a[i],A);
        }
        for(int i = 0; i < n; i++) 
        {
            cin >> b[i];
            B = max(b[i],B);
        }
        if(a[n-1] == A && b[n-1] == B) 
        {
            cout << "YES\n";
            continue;
        }
        int ok = 0;
        int i = 0;
        while(i < n) 
        {
            if(a[i] > a[n-1] && i != n-1) 
            {
                int tmp = b[i];
                b[i] = a[i];
                a[i] = tmp;
            }    
            if(b[i] > b[n-1] && i != n-1) 
            {
                int tmp = a[i];
                a[i] = b[i];
                b[i] = tmp;
                A = *max_element(a,a+n);
                B = *max_element(b,b+n);
                i = 0;
            }    
            if(a[n-1] == A && b[n-1] == B) 
            {
                ok = 1;
                break;
            }
            ++i;
        }    
        if(ok == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    
}