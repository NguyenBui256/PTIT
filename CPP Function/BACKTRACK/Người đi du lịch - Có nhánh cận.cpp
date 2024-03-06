#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;

// struct matrix{
//     ll a[2][2];
//     friend matrix operator * (matrix x, matrix y)
//     {
//         matrix kq; 
//         for(int i = 0; i < 2; i++) 
//         {
//             for(int j = 0; j < 2; j++)
//             {
//                 kq.a[i][j] = 0;
//                 for(int k = 0; k < 2; k++) 
//                 {
//                     kq.a[i][j] += x.a[i][k] * y.a[k][j];
//                     kq.a[i][j] %= mod;
//                 }
//             }
//         }
//         return kq;
//     }
// };

// matrix binpow(matrix a, ll n)
// {
//     if(n == 1) return a;
//     matrix kq = binpow(a, n / 2);
//     if(n % 2 == 1) return kq * kq * a;
//     return kq * kq;
// }

// ll binpow(int a, int n)
// {
//     if(n == 0) return 1;
//     ll kq = binpow(a, n / 2);
//     if(n % 2 == 1) return ((kq % mod * kq % mod) % mod * a % mod) % mod;
//     return (kq % mod * kq % mod) % mod;
// }

// const long long maxn = 100005;
// ll a[maxn], n;
// ll t[4 * maxn];
// ll Max = 0;

// void build(ll v, ll l, ll r)
// {
//     if(l == r)
//     {
//         t[v] = a[l];
//         Max = max(Max,t[v]);
//     }
//     else
//     {
//         ll m = (l + r) / 2;
//         build(2*v, l, m);
//         build(2*v+1, m + 1, r);
//         Max = max(Max, t[2*v]);
//         Max = max(Max, t[2*v+1]);
//         t[v] = t[2*v] + t[2*v+1];
//         Max = max(Max, t[v]);
//     }
// }

int n;
int a[15][15]; //mang luu chi phi giua cac thanh pho
int X[15]; //mang luu thu tu cac thanh pho di qua
int Min = 1e9, ans = 1e9; //Min la chi phi it nhat, ans la dap an
int sum = 1; //tong chi phi
int visited[100]; //mang danh dau da di qua hay chua

void nhap()
{
    memset(visited,0,sizeof(visited));
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if(a[i][j] < Min) Min = a[i][j];
        }
    }
}

void Try(int i, int sum)
{
    for(int j = 2; j <= n; j++)
    {
        if(visited[j] == 0)
        {
            visited[j] = 1;
            X[i] = j;
            sum += a[X[i-1]][X[i]];
            if(i == n)
            {
                ans = min(ans, sum + a[X[n]][1]);
            }
            else if(sum + (n - i) * Min < ans)
            {
                Try(i + 1, sum);
            }
            visited[j] = 0;
            sum -= a[X[i-1]][X[i]];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	nhap();
    X[1] = 1;
    Try(2,0);
    cout << ans << "\n";
}


