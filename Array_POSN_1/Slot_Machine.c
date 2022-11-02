#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int a[20][20],cntx,pre[20],ans[800000][5];

int main(){
  int n,m,i,j,k,l,b,c,d,e,f,mx=-1e9,post=0;scanf("%d",&n);
  for(i=0;i<n;i++)for(j=0;j<5;j++)scanf("%d",&a[i][j]);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      for(k=0;k<n;k++){
        for(b=0;b<n;b++){
          for(c=0;c<n;c++){
            if(a[i][0] == a[j][1] && a[i][0] == a[k][2] && a[i][0] == a[b][3] && a[i][0] == a[c][4]){
              ans[cntx][0]=i,ans[cntx][1]=j,ans[cntx][2]=k,ans[cntx][3]=b,ans[cntx][4]=c,cntx++;
            }
          }
        }
      }
    }
  }
  printf("%d\n",cntx);
  for(i=0;i<cntx;i++){
    for(j=0;j<4;j++){
        printf("%d ",ans[i][j]+1);
    }
    printf("%d\n",ans[i][j]+1);
  }
  return 0;
}