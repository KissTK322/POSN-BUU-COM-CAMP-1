#include <bits/stdc++.h>
using namespace std;

struct A{
	char str[110];
	bool operator < (const A & o) const{
		return strcmp(str,o.str) < 0;
	}
};

typedef long long ll;
const int N = 100100;
ll labor[N];
vector<int> v1;
vector<double> v2;
vector<char> v3;
vector<vector<char>> v4;
A S[N];
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int opr , n , k; scanf("%d",&opr);
	double l[1000010];
	char m;
	if(opr == 1){
		scanf("%d",&n);
		for(int i=0;i<n;i++) scanf("%d",&k) , v1.push_back(k);
		sort(v1.begin() , v1.end());
		for(auto e : v1) printf("%d ",e);
		printf("\n");
		sort(v1.begin() , v1.end() , greater<int>());
		for(auto e : v1) printf("%d ",e);

	}
	if(opr == 2){
		scanf("%d",&n);
		for(int i=0;i<n;i++) scanf("%lf",&l[i]);
		sort(l,l+n);
		for(int i=0;i<n;i++) printf("%.0lf ",l[i]);
		printf("\n");
		sort(l,l+n,greater<double>());
		for(int i=0;i<n;i++) printf("%.0lf ",l[i]);

	}
	if(opr == 3){
		scanf("%d",&n);
		for(int i=0;i<n;i++) scanf(" %c",&m) , v3.push_back(m);
		sort(v3.begin() , v3.end());
		for(auto e : v3) printf("%c ",e);
		printf("\n");
		sort(v3.begin() , v3.end() , greater<char>());
		for(auto e : v3) printf("%c ",e);

	}
	if(opr == 4){
		scanf("%d",&n);
		for(int i=0;i<n;i++) scanf("%s",&S[i].str);
		sort(S,S+n);
		for(int i=0;i<n;i++) printf("%s ",S[i].str); 
		printf("\n");
		for(int i=n-1;i>=0;i--) printf("%s ",S[i].str); 
	}

}