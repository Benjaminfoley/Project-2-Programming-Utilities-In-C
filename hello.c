#include <stdio.h>
int main(){
int x = 12;
float y = 3.14;
char s[] =  ("Hello World");
int i =0;
int j=5;
printf("x is %d ",x);
printf("y is %f \n", y);
printf("%s\n",s );
for(i=0;i<=4;i++){
  printf("%d x %d = %d\n",i,j,i*j);
}
}