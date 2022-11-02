#include <bits/stdc++.h>
using namespace std;

int qs[1010][1010];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int row , col , q , i , j , k , l; cin >> row >> col;
	for(int i=1;i<=row;i++) {
		for(int j=1;j<=col;j++) {
			cin >> qs[i][j];
			qs[i][j] += qs[i-1][j] + qs[i][j-1] - qs[i-1][j-1];
		}
	}
	cin >> q;
	while(q--){
		cin >> i >> j >> k >> l;
		cout << qs[k+1][l+1] - qs[k+1][j] - qs[i][l+1] + qs[i][j] << "\n";
	}
}