#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int cost[110],keb[30];

int main(){
  int n , k , i , j ,now = 1 , go;
  scanf("%d %d",&n,&k);
  for(i=1;i<=n;i++) scanf("%d",&cost[i]);
  for(i=1;i<=n;i++){
    scanf("%d",&go);
    while(go){
      if(cost[now]) go--;
      now++;
      if(now == n+1) now = 1; 
    }
    while(cost[now] == 0){
      now++;
      if(now == n+1) now = 1;
    }
    keb[(i-1)%k+1] += cost[now];
    cost[now] = 0;
  }
  for(i=1;i<=k;i++) printf("%d\n",keb[i]);
  return 0;
}
