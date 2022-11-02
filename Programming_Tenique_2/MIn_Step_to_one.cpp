#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1000010;
const int M = INT_MAX;
int dp[N];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int q , n; cin >> q;
	for(int i=2;i<=N;i++){
		dp[i] = dp[i-1] + 1;
		if(i % 2 == 0){
			if(dp[i/2] + 1 < dp[i]) dp[i] = dp[i/2] + 1;
		}
		if(i % 3 == 0){
			if(dp[i/3] + 1 < dp[i]) dp[i] = dp[i/3] + 1;
		}
	}
	while(q--){
		cin >> n;
		cout << dp[n] << "\n";
	}

}