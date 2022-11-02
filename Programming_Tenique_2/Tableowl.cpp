#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1010;
const int M = INT_MAX;
int dp[N][N];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int row , col , ans = 1e9; cin >> row >> col;
	for(int i=1;i<=row;i++)
		for(int j=1;j<=col;j++)
			cin >> dp[i][j];
	for(int i=1;i<=row;i++) dp[i][0] = dp[i][col+1] = 1e9;
	for(int i=row-1;i>=1;i--){
		for(int j=1;j<=col;j++){
			dp[i][j] += min({dp[i+1][j-1] , dp[i+1][j] , dp[i+1][j+1]});
		}
	}
	for(int i=0;i<=col;i++) ans = min(ans , dp[1][i]);
	cout << ans;
}