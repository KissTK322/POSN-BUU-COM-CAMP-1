#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
  int q;scanf("%d",&q);
  while(q--){
    double h1,k1,r1,h2,k2,r2; scanf("%lf %lf %lf %lf %lf %lf",&h1,&k1,&r1,&h2,&k2,&r2);
    double rmax,rmin;
    double d = sqrt(pow(h1-h2,2)+pow(k1-k2,2));
    if(r1>r2) rmax=r1,rmin=r2;
    else rmax=r2,rmin=r1;
    if(r1 < r2 && h1 == h2 && k1 == k2) printf("None\n");
    else if(r2 < r1 && h1 == h2 && k1 == k2) printf("None\n");
    else if(r1 == r2 && h1 == h2 && k1 == k2)printf("More\n");
    else if(d == rmax) printf("More\n");
    else if(d < rmax){
      if(d+rmin<rmax)printf("None\n");
      else if(d+rmin==rmax)printf("One\n");
      else if(d+rmin>rmax)printf("More\n");
    }
    else if(d > rmax){
      if(d == rmax+rmin)printf("One\n");
      else if(d > rmin+rmax)printf("None\n");
      else if(d < rmax+rmin)printf("More\n");
    }
  }
  return 0;

}