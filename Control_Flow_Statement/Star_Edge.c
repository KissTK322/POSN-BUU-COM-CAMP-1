#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
  int q;scanf("%d",&q);
  while(q--){
    int n;scanf("%d",&n);
    int m,i,j;
    m = (2*n)+1;
    for(i=1;i<=m;i++){
      for(j=1;j<=m;j++){
        if(i==1 || i==m || j==1 || j==m) printf("*");
        else if(i%2 != 0 && j<=i)printf("*");
        else if(j%2 != 0 && i<=j)printf("*");
        else printf("-");
      }
      printf("\n");
    }
  }
}