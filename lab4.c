#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main() {
  int n;
  int num;
  double y, x, q, w, e;
  printf("Specify the number of tests\n");
  scanf("%d",&n);getchar();
  int i=1,otvet='y';
  while (i<=n || (otvet=='y' || otvet=='Y')){
  printf("1.task 1:Calculate the values of the function y=2cos(x) on the interval [-π;π] at points spaced 0.4 apart.\n");
  printf("2.task 2:Determine if the natural number N (0 <N <= 30) is perfect.\n");
  printf("3.task 3:Given a natural number N. Find out whether among the numbers of the sequence formed according to the rule: n,n+1,...,2n twins.\n");
  printf("Select the task and enter its number 1 or 2 or 3\n");
  scanf("%d", &num);
  switch(num){
  case 1:
  for (x=-3.14;x<3.14;x=x+0.4) {
    y=2*cos(x);
    printf("y=%.2lf\n",y);
  }break;
  case 2:
  for (q=2;q<31;q++) {
        y=0;
        for (x=1;x<n;x++)
            if (fmod(q,x)==0)
                y=y+x;
        if (y==q)
            printf("%.0lf\n",y);
    }break;
  case 3:
      e=0;
    printf("enter N\n");
    scanf("%lf",&w);
    for (q=w+1;q<=2*w-1; q++) {
      if ((q+1)-(q-1)==2){
        e++;
        printf("x1=%.0lf\nx2=%.0lf\n\n",(q+1),(q-1));
      }
    }
    printf("%.0lf\n",e);
    break;
  default : printf("invalid task number\n");
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
