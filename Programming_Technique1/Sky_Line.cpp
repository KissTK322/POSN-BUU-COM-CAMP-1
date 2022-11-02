#include <bits/stdc++.h>
using namespace std;

int high[10010];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int l , h , r , q , old = 0; cin >> q;
	while(q--){
		cin >> l >> h >> r;
		for(int i=l;i<r;i++){
			if(high[i] < h){
				high[i] = h;
			}
		}
	}
	for(int i=0;i<=300;i++){
		if(high[i] != old){
			old = high[i];
			cout << i << " " << high[i] << "\n";
		}
	}
	return 0;
}