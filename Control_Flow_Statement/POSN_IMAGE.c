#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
  int q,i,j;scanf("%d",&q);
  while(q--){
    int n;scanf("%d",&n);
    for(i=1;i<=n;i++){
      for(j=1;j<=n;j++){
        if(i==1 || i==(n/2)+1 || j==1)printf("*");
        else if(j==n && i<=n/2)printf("*");
        else printf("-");
      }
      printf("-");
      for(j=1;j<=n;j++){
        if(i==1 || i==n || j==1 || j==n)printf("*");
        else printf("-");
      }
      printf("-");
      for(j=1;j<=n;j++){
        if(i==1 || i==(n/2)+1 || i==n)printf("*");
        else if(j==1 && i<=n/2)printf("*");
        else if(j==n && i>n/2)printf("*");
        else printf("-");
      }
      printf("-");
      for(j=1;j<=n;j++){
        if(j==1 || j==n || j==i)printf("*");
        else printf("-");
      }
      printf("\n");
    }
  }
}