/*
	Name: Ejercicio 10 de IF
	Author: Heidi Martinez
	Date: 12/03/21 14:13
	Description: Programa que muestra cuanto gana un empresario despues de la retencion y los aumentos
*/
#include<stdio.h>
#include<math.h>

main()
{
	int sal=0, res=0, fin=0;
	
	do{
	printf("Dame tu salario ");
	scanf("%d",&sal);
	}while (sal<=0);
	
	if (sal>500)
		{
			res = (sal*0.1)+sal;
			fin = (res*-0.0096)+res;
			printf("Su salario despues del aumento y retencion es de %d\n ", fin);
		}
	else if (sal<500)
		{
			res = (sal*0.8)+sal;
			fin = (res*-0.0096)+res;
			printf("Su salario despues del aumento y retencion es de %d ", fin);
		}
}
