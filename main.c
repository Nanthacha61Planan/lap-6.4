#include <stdio.h>
#include <math.h>
int main(void){
while(1){
int a, b, c, d;
int x1=1000,x2=100,x3=10,x4=1;
int sum,ans;
printf("key Number :");
scanf("%d%d%d%d",&a,&b,&c,&d);
sum=(a*x1)+(b*x2)+(c*x3)+(d*x4);
 printf("Number is = %d\n",sum);
 a=pow(a,4);b=pow(b,4);c=pow(c,4);d=pow(d,4);
 ans=a+b+c+d;
 if(ans==sum)
 printf("Number is sum  = %d\n\n",ans);
 else
 printf("Not Same number = %d\n\n",ans);
}
 return 0;
}