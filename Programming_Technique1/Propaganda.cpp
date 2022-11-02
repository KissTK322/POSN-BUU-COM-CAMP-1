#include <bits/stdc++.h>
using namespace std;

int prime(int n){
	int sq = sqrt(n);
	for(int i=2;i<=sq;i++){
		if(!(n%i)){
			cout << "No";
			return 0;
		}
	}
	(n > 1) ?  cout << "Yes" : cout << "No";
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int k ; cin >> k;
	prime(k);
}