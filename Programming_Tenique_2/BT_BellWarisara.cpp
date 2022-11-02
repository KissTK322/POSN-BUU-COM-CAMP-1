#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1010;

char a[N][N];
int b[N][125] , c[N][125];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int q , row , col , ii = 0 , jj = 0; cin >> q;
	while(q--){
		cin >> row >> col;
		for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin >> a[i][j] , b[i][a[i][j]]++ , c[j][a[i][j]]++;
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				if(islower(a[i][j]) && b[i][a[i][j]] >= 1 && b[i][a[i][j]-32] >= 1) continue;
				else if(islower(a[i][j]) && c[j][a[i][j]] >= 1 && c[j][a[i][j]-32] >= 1) continue;
				else if(isupper(a[i][j]) && b[i][a[i][j]] >= 1 && b[i][a[i][j]+32] >= 1) continue;
				else if(isupper(a[i][j]) && c[j][a[i][j]] >= 1 && c[j][a[i][j]+32] >= 1) continue;
				else if(b[i][a[i][j]] == 1 && c[j][a[i][j]] == 1) cout << a[i][j];
			}
		}
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		cout << "\n";
	}
}