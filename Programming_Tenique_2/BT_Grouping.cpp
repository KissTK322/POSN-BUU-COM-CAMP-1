#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1000010;

ll a[N] , dis[N];


int main(){
	cin.tie(0)->sync_with_stdio(0);
	ll q , n , k , sum = 0; cin >> q;
	while(q--){
		cin >> n >> k;
		sum = 0;
		for(ll i=0;i<n;i++){
			cin >> a[i];
		}
		for(ll i=1;i<n;i++){
			dis[i-1] = abs(a[i-1] - a[i]);  
		}
		sort(dis,dis+n);
		for(ll i=0;i<n-k+1;i++){
			sum += dis[i];
		}
		cout << sum << "\n";
		memset(a,0,sizeof(a));
		memset(dis,0,sizeof(dis));
	}
}