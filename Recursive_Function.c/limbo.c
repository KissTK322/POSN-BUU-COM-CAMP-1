#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

char str[1010][1010];
int cnt = 0 , i , j , row , col , mx = 0;
int di[] = {-1,1,0,0} , dj[] = {0,0,1,-1};

int play(int i , int j){
  int k , sum = 1;
  str[i][j] = '.';
  for(k=0;k<4;k++){
    int ii = i + di[k] , jj = j + dj[k]; 
    if(ii<0 || ii>=row || jj<0 || jj>=col) continue;
    if(str[ii][jj] == '*') sum += play(ii , jj);
  }
  return sum;
}

int main() {

  scanf("%d %d",&col,&row);
  for(i=0;i<row;i++) for(j=0;j<col;j++) scanf(" %c",&str[i][j]);
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      if(str[i][j] == '*'){
        int ans = play(i,j);
        if(ans > mx) mx = ans;
      }
    }
  }
  printf("%d",mx);
  return 0;
}