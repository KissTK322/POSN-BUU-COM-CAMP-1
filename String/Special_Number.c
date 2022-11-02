#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

char str[110];

int main(){
  int i,j,len,ans,k,ch,x,h;
  for(i=0;i<5;i++){
    scanf("%s",str);
    len = strlen(str);
    ans = 0 , ch = 0 , h = 0 , x = 0;
    for(j=0;j<len;j++){
      ch = 1;
      for(k=0;k<=j;k++) ch *= str[j] - '0';
      ans += ch;
    }
    ch=len-1;
    for(j=0;j<len;j++){
      if(ch >= 0) x += (str[j] - '0') * pow(10,ch);
      ch--;
    }
    if(ans == x) printf("Y");
    else printf("N");
  }
  return 0;
}
