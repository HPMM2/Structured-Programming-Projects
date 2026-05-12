/*
	Name: Ejercicio 2 de IF
	Author: Heidi Martinez
	Date: 12/03/21 01:56
	Description: Programa que mediante un Menú imdique que operacion fundamental deseas hacer
*/
//librerias
#include<stdio.h>
#include<windows.h>
#include<math.h>

main()
{//inicio del main
	int op;
	float n1, n2, res;

	do{
	printf("Men%c principal\n 1 Suma\n 2 Resta\n 3 Producto\n 4 Divisi%cn\n 5 Potencia\n 6 Ra%cz cuadrada\n ",163, 162, 161);
	scanf("%d", &op);
	
	if(op<1 | op>6)
	{
	printf("Error rango fuera de 1-3, intente de nuevo\n");


				
	system("pause");
	
	system("cls");//limpieza cada ciclo

	}
}	while(op<1|| op>7);

	


switch(op)
{//inicio del switch
	case 1:
		printf("Dame el primer valor a sumar ");
		scanf("%f", &n1);
		printf("Dame el segundo valor a sumar ");
		scanf("%f", &n2);
		res=n1+n2;
		printf("La suma de %.1f y %.1f es: %.1f", n1, n2, res);
	break;
	
	case 2:
		printf("Dame el primer valor a restar ");
		scanf("%f", &n1);
		printf("Dame el segundo valor a restar ");
		scanf("%f", &n2);
		res=n1-n2;
		printf("La resta de %.1f y %.1f es: %.1f", n1, n2, res);
	break;
	
	case 3:
		printf("Dame el primer valor a multiplicar ");
		scanf("%f", &n1);
		printf("Dame el segundo valor a multiplicar ");
		scanf("%f", &n2);
		res=n1*n2;
		printf("La multiplicaci%cn de %.1f y %.1f es: %.1f", 162, n1, n2, res);
	break;
	
	case 4:
		printf("Dame el primer valor a dividir ");
		scanf("%f", &n1);
		printf("Dame el segundo valor a dividir ");
		scanf("%f", &n2);
		res=n1/n2;
		{
		if(n2==0)
			do{
			printf("No se puede dividir entre cero, ingrese otro n%cmero ", 163);
			printf("Dame el segundo valor a dividir ");	
			scanf("%f", &n2);
			res=n1/n2;
			}
			while (n2<=1);
			
		else(n2<=1);	
		printf("La divisi%cn de %.1f entre %.1f es: %.1f", 162, n1, n2, res);
		}
	break;
	
	case 5:
		printf("Dame el valor que desea ");
		scanf("%f", &n1);
		printf("Dame el valor que sera la potencia ");
		scanf("%f", &n2);
		res=pow(n1,n2);
		printf("La potencia de %.1f a la %.1f potencia es: %.1f", n1, n2, res);
	break;
	
	case 6:
		printf("Dame el valor que desea ");
		scanf("%f", &n1);
		res=sqrt(n1);
			{
		if(n1<=0)
			do{
			printf("No se puede sacar ra%cz cuadrada de un n%cmero negativo, ingrese otro numero ", 161, 163);
			scanf("%f", &n1);
			res=sqrt(n1);
			}
			while (n1<=0);
			
		else(n1<=0);	
			printf("La ra%cz cuadrada de %.1f es: %.1f", 161, n1, res);
		}
	break;
	}//fin del switch
}


