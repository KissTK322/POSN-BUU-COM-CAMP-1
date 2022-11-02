#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
  double s,x,y,v,t;
  scanf("%lf %lf %lf %lf",&s,&x,&y,&v);
  t = v*(s/(y-x));
  printf("%.2lf",t);
  return 0;
}