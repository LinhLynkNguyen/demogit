#include<stdio.h>
#include<math.h>
 int main()
 {
 int n;
 double x, d;// d la can bac n cua x+
 printf("nhap n:");
 scanf("%d",&n);
 printf("nhap x:");
 scanf("%lf",&x);
 d = pow (x,(1.0/n));
 printf(" can bac n cua x = %.2lf",d);
 return 0;
 }
