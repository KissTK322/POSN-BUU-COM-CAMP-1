#include <bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
	if(a%b == 0) return b;
	return gcd(b,a%b);
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n; cin >> n;
	long long int k;
	int num[n];
	for(auto &e : num) cin >> e;
	k = num[0];
	for(auto e : num){
		k = (k * e)/gcd(e , k);
	}
	cout << k;
}