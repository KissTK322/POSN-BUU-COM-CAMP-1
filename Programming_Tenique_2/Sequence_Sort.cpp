#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100010;
int a[N] , b[N];

vector<int> v[10010];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int row , col , num;
	cin >> row >> col;
	for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin >> num , v[i].push_back(num);
	sort(v,v+row);
	for(int i=0;i<row;i++) { 
		for(int j=0;j<col;j++) {
			cout << v[i][j] << " ";
		}
		cout << "\n";
	}
}