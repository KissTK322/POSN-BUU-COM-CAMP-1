#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100010;
ll a[N] , b[N];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	ll n , sum = 0; cin >> n;
	for(ll i=0;i<n;i++) cin >> a[i];
	for(ll i=0;i<n;i++) cin >> b[i];
	sort(a,a+n,greater<ll>()); sort(b,b+n);
	for(ll i=0;i<n;i++) sum += (a[i] * b[i]);
	cout << sum;
}