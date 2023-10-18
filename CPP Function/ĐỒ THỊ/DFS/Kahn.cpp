#include<bits/stdc++.h>
using namespace std;
using ll = long long; 
 
int n, m;
vector<int> ke[1005];
int color[1005];

// ban dau la mau trang (0), nhay vao chuyen thanh mau xam (1);
// nhay vao u ma dang mau` xam (1) thi ket luan la co chu trinh 
// neu da xet xong het thi chuyen thanh mau den (2) la ko con duong di nao nua

void Kahn()
{
	queue<int> q;
	for(int i = 1; i <= n; i++)
	{
		if(degree[i] == 0) 
		{
			q.push(i);
		}
	}
	vector<int> topo;
	while(!q.empty())
	{
		int u = q.front(); q.pop();
		topo.push_back(u);
		for(int v : ke[u])
		{
			degree[v]--; // coi nhu xoa dinh? u di
			if(degree[v] == 0)
			{
				q.push(v);
			}
		}
	}
	if(topo.size() < n) cout << "Do thi co chu trinh";
	else 
	{
		for(int x : topo) cout << x << ' ';
	}
}

void nhap()
{
	cin >> n, m;
	for(int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
		degree[y]++;
	}
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    nhap();
    Kahn();
}