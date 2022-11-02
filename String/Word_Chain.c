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

char str[30010][1010];

int main(){
  int row,col,i,j,cnt=0; scanf("%d %d",&col,&row);
  for(i=0;i<row;i++) scanf("%s",str[i]);
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      if(str[i][j] != str[i+1][j] && i+1 != row) cnt++;
    }
    if(cnt>2) { printf("%s",str[i]); return 0; }
    cnt = 0;
  }
  printf("%s",str[row-1]);
  return 0;
}