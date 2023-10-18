#include<bits/stdc++.h>
using namespace std;
using ll = long long; 
 
ll hh[105];
int k = 1;

ll binpow(int a, int b) 
{
    if(b == 0) return 1;
    ll kq = binpow(a, b/2);
    if(b % 2 == 0) return kq * kq;
    return kq*kq*a;
}

bool check(ll n) 
{
       ll m = n;
    while(m) 
    {
        int x = m % 10;
        if(x == 1 || x==2 || x==3 || x==5 || x==6 || x==8 || x==9 || x==0)
        {
            return false;
        }
        m /= 10;
    }
    return true;
}

int gcd(int a, int b) 
{
    while(b != 0) 
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
//int n, k; 
//int cnt = 0;
//int dx[4] = {0,1,-1,0};
//int dy[4] = {1,0,0,-1};
//void loang(int i, int j) 
//{
//    a[i][j] = 0;
//    for(int k = 0; k < 4; k++) 
//    {
//        int i1 = i + dx[k];
//        int j1 = j + dy[k];
//        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n)
//        {
//            if(a[i1][j1] == 1)
//            {
//                ++cnt;
//                if(cnt == k) return cnt;
//                loang(i1,j1);
//            }
//        }
//        if(cnt == k) return cnt;
//    }
//    return cnt;
//}
 
bool cmp(pair<int,int> a, pair<int,int> b) 
{
    if(a.second != b.second) 
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}

ll tcs(ll n)
{
    ll sum = 0;
    while(n) 
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
 
int a[10000005];
int snt[10000005];
void sang() 
{
    a[0] = 0; a[1] = 0;
    for(int i = 2; i <= 10000003; i++) 
    {
        a[i] = 1;
    }
    for(int i = 2; i * i <= 10000003; i++) 
    {
        for(int j = i * i; j <= 10000003; j+=i) 
        {
            a[j] = 0;
        }
    }
    int x = 0;
    for(int i = 2; i <= 10000003; i++) 
    {
        if(a[i])
        {
            ++x;
            snt[x] = i;
         }
    }
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