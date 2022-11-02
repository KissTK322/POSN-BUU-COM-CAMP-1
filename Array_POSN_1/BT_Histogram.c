#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int a[10010],cnt[110];

int main(){
  int n,i,j,mxw=-1e9,mxh=-1e9;scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
    cnt[a[i]]++;
    if(a[i] > mxw) mxw = a[i];
  }
  for(i=1;i<=mxw;i++)if(cnt[i] > mxh) mxh = cnt[i];
  int ch = mxh;
  for(i=1;i<=mxh;i++){
    for(j=1;j<=mxw;j++){
      if(cnt[j] == ch) printf("*"),cnt[j]--;
      else printf(".");
    }
    ch--;
    printf("\n");
  }

  return 0;
}
