#include <bits/stdc++.h>
using namespace std;

int land[1010][1010] , mark[1010][1010];
int di[5], dj[5];
int row , col , sum = 1 , si , sj , ei , ej , sa , fnd = 0;

void play(int i , int j){
	mark[i][j] = 1;
	if(i == ei && j == ej && !fnd) {
		land[i][j] = sum;
		fnd = 1;
		return;
	}
	else land[i][j] = sum;
	sum++;
	if(mark[i+di[sa]][j+dj[sa]] == 0 && i+di[sa] >= 1 && j+dj[sa] >= 1 && i+di[sa] <= row && j+dj[sa] <= col && !fnd) play(i+di[sa] , j+dj[sa]);
	for(int k=0;k<4 && !fnd ;k++){
		int ii = i + di[k] , jj = j + dj[k];
		if(mark[ii][jj] == 1) continue;
		if(ii <= 0 || jj <= 0 || ii > row || jj > col) continue;
		play(ii,jj);
	}
	return;
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int q; cin >> q;
	while(q--){
		memset(mark,0,sizeof(mark));
		memset(land,0,sizeof(land));
		fnd = 0;
		sum = 1;
		cin >> row >> col >> sa >> si >> sj >> ei >> ej;
		if(sa == 0) sa = 0 , di[0] = -1 , dj[0] = 0 , di[1] = 0 , dj[1] = 1 , di[2] = 1 , dj[2] = 0 , di[3] = 0 , dj[3] = -1;
		else if(sa == 1) sa = 0 , di[0] = 0 , dj[0] = 1 , di[1] = 1 , dj[1] = 0 , di[2] = 0 , dj[2] = -1 , di[3] = -1 , dj[3] = 0;
		else if(sa == 2) sa = 0 , di[0] = 1 , dj[0] = 0 , di[1] = 0 , dj[1] = -1 , di[2] = -1 , dj[2] = 0 , di[3] = 0 , dj[3] = 1;
		else sa = 0 , di[0] = 0 , dj[0] = -1 , di[1] = -1 , dj[1] = 0 , di[2] = 0 , dj[2] = 1 , di[3] = 1 , dj[3] = 0;
		play(si , sj);
		for(int i=1;i<=row;i++){
			for(int j=1;j<=col;j++){
				cout << land[i][j] << " ";
			}
			cout << "\n";
		}
	}
}