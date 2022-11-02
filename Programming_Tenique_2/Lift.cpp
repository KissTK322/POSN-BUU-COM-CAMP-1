#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1000010;
const int M = INT_MAX;
int dp[N];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int i , q , now , sum = 0 , mn = M , ans1 , ans2;
	cin >> q;
	dp[0] = 1;
	while(q--){
		cin >> now;
		for(int i = 45001 ; i >= now ; i--) if(dp[i-now]) dp[i] = 1;
		sum += now;
	}
	for(int i=1 ; i <= sum ; i++){
			if(dp[i]){
				if(abs(sum - 2*i) < mn) {
					mn = abs(sum - 2*i);
					ans1 = i , ans2 = sum -i;
				}
			}
		}
	if(ans1 > ans2) swap(ans1,ans2);
	cout << ans1 << " " << ans2;
	return 0;
}