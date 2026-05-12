/*
	Name:Ejericio 5 de IF 
	Author: Heidi Martinez
	Date: 12/03/21 12:38
	Description: Programa que muestre la formula general
*/

#include<stdio.h>
#include<math.h>

main()
{
	int a=0, b=0, c=0, d=0; 
	float X1, X2, x;
	
	printf("Dame A ");
	scanf("%d",&a);
	
	printf("Dame B ");
	scanf("%d",&b);
	
	printf("Dame C ");
	scanf("%d",&c);
	
	
	d = b*b-4*a*c;
    if (d > 0) 
		{
        	X1 = (-b+sqrt(d))/(2*a);
        	X2 = (-b-sqrt(d))/(2*a);
        	printf("x1 = %.1f\n",X1);
        	printf("x2 = %.1f\n",X2);
    	}
    else if (d == 0) 
		{
        	x = (-b)/(2*a);
        	printf("x1 = %.1f\n",x);
    	}
    else
        printf("La ecuacion no tiene solucion");
}
