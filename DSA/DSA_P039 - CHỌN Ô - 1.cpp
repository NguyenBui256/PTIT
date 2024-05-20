#include<bits/stdc++.h>
using namespace std;
const int N=2000000;
int n;
int a[25][25];
int F[N];
void solve(){
    int last=(1<<n)-1;
    memset(F,0,sizeof(F));
    for(int s=0;s<=last;s++){
        int cnt=0;
        for(int i=1;i<=n;i++)if(s>>(i-1)&1)cnt++;
        for(int i=1;i<=n;i++){
            if(s>>(i-1)&1){
                int p=s xor (1<<(i-1));
                F[s]=max(F[s],F[p]+a[cnt][i]);
            }
        }
    }
    cout<<F[last]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)cin>>a[i][j];
        }
        solve();
    }
}