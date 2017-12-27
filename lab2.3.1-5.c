#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  int num;
  int a, mask1, res, mask2;
  printf("Specify the number of tests\n");
  scanf("%d",&n);getchar();
  int i=1,otvet='y';
  while (i<=n || (otvet=='y' || otvet=='Y')){
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
      printf("A = %x\n", a);
      mask1=0xfffff7f6;
      mask2=0x00000809;
      res=a & mask1;
      res=res | mask2;
      printf("A => %x\n", res);
      break;
      case 2:
      printf("enter A=");
      scanf("%d", &a);
      printf("A = %x\n", a);
      mask1=0xffff0fff;
      res=a & mask1;
      printf("A => %x\n",res);
      case 3:
      printf("enter A=");
      scanf("%x", &a);
      printf("A = %x\n", a);
      res=a & 4;
      printf("A => %x\n",res);
      case 4:
      case 5:
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
