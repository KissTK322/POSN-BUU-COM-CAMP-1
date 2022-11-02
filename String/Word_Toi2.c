#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int di[11] = {-1,-1,-1,1,1,1,0,0} , dj[11] =  {0,1,-1,0,1,-1,-1,1};
char str[333][333] , ch[333];

int main(){
  int row,col,i,j,k,n,len,x,y,dir,find,cnt; scanf("%d %d",&row,&col);
  for(i=0;i<row;i++) scanf("%s",str[i]);
  scanf("%d",&k);
  for(cnt=0;cnt<k;cnt++){
    find = 0;
    scanf("%s",ch);
    len = strlen(ch);
    for(i=0;i<row && !find;i++){
      for(j=0;j<col && !find;j++){
        if(tolower(ch[0]) == tolower(str[i][j])){
          for(dir=0;dir<8 && !find;dir++){
            x = i, y = j;
            for(n=0;n<len;n++){
              if(tolower(str[x][y]) != tolower(ch[n])) break;
              if(n == len - 1) printf("%d %d\n" , i ,j) , find = 1;
              x += di[dir] , y += dj[dir];
              if(x < 0 || y < 0 || x > row || y > col) break;
            }
          }
        }
      }
    }
  } 
  return 0;
}