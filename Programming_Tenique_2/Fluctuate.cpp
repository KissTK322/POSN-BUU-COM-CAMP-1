#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1000010;
const int M = INT_MAX;
int dp[N];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int q , num , mn = M, mx = 0; cin >> q;
	while(q--){
		cin >> num;
		if(num - mn > mx) mx = num - mn;
		if(num < mn) mn = num;
	}
	cout << mx;

}