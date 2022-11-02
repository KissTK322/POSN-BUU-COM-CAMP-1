#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int a[102][102];
int r[102][102],d[102][102];

int main(){
  int q,i,j,k,mx=-1e9,row,col;scanf("%d",&q);
  while(q--){
    mx = 0;
    memset(a,0,sizeof(a));
    memset(r,0,sizeof(r));
    memset(d,0,sizeof(d));
    scanf("%d %d",&row,&col);
    for(i=1;i<=row;i++) for(j=1;j<=col;j++) scanf("%d",&a[i][j]);
    for(i=1;i<=row;i++){
      for(j=1;j<=col;j++){
        if(abs(a[i][j]-a[i+1][j]) > 10) d[i][j] = -1;
        else if(i+1 <= row) d[i][j] = a[i][j]+a[i+1][j];
        else d[i][j] = -1;
        if(abs(a[i][j]-a[i][j+1]) > 10) r[i][j] = -1;
        else if(j+1 <= col) r[i][j] = a[i][j]+a[i][j+1];
        else r[i][j] = -1;
        if(r[i][j]>mx) mx=r[i][j];
        else if(d[i][j]>mx) mx=d[i][j];
      }
    }
    for(i=1;i<=row;i++){
      for(j=1;j<=col;j++){
        if(r[i][j]==mx) printf("%d %d\n",i,j),i=row+1,j=col+1;
        else if(d[i][j]==mx) printf("%d %d\n",i,j),i=row+1,j=col+1;
      }
    }
  }
  return 0;
}