#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 100100;
ll labor[N];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	ll n , m;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> labor[i];
	}
	ll l = 0 , r = 1e6;
	while(l < r){
		ll sum = 0;
		ll mid = (l+r)/2;
		for(int i=0;i<n;i++){
			sum += mid/labor[i];
		}
		if(sum >= m) r = mid;
		else l = mid + 1;

	}
	cout << l;
}