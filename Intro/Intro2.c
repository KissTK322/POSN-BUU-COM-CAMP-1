#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
  char a,b;
  scanf(" %c %c",&a,&b);
  printf("%c %c",a-'A'+'a',b-'a'+'A');
  return 0;
}
  