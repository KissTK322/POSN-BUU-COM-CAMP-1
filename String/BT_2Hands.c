#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

char l[1010] , r[1010] , temp , event , in , str[1010];

int main(){
    int q,x; scanf("%d",&q);
    while(q--){
      scanf(" %c",&in);
      if(in == 'p'){
        scanf(" %c",&event);
        if(event == 'L') scanf("%s",l);
        else scanf("%s",r);
      }
      if(in == 'b'){
        scanf(" %c %d",&event,&x);
        if(event == 'L') temp = l[x] , l[x] = 0;
        else temp = r[x] , r[x] = 0;
      }
      if(in == 'c'){
        scanf(" %c",&event);
        if(event == 'L') strcat(l,r),r[0] = 0;
        else strcat(r,l) , l[0] = 0;
      }
      if(in == 'r'){
        if(event == 'L')l[x] = temp;
        else r[x] = temp;
      }
      if(in == 'q'){
        if(l[0] == 0) printf("- ");
        else printf("%s ",l);
        if(r[0] == 0) printf("-\n");
        else printf("%s\n",r);
      }
    }
}