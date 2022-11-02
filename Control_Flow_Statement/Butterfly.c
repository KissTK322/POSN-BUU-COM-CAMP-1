#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
  int n;scanf("%d",&n);
  int m = (2*n)-1;
  int i,j;
  for(i=1;i<=m;i++){
    for(j=1;j<=m;j++){
      if(j<=i && i<n)printf("*");
      else if(j>m-i && i<n)printf("*");
      else if(i==n) printf("*");
      else if(j>=i && i>n)printf("*");
      else if(j<=(2*n)-i && i>n)printf("*");
      else printf("-");
    }
    printf("\n");
  }
}