#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

char str[110];
char dir[110] = {'N','E','S','W'};

int main(){
  int cnt = 0,i,j,k,len;
  scanf("%s",str);
  len = strlen(str);
  for(i=0;i<len;i++){
    if(str[i] == dir[cnt%4]) printf("F");
    else if(str[i] == 'Z') cnt = 0 , printf("Z");
    else{
      while(str[i] != dir[cnt%4]){
        printf("R");
        cnt++;
      }
      if(str[i] == dir[cnt%4]) printf("F");
    }
  }
  return 0;
}
