#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int odd , even , q , n , num; cin >> q;
	while(q--){
		cin >> n;
		odd = 0 , even = 0;
		for(int i=0;i<n;i++){
			cin >> num;
			if(i%2) odd+=num;
			else even += num;
		}
		if(n%2 || abs(even - odd) <= 1) cout << "YES\n";
		else cout << "NO\n";
	}
}