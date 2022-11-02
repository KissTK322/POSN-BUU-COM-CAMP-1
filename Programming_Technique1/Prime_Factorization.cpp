#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int q , num; cin >> q;
	while(q--){
		cin >> num;
		int sq = sqrt(num);
		for(int i=2;i<=sq;i++){
			while(num % i == 0){
				num /= i;
				cout << i << " ";
				if(num != 1) cout << "x ";
			}
		}
		if(num != 1) cout << num;
		cout << "\n";
	}	
}