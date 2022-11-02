#include <bits/stdc++.h>
using namespace std;

int not_prime[8000000] , num[8000000];

void prime(int n){
	int sq = sqrt(n);
	for(int i=2;i<=sq;i++){
		if(not_prime[i] == 1) continue;
		for(int j=i*i;j<=n;j+=i){
			not_prime[j] = 1; 
		}
	}
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int k , cnt = 1; cin >> k;
	prime(8000000);
	for(int i=2;i<=8000000;i++){
		if(not_prime[i] == 1) continue;
		if(not_prime[i] == 0){
			num[cnt] = i;
			cnt++;
		}
	}
	cout << num[k];
}