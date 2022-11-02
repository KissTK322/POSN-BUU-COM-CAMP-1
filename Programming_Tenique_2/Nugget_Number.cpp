#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1010;
const int M = INT_MAX;
int dp[N];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n;
	cin >> n;
	dp[0] = 1;
	for(int i=6;i<=100;i++){
		if(i >= 6 && dp[i-6] == 1) dp[i] = 1;
		else if(i >= 9 && dp[i-9] == 1) dp[i] = 1;
		else if(i >= 20 && dp[i-20] == 1) dp[i] = 1;
	}
	if(n < 6){
		cout << "no\n";
	}
	else {
		for(int i=6;i<=n;i++){
			if(dp[i]) cout << i << "\n";
		}
	}
}