/*
	Name: Ejercicio 11 de SWITCH
	Author: Heidi Martinez
	Date: 12/03/21 16:09
	Description: Programa que muestre el calculo de sueldo a partir de las horas y la clase
*/

#include<stdio.h>
#include<math.h>

main()
{
	int res, hrs, clase;
	
	do
	{
	printf("Dame el numero de la clase a la que perteneces ");
	printf("1- A ");
	printf("2- B ");
	printf("3- C ");
	printf("4- D ");
	scanf("%d",&clase);
	}while(clase>=5, clase<=0);
	
	do{
	printf("Dame el valor de tus horas ");
	scanf("%d",&hrs);
	}while(hrs>=168);

switch(clase)
{//inicio del switch
		case 1:
			res = hrs*7;
			printf("Por tus %d horas trabajadas y por pertenecer a la clase A. Tu sueldo es: %d ", hrs, res);
		break;
		
		case 2:
			res = hrs*5;
			printf("Por tus %d horas trabajadas y por pertenecer a la clase B. Tu sueldo es: %d ", hrs, res);
		break;
		
		case 3:
			res = hrs*4;
			printf("Por tus %d horas trabajadas y por pertenecer a la clase C. Tu sueldo es: %d ", hrs, res);
		break;
		
		case 4:
			res = hrs*3.5;
			printf("Por tus %d horas trabajadas y por pertenecer a la clase D. Tu sueldo es: %d ", hrs, res);
		break;
	}//fin del switch
	
}
