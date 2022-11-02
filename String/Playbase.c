#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
  int n,i;scanf("%d",&n);
  char a[110],b[110],c[110];
  scanf("%s",a);
  scanf("%s",b);
  int lena =strlen(a);
  int lenb = strlen(b);
  int h = lena-1;
  int x[11],y[11];
  for(i=0;i<11;i++) x[i]=0,y[i]=0;
  for(i=0;i<lena;i++){
    if(isdigit(a[i])){
      x[h] = a[i] - '0';
    }
    else if(a[i] == 'A') x[h]=10;
    else if(a[i] == 'B') x[h]=11;
    else if(a[i] == 'C') x[h]=12;
    else if(a[i] == 'D') x[h]=13;
    else if(a[i] == 'E') x[h]=14;
    else if(a[i] == 'F') x[h]=15;
    h--;
  }
  h = lenb-1;
  for(i=0;i<lenb;i++){
    if(isdigit(b[i])){
      y[h] = b[i] - '0';
    }
    else if(b[i] == 'A') y[h]=10;
    else if(b[i] == 'B') y[h]=11;
    else if(b[i] == 'C') y[h]=12;
    else if(b[i] == 'D') y[h]=13;
    else if(b[i] == 'E') y[h]=14;
    else if(b[i] == 'F') y[h]=15;
    h--;
  }
  int sum = 0;
  int cnt = 0;
  for(i =0;i<lena;i++) sum += x[i] * pow(n,i);
  for(i =0;i<lenb;i++) sum += y[i] * pow(n,i);
  int lenx = 0,ans = 0; 
  if(n <= 10){
    for(i=0;i<11;i++){
      if(x[i]+y[i] >= n) x[i+1] += 1,ans += ((x[i]+y[i])%n) * pow(10,i);
      else ans += (x[i]+y[i]) * pow(10,i);
    }
  }
  else{
    int sumb = sum;
    cnt = 1;
    for(i=0;i<11;i++){
        if(sumb%n == 0) break;
        else if(sumb%n == 10) c[i] = 'A';
        else if(sumb%n == 11) c[i] = 'B';
        else if(sumb%n == 12) c[i] = 'C';
        else if(sumb%n == 13) c[i] = 'D';
        else if(sumb%n == 14) c[i] = 'E';
        else if(sumb%n == 15) c[i] = 'F';
        else c[i] = (sumb%n)+48;
        sumb = (sumb/n);
    }
  }
  lenx = strlen(c);
  printf("%d\n",sum);
  if(cnt == 1)for(i=lenx-1;i>=0;i--)printf("%c",c[i]);
  else printf("%d",ans);

}