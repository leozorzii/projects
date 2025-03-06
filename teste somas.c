#include<stdio.h>

main(){
int a;
float b, c ,d;
a = 3;
printf("a = %i", a);
b = a * 3;
printf("b = %f", b);
c = b/2;
	printf("c= %f",c);
d = a + c; 
printf("d = %f", d);
d = c - (d/2) + c * d;
printf("d = %f", d);
c = a % 2;
	printf("c= %f", c);
c = c + d;
printf("c = %f", c);




getch();
}



