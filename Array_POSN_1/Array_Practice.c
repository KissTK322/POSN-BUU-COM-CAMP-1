#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int a[1010];

int main(){
  int n,i,k,cnt=0;scanf("%d",&n);
  for(i=0;i<n;i++)scanf("%d",&a[i]);
  scanf("%d",&k);
  for(i=n-1;i>=0;i--){
    if(a[i] == k) cnt++;
    printf("%d ",a[i]);
  }
  printf("\n%d",cnt);
  return 0;
}