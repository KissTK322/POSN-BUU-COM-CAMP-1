#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int a[11][11],b[11][11],ans[11][11];

int main(){
  int n1,m1,n2,m2,i,j,k; scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
  for(i=0;i<n1;i++)for(j=0;j<m1;j++)scanf("%d",&a[i][j]);
  for(i=0;i<n2;i++)for(j=0;j<m2;j++)scanf("%d",&b[i][j]);
  if(m1 != n2) printf("Can\'t Multiply.");
  else{
    for(i=0;i<n1;i++){
      for(j=0;j<m2;j++){
        for(k=0;k<m1;k++){
          ans[i][j] += a[i][k]*b[k][j];
        }
        printf("%d ",ans[i][j]);
      }
      printf("\n");
    }
  }

  return 0;
}