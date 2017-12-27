#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main() {
  double r1, r2, r3, x;
  printf("enter resistance R\n");
  printf("r1=");
  scanf("%lf",&r1);
  printf("r2=");
  scanf("%lf",&r2);
  printf("r3=");
  scanf("%lf",&r3);
  x=1/(1/r1+1/r2+1/r3);
  printf("parallel resistance=%.2lf\n",x);
  return 0;
}
