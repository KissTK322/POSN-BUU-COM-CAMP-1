#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100010;
int a[N] , b[N];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n , work , sum = 0; cin >> n >> work;
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	for(int i=n-1;i>=0;i-=work) sum += a[i];
	cout << sum;
}