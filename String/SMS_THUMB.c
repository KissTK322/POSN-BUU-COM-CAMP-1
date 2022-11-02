#include<stdio.h>
#include <math.h>
#include <string.h>

char str[11111],ans[11111];
char keb[11][11] = {"#","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
int num[11111][11111];

int main(){
  int x=0,now,cnt=0,cntx=0,i,j,k,l,q,di,dj,dix,djx,sum=0;
  for(i=0;i<3;i++) for(j=0;j<3;j++) num[i][j] = x,x++;
  scanf("%d",&q);
  scanf("%d %d",&now,&cnt);
  for(i=0;i<3;i++) { for(j=0;j<3;j++){ if(num[i][j] + 1 == now){ di = i , dj = j; } } }
  if(now == 1) str[cntx] = keb[0][0],q--;
  else if(now < 6){
    if(cnt <= 3) str[cntx] = keb[now-1][cnt-1],cntx++;
    else if(cnt > 3) str[cntx] = keb[now-1][(cnt%3)-1],cntx++;
    q--;
  } 
  else {
    if(cnt <= 4) str[cntx] = keb[now-1][cnt-1],cntx++;
    else if(cnt > 4) str[cntx] = keb[now-1][(cnt%4)-1],cntx++;
    q--;
  }
  while(q--){
    scanf("%d %d %d",&djx,&dix,&cnt);
    now = num[di+dix][dj+djx] + 1;
    if(now == 1) while(cnt-- && cntx != 0) str[cntx-1] = 0,cntx--;
    else if(now <= 6 || now == 8){
      if(cnt%3 == 0) str[cntx] = keb[now-1][2],cntx++;
      else if(cnt < 3) str[cntx] = keb[now-1][cnt-1],cntx++;
      else if(cnt > 3) str[cntx] = keb[now-1][(cnt%3)-1],cntx++;
    } 
    else {
      if(cnt%4 == 0) str[cntx] = keb[now-1][3],cntx++;
      else if(cnt < 4) str[cntx] = keb[now-1][cnt-1],cntx++;
      else if(cnt > 4) str[cntx] = keb[now-1][(cnt%4)-1],cntx++;
    }
    for(i=0;i<3;i++) { for(j=0;j<3;j++){ if(num[i][j] + 1 == now){ di = i , dj = j; } } }
  }
  int len = strlen(str) , len2;
  int dis = 0;
  for(i=0;i<len;i++){
    if(str[i] != '#') ans[i-dis] = str[i];
  }
  len2 = strlen(ans);
  if(len2 == 0) printf("null");
  else for(i=0;i<len2;i++)printf("%c",ans[i]);
  return 0;
}