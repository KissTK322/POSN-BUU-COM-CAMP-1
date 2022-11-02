#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
  int n,a,i,b;scanf("%d",&n);
  for(i=1;i<=n;i++) printf("%d ",i);
  printf("\n");
  a = n; while(a>=1)printf("%d ",a),a--;
  printf("\n");
  if(n%2 != 0) a=n-1;
  else a=n;
  b=2;
  if(b > n) printf("\n");
  else{
    do{
    printf("%d ",b);
    b+=2;
  }while(b<=a);
  printf("\n");
  }
  if(n%2 != 0) a=n-1;
  else a=n;
  for(i=a;i>=2;i-=2)printf("%d ",i);
  printf("\n");
  if(n%2 != 1) a = n-1;
  else a=n;
  b=1;
  while(b<=a)printf("%d ",b),b+=2;
  printf("\n");
  if(n%2 != 1) a = n-1;
  else a=n;
  do{
    printf("%d ",a);
    a-=2;
  }while(a>=1);
  return 0;
}