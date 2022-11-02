#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int a[1010][1010];
int n;
int ans = -6;
int di[] = {-1,1,0,0} , dj[] = {0,0,1,-1};

void play(int i , int j){
  if(a[i][j] > ans) ans = a[i][j];
  int k;
  for(k=0;k<4;k++){
    int ii = i + di[k] , jj = j + dj[k];
    if(ii < 1 || ii > n || jj < 1 || jj > n) continue;
    if(a[ii][jj] == 100) continue;
    if(a[ii][jj] <= a[i][j]) continue;
    play(ii,jj);
  }
}

int main() {
  int i , j , starti , startj; scanf("%d",&n);
  scanf("%d %d",&startj,&starti);
  for(i=1;i<=n;i++) for(j=1;j<=n;j++) scanf("%d",&a[i][j]);
  play(starti,startj);
  printf("%d",ans);
  return 0;
}