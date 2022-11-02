#include <bits/stdc++.h>
using namespace std;

int dp[10010][10010];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n , r , k; cin >> n >> r >> k;
	dp[1][1] = 1;
	for(int i=2;i<=n+1;i++){
		for(int j=1;j<=i;j++){
			dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])%k;
		}
	}
	cout << dp[n+1][r+1] % k ;
}