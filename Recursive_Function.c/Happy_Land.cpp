#include <stdio.h>

char str[10010][10010];
double land[10010][10010];
int di[] = {1,1,1,-1,-1,-1,0,0} , dj[] = {0,1,-1,0,1,-1,1,-1} , mark[10010][10010];
int row , col , cnt ,si , sj;
double ans = 0, mn = 1e9;
void foward(int i , int j){
	mark[i][j] = 1;
	double cost = land[i][j] * 0.1;
	int k;
	for(k=0;k<8;k++){
		int ii = i + di[k] , jj = j + dj[k];
		if(ii<0||jj<0||ii>=row||jj>=col) continue;
		land[ii][jj] += cost;
	}
}

void backtracking(int i , int j){
	mark[i][j] = 0;
	double cost = land[i][j] * 0.1;
	int k;
	for(k=0;k<8;k++){
		int ii = i + di[k] , jj = j + dj[k];
		if(ii<0||jj<0||ii>=row||jj>=col) continue;
		land[ii][jj] -= cost;
	}

}

int play(int state , double sum){
	if(state == row*col){
		if(sum < mn) mn = sum;
		return 0;
	}
	int i , j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(mark[i][j]) continue;
			foward(i,j);
			play(state+1,sum + land[i][j]);
			backtracking(i,j);
		}
	}

}

int main(){
	int i , j;
	scanf("%d %d",&row , &col);
	for(i=0;i<row;i++) for(j=0;j<col;j++) scanf("%lf",&land[i][j]);
	play(0,0);
	printf("%.2lf",mn);
}