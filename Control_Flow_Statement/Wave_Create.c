#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
  int n,i,j,m,q;
  scanf("%d",&q);
  while(q--){
    scanf("%d",&n);
    m = (4 * n) - 3;
    for(i=1;i<=m;i++){
      for(j=1;j<=m;j++){
        if(i==1 || i==m || j==m) printf("#");
        else if(j==1 && i>=3)printf("#");
        else if(j >= i-2 && j <= m-i+1 && i%2 == 1 && i <= m/2 + 1)printf("#");
        else if(i >= j+2 && i <= m-j+1 && j%2 == 1 && j <= m/2 + 1)printf("#");
        else if(j >= m-i+1 && j <= i && i%2 == 1 && i >= m/2 + 1)printf("#");
        else if(i >= m-j+1 && i <= j && j%2 == 1 && j >= m/2 + 1)printf("#");
        else printf(".");
      }
      printf("\n");
    }
  }
}