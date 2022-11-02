#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1010;
const int M = INT_MAX;
int dp[N][N];
char str;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int row , col , mx = 0; cin >> row >> col;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			cin >> str;
			if(str == '#') dp[i][j] = 0;
			else dp[i][j] = min({dp[i-1][j] , dp[i][j-1] , dp[i-1][j-1]}) + 1;
			if(dp[i][j] > mx) mx = dp[i][j];
		}
	}
	cout << mx;
}