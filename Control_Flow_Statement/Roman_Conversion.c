#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
  int n,a,i;scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    while(a >= 1000) printf("M"),a-=1000;
    if(a >= 900) printf("CM"),a-=900;
    if(a >= 500) printf("D"),a-=500;
    if(a >= 400) printf("CD"),a-=400;
    while(a >= 100) printf("C"),a-=100;
    if(a >= 90) printf("XC"),a-=90;
    if(a >= 50) printf("L"),a-=50;
    if(a >= 40) printf("XL"),a-=40;
    while(a >= 10) printf("X"),a-=10;
    if(a >= 9) printf("IX"),a-=9;
    if(a >= 5) printf("V"),a-=5;
    if(a >= 4) printf("IV"),a-=4;
    while(a >= 1)printf("I"),a-=1;
    printf("\n");
  }
  return 0;
}