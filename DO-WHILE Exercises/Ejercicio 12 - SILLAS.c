/*
	Name:Ejercicio 12 de DO 
	Author: Heidi Martinez
	Date: 12/03/21 17:27
	Description: Programa que muestre los tipos de sillas e imprima en forma de recibo
*/


#include<stdio.h>
#include<math.h>
#include<windows.h>

main()
{
	int A, B, C, nom, tnom, descA, descB, descC, resto, desc, TotA, TotB, TotC, cant, totales, descAx, descBx, descCx, desctot;
	float tA, tB, tC;
	
	A = 5;
	B = 7;
	C = 10;
	descA = 0.03;
	descB = 0.05;
	descC =0.07;
	
	
	printf("Tienda Maravillas ");
	printf("Ingrese nombre del cliente ");
	scanf("%d",&nom);
	

	printf("¿Cuantas sillas A comprara?");
	scanf("%d",&tA);
	
		
	printf("¿Cuantas sillas B comprara?");
	scanf("%d",&tB);
	
	printf("¿Cuantas sillas C comprara?");
	scanf("%d",&tC);
	
	do
	{
	resto = tA-5;
	}while(tA=5);
	
	descA = (resto*A)+(5*A*descA);
	TotA = tA*A-desc;
	
		
	do
	{
	resto = tB-5;
	}while(tB=5);
	
	descB = (resto*B)+(5*B*descB);
	
		
	do
	{
	resto = tC-5;
	}while(tC=5);
	TotB = tB*B-desc;
	
	
	descC = (resto*C)+(5*C*descC);
	TotC = tC*C-desc;
	
	cant = (tA+tB+tC);
	totales = (TotA+TotB+TotC);
	desctot = (descAx+descBx+descCx);
	
	
	system("cls");
	
	printf("FACTURA");
	printf("Tienda Maravillas");
	printf("%d", nom);
	printf("Precio unitario. A=5, B=7, C=10");
	printf("Cantidad: %d", cant);
	printf("Descuentos: %d", desctot);
	printf("Total a pagar", totales);
	
}
