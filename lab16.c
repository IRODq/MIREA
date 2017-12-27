#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
setlocale (LC_ALL,"russian");
int total,i,j,e,t=0;
printf("Размер массива:\n");
while(scanf("%d",&total)!=1){
printf("Неверный формат, введите заново: ");
fflush(stdin);
}
int a[total];
for (i=0; i<total; i++) {
while(scanf("%d",&a[i])!=1){
printf("Неверный формат, введите заново: ");
fflush(stdin);
}
}
for (i=1; i<total; i++){
for (j=0; j<total-1; j++){
if (a[j]>a[i]){
e=a[j];
a[j]=a[i];
a[i]=e;
}
}
}
printf("Отсортированный массив:\n");
for (i=0; i<total; i++)
printf("%d\n",a[i]);
int b[total];
b[0]=a[0];
for (i=1; i<total; i++){
if (a[i]!=a[i-1]){
t++;
b[t]=a[i];
}
}
printf("Отсортированный массив без повторяющихся элементов:\n");

for (i=0; i<=t; i++){
printf("%d\n",b[i]);
}
int max1,min1;
printf("Минимум=");
while((scanf("%d",&min1)!=1)||(min1>total)){
printf("Неверный формат, введите заново: ");
fflush(stdin);
}
printf("Максимум=");
while((scanf("%d",&min1)!=1)||(max1>total)){
printf("Неверный формат, введите заново: ");
fflush(stdin);
}
printf("%d минимум и %d максимум\n",min1,max1);
printf("min=%d max=%d\n",b[min1-1],b[t-(max1-1)]);

return 0;
}
