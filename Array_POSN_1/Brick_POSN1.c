#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define PC(x) fixed << setprecision(x)
#define end "\n"
#define MAX(x,y) x > y ? x : y
#define MIN(x,y) x < y ? x : y

char a[110][110];
int brick[110],mark[110];

int main(){
  int row,col,i,j;
  scanf("%d %d",&row,&col);
  for(i=1;i<=col;i++) mark[i] = row+1;
  for(i=1;i<=row;i++){
    for(j=1;j<=col;j++){
      scanf(" %c",&a[i][j]);
      if(a[i][j] == 'O' && mark[j] == row+1) mark[j] = i;
    }
  }
  for(i=1;i<=col;i++) scanf("%d",&brick[i]);
  for(i=1;i<=row;i++){
    for(j=1;j<=col;j++){
      if(a[i][j] == 'O') printf("O");
      else if(i < mark[j] && i >= mark[j] - brick[j]) printf("#");
      else printf(".");
    }
    printf("\n");
  }
  return 0;
}