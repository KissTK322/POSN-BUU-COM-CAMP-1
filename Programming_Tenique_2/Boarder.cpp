#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 10010;
int a[N][N] , b[N];

vector<int> v[10010];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n , k , cnt = 0 , sum = 0; cin >> n >> k;
	for(int i=0;i<2*n+1;i++){
		for(int j=0;j<n+1;j++){
			if(i%2==0 && j==n) continue;
			cin >> a[i][j];
		}
	}
	for(int i=0;i<2*n;i+=2){
		for(int j=0;j<n;j++){
			b[cnt++] = 3 * (a[i][j] - a[i+2][j]) + 5 * (a[i+1][j] - a[i+1][j+1]);
		}
	}
	sort(b,b+cnt);
	for(int i=0;i<k;i++) sum += b[i];
	cout << sum;
}