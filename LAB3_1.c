#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main() {
  double x, y;
  printf("enter coordinates\n");
  printf("enter x=");
  scanf("%lf",&x);
  printf("enter y=");
  scanf("%lf",&y);
  if (x<-3||(x-1)*(x-1)+y*y<4 && x>y && x>-y && x>0||-y>x &&x>0) {
    printf("falls into\n");
  }else{
    printf("misses\n");
  }
  return 0;
}
