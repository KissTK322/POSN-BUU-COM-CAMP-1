#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1010;

int dp[N][N];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n; cin >> n;
	for(int i=0;i<n;i++)
		for(int j=0;j<=i;j++)
			cin >> dp[i][j];
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<=i;j++){
			dp[i][j] += max(dp[i+1][j] , dp[i+1][j+1]);
		}	
	}
	cout << dp[0][0];
}