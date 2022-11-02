#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
  double a,b,c,s,side,x1,x2,x3,y1,y2,y3,area1,i,j,k; scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
  a = sqrt(pow((x1-x2),2) + pow((y1-y2),2)); 
  b = sqrt(pow((x1-x3),2) + pow((y1-y3),2)); 
  c = sqrt(pow((x3-x2),2) + pow((y3-y2),2));
  s = (a+b+c)/2; area1 = sqrt(s*(s-a)*(s-b)*(s-c));
  side = sqrt((area1*4)/sqrt(3)); i = side; j = i/2; k = sqrt(pow(side,2)-pow(j,2));
  printf("%.2lf %.2lf %.2lf",i,j,k);
  return 0;
}