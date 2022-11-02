#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int a[30][30];

int main(){
  int row,col,i,j;scanf("%d %d",&row,&col);
  for(i=0;i<row;i++)for(j=0;j<col;j++)scanf("%d",&a[i][j]);
  for(i=0;i<row;i++)for(j=0;j<col;j++)printf("%d ",a[i][j]);
  printf("\n");
  for(i=row-1;i>=0;i--)for(j=col-1;j>=0;j--)printf("%d ",a[i][j]);
  printf("\n");
  for(i=0;i<col;i++)for(j=0;j<row;j++)printf("%d ",a[j][i]);
  printf("\n");
  for(i=col-1;i>=0;i--)for(j=row-1;j>=0;j--)printf("%d ",a[j][i]);
  printf("\n");
  return 0;
}