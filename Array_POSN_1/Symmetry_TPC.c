#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int a[10010];

int main(){
  int q,n,i,j;scanf("%d",&q);
  while(q--){
      scanf("%d",&n);
      int ans = -1,mx = -1,cnt=0,start=0;
      for(i=0;i<n;i++) scanf("%d",&a[i]);
      a[n] = 1;
      for(i=0;i<=n;i++){
        if(a[i] == 1) {
          cnt = i - start;
          if(cnt%2==1 && cnt > mx) mx = cnt , ans = i - (cnt/2) - 1;
          start = i+1;
        }
      }
      printf("%d\n",ans);
  }
  return 0;
}
