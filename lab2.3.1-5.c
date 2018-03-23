#include <stdio.h>
#include <stdlib.h>
int main() {
  int g;
  int num;
  int a, mask1, res, mask2, mask, i1, q, s, s1, cons, cons1, i2, n;
  printf("Specify the number of tests\n");
  scanf("%d",&g);getchar();
  int i=1,otvet='y';
  while (i<=g || (otvet=='y' || otvet=='Y')){
    printf("task 1\n");
    printf("task 2\n");
    printf("task 3\n");
    printf("task 4\n");
    printf("task 5\n");
    printf("Select the task and enter its number 1 or 2 or 3 or 4 or 5\n");
    scanf("%d",&num);
    switch (num) {
      case 1:
      printf("enter A=");
      scanf("%d", &a);
      printf("A = %x in 16 notation\n", a);
      s=a;
      cons=0;
      while (s){
        s/=2;
        cons++;
      }
      for (i1=cons-1; i1>=0; i1--){
        mask = 1<<i1;
        (a&(mask))?printf("1"):printf("0");
      }
      printf("\n");
      mask1=0xFFFFF7F6;
      mask2=0x00000809;
      res=a & mask1;
      res=res | mask2;
      printf("A => %x in 16 notation\n", res);
      printf("A => %d in 10 notation\n", res);
      s1=res;
      cons1=0;
      while (s1){
        s1/=2;
        cons1++;
      }
      for (i1=cons1-1; i1>=0; i1--){
        mask = 1<<i1;
        (res&(mask))?printf("1"):printf("0");
      }
      printf("\n");
      break;
      case 2:
      printf("enter A=");
      scanf("%d", &a);
      printf("A = %x\n", a);
      s=a;
      cons=0;
      while (s){
        s/=2;
        cons++;
      }
      for (i1=cons-1; i1>=0; i1--){
        mask = 1<<i1;
        (a&(mask))?printf("1"):printf("0");
      }
      printf("\n");
      res=a&(cons/2);
      printf("A => %x in 16 notation\n", res);
      printf("A => %d in 10 notation\n", res);
      s1=res;
      cons1=0;
      while (s1){
        s1/=2;
        cons1++;
      }
      for (i1=cons1-1; i1>=0; i1--){
        mask = 1<<i1;
        (res&(mask))?printf("1"):printf("0");
      }
      printf("\n");
      break;
      case 3:
      printf("enter A=");
      scanf("%d", &a);
      printf("A = %x\n", a);
      s=a;
      cons=0;
      while (s){
        s/=2;
        cons++;
      }
      for (i1=cons-1; i1>=0; i1--){
        mask = 1<<i1;
        (a&(mask))?printf("1"):printf("0");
      }
      printf("\n");
      mask1=0x04;
      res=a*mask1;
      printf("A => %x in 16 notation\n", res);
      printf("A => %d in 10 notation\n", res);
      s1=res;
      cons1=0;
      while (s1){
        s1/=2;
        cons1++;
      }
      for (i1=cons1-1; i1>=0; i1--){
        mask = 1<<i1;
        (res&(mask))?printf("1"):printf("0");
      }
      printf("\n");
      break;
      case 4:
      printf("enter A=");
      scanf("%d", &a);
      printf("A = %x\n", a);
      s=a;
      cons=0;
      while (s){
        s/=2;
        cons++;
      }
      for (i1=cons-1; i1>=0; i1--){
        mask = 1<<i1;
        (a&(mask))?printf("1"):printf("0");
      }
      printf("\n");
      mask1=0x04;
      res=a/mask1;
      printf("A => %x in 16 notation\n", res);
      printf("A => %d in 10 notation\n", res);
      s1=res;
      cons1=0;
      while (s1){
        s1/=2;
        cons1++;
      }
      for (i1=cons1-1; i1>=0; i1--){
        mask = 1<<i1;
        (res&(mask))?printf("1"):printf("0");
      }
      printf("\n");
      break;
      case 5:
        break;
      default : printf("invalid task number\n");
    }
    i++;
      if (i>n) {
      printf("Continue testing? Y/N\n");
      getchar(); scanf("%c", &otvet);
}
  }
  return 0;
}
