#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1000010;
const int M = INT_MAX;
int dp[N];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n , start = 1 , ansstart = 1 , en , num , sum = 0 , mx = -M;
	cin >> n;
	for(int i=1 ; i <= n ; i++){
		cin >> num;
		sum += num;
		if(mx < sum) mx = sum , en = i ,ansstart = start;
		if(sum < 0) start = i + 1 , sum = 0;
	}
	cout << ansstart << " " << en << "\n" << mx;

}