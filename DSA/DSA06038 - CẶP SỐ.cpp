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
#define all(a) a.begin(), a.end()

int n;
int merge(int *a, int *b, int l, int r, int mid)
{
    int i = l, j = i, k = mid;
    int res = 0;
    while(i <= mid - 1 and k <= r)
    {
        if(a[i] <= a[k]) b[j++] = a[i++];
        else
        {
            b[j++] = a[k++];
            res += mid - i;
        }
    }
    while(i <= mid - 1) b[j++] = a[i++];
    while(k <= r) b[j++] = a[k++];
    for(i = l; i <= r; ++i) a[i] = b[i];
    return res;
}

int mergeSort(int *a, int *b, int l, int r)
{
    int mid, res = 0;
    if(l < r)
    {
        mid = (l + r) >> 1;
        res += mergeSort(a, b, l, mid);
        res += mergeSort(a, b, mid + 1, r);
        res += merge(a, b, l, r, mid + 1);
    }
    return res;
}

void solve()
{
    int n;
        cin >> n;
        int a[n + 5], b[n + 5], c[n + 5];
        for (int i = 0; i < n; i++) cin >> a[i];
        int idx = 0;
        for (int i = 0; i < n; i++) if((a[i] & 1) ^ 1) c[idx++] = a[i];
        int res = mergeSort(c, b, 0, idx - 1);
        int cnt = 0;
        a[n] = 1;
        for (int i = 1; i <= n; i++)
        {
            if((a[i] & 1) ^ 1 and (a[i - 1] & 1) ^ 1) ++cnt;
            else if(a[i] & 1 and (a[i - 1] & 1) ^ 1)
            {
                res -= mergeSort(a, b, i - 1 - cnt, i - 1);
                cnt = 0;
            }
        }
        cout << res << endl;
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