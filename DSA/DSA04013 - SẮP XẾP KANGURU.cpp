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

ll merge(int a[], int l, int m, int r)
{
	vector<int> x(a + l, a + m + 1);
	vector<int> y(a + m + 1, a + r + 1);
	ll i = 0, j = 0, cnt = 0;
	while (i < x.size() && j < y.size())
	{
		if (x[i] <= y[j])
			a[l] = x[i], l++, i++;
		else
		{
			cnt += x.size() - i;
			a[l] = y[j];
			l++;
			j++;
		}
	}
	while (i < x.size())
		a[l] = x[i], l++, i++;
	while (j < y.size())
		a[l] = y[j], l++, j++;
	return cnt;
}

ll mergeSort(int a[], int l, int r)
{
	ll dem = 0;
	if (l < r)
	{
		int m = (l + r) / 2;
		dem += mergeSort(a, l, m);
		dem += mergeSort(a, m + 1, r);
		dem += merge(a, l, m, r);
	}
	return dem;
}

void solve()
{
	cin >> n;
	int a[n];
	for (int &i : a)
		cin >> i;
    sort(a,a+n);
    int ans = n, l = n / 2 - 1, r = n - 1;
    while(l >= 0){
        if(2 * a[l] <= a[r]){
            ans--;
            l--;
            r--;
        }else l--;
    }
    cout << ans << "\n";
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