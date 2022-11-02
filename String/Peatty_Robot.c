#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

char str[110];

int main(){
  scanf("%s",str);
  int x=0,y=0,len = strlen(str),i;
  for(i=0;i<len;i++){
    if(str[i] == 'N') y++;
    else if(str[i] == 'E') x++;
    else if(str[i] == 'S') y--;
    else if(str[i] == 'W') x--;
    else x=0,y=0;
  }
  printf("%d %d",x,y);
  return 0;
}
