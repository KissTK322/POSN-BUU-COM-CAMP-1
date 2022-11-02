#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
  double r; scanf("%lf",&r);
  printf("%.3lf\n%.3lf\n%.3lf\n%.3lf",4*M_PI*r*r,(4.0/3)*M_PI*r*r*r,M_PI*r*r,2*M_PI*r);
  return 0;
}