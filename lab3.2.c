#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main() {
  int n;
  int num;
  double x, s, w, e, r;
  printf("Specify the number of tests\n");
  scanf("%d",&n);getchar();
  int i=1,otvet='y';
  while (i<=n || (otvet=='y' || otvet=='Y')){
  printf("1.Method 1: IF with condition\n");
  printf("2.Method 2: IF with the condition variable\n");
  printf("3.Method_3: use of the operation ?\n");
  printf("Select a method and enter its number 1 or 2 or 3\n");
  scanf("%d", &num);
  switch(num){
  case 1:
    printf("enter x\n");
    scanf("%lf",&x);
    if (-2<x&&x<1) {
    s=x*x/(x-1)+x*(pow(x,3)-1);
    printf("y=%.2lf\n", s);
  } else if (1<x&&x<5) {
    s=x*x/(x-1)+x*(x*x+x);
    printf("y=%.2lf\n",s);
  } else if (x>5&&x!=12) {
    s=x*x/(x-1)+x*(x/(x-12));
    printf("y=%.2lf\n",s);
}else {
  printf("is not included in the AAV(ODZ) (area of admissible values)\n");
}break;
  case 2:
    printf("enter x\n");
    scanf("%lf",&x);
    w=(-2<x&&x<1);
    e=(1<x&&x<5);
    r=(x>5&&x!=12);
    if (w) {
    s=x*x/(x-1)+x*(pow(x,3)-1);
    printf("y=%.2lf\n", s);
  } else if (e) {
    s=x*x/(x-1)+x*(x*x+x);
    printf("y=%.2lf\n",s);
  } else if (r) {
    s=x*x/(x-1)+x*(x/(x-12));
    printf("y=%.2lf\n",s);
}else{
  printf("is not included in the AAV(ODZ) (area of admissible values)\n");
}
break;
case 3:
    printf("enter x\n");
    scanf("%lf",&x);
    w=(-2<x&&x<1);
    e=(1<x&&x<5);
    r=(x>5&&x!=12);
    w?
    printf("y=%.2lf\n", s=x*x/(x-1)+x*(pow(x,3)-1)):
    e ?
    printf("y=%.2lf\n", s=x*x/(x-1)+x*(x*x+x)):
    r?
    printf("y=%.2lf\n", s=x*x/(x-1)+x*(x/(x-12))):
    printf("is not included in the AAV(ODZ) (area of admissible values)\n");
break;
default : printf("invalid method number\n");
break;
}
i++;
if (i>n) {
  printf("Continue testing? Y/N\n");
  getchar(); scanf("%c", &otvet);
}
}
return 0;
}
