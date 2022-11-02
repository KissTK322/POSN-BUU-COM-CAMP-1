#include <bits/stdc++.h>
using namespace std;

int mic[100100] , a[100100];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n , q , st , en; cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		mic[i] = mic[i-1] + a[i];
	}
	cin >> q;
	while(q--){
		cin >> st >> en;
		cout << mic[en] - mic[st-1] << "\n";
	}
}