#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

char str[10010];

int main(){
  
  int x=0,y=0,n=0,e=0,s=0,w=0,i=0,j=0,q=0,len=0;
  scanf("%s",str);
  len = strlen(str);
  for(i=0;i<len;i++){
    if(str[i] == 'N') y++ , n++;
    else if(str[i] == 'E') x++ , e++;
    else if(str[i] == 'S') y-- , s++;
    else x-- , w++;
  }
  scanf("%d",&q);
  while(q--){
    if(n>0 && s>n) n--,y--;
    else if(s>0 && n>s) s--,y++;
    else if(e>0 && w>e) e--,x--;
    else if(w>0 && e>w) w--,x++;
    else if(n==0 && s>0) s--,y++;
    else if(s==0 && n>0) n--,y--;
    else if(e==0 && w>0) w--,x++;
    else if(w==0 && e>0) e--,x--;
  }
  printf("%d",(abs(x)+abs(y))*2);
  return 0;
}