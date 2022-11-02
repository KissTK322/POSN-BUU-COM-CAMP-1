#include <bits/stdc++.h>
using namespace std;

int x[10010][10010] , sorp[10010] , cost[10010] , mx[10010] , fnd = 0;


int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n , q , jai; cin >> n >> q;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cin >> x[i][j];
			if(x[i][j] == i) sorp[i]++;
			else if(x[i][j] == j) sorp[j]++;
		}
	}
	for(int i=0;i<n;i++) mx[i] = sorp[i];
	sort(mx,mx+n,greater<int>());
	for(int i=0;i<n;i++) cin >> cost[i];
	while(q--){
		fnd = 0;
		cin >> jai;
		for(int i=0;i<n && !fnd;i++){
			for(int j=0;j<n && !fnd;j++){
				if(sorp[j] == mx[i] && jai - cost[i] >= 0) cout << i+1 << "\n" , fnd = 1;
			}
		}
		if(!fnd) cout << "Not enough money\n" , fnd = 1;
	}
}