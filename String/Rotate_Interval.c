#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

char str[1010];

int main(){
    int i,now,k,n,block,dis,q,len,start,jump;
    scanf("%d",&q);
    while(q--){
      scanf("%s",str);
      len = strlen(str);
      scanf("%d %d",&n,&k);
      k = k % n;
      jump = n - k;
      block = len/n;
      for(i=0;i<block;i++){
        start = n * i;
        for(now=0;now<n;now++){
          dis = (jump + now)%n;
          printf("%c",str[start + dis]);
        }
      }
      printf("\n");
    }
    return 0;
}