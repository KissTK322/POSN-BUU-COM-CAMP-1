#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
  double a,b; scanf("%lf %lf",&a,&b);
  printf("Plus: %.2lf\nMinus: %.2lf\nMultiply: %.2lf\nDivide: %.2lf\nModulo: %.2lf\nPower: %.2lf\nRoot: %.2lf",a+b,a-b,a*b,a/b,fmod(a,b),pow(a,b),pow(a,1/b));
  return 0;
}
