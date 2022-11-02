#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

char str[30];
int a[30];

int main(){
  int q;scanf("%d",&q);
  int i=1,v=5,x=10,l=50,c=100,d=500,m=1000,j;
  while(q--){
    scanf("%s",str);
    int len = strlen(str);
    int ans = 0;
    for(j=0;j<25;j++) a[j] = 0;
    for(j=0;j<len;j++){
      if(str[j] == 'I') a[j] = i;
      else if(str[j] == 'V') a[j] = v;
      else if(str[j] == 'X') a[j] = x;
      else if(str[j] == 'L') a[j] = l;
      else if(str[j] == 'C') a[j] = c;
      else if(str[j] == 'D') a[j] = d;
      else a[j] = m;
    }
    for(j=0;j<len;j++){
      if(a[j] < a[j+1] && j+1 != len) ans += (a[j+1] - a[j]),j++;
      else ans += a[j];
    }
    printf("%d\n",ans);
  }
  
  return 0;
}
