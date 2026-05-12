/*
	Name: Ejercicio 3 de FOR
	Author:Heidi Martinez 
	Date: 12/03/21 07:19
	Description: Programa que muestre la tabla de multiplicar deseada
*/

#include<stdio.h>
#include<windows.h>

main()
{
	int i, r, mul, num;
	

		printf("Dame el n%cmero de la tabla de multiplicar que deseas conocer ", 163);
		scanf("%d", &num);
	
		printf("Dame el n%cmero hasta donde deseas que pare ", 163);
		scanf("%d", &mul);	
		
			
		for(i=1; i<=mul; i++)
		{
			r=num*i;
			printf("%d  x  %d  =  %d\n", num, i, r);
	 	} 


	

}


