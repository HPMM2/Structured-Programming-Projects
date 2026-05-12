/*
	Name: Ejercicio 1
	Author: Heidi Martinez 
	Date: 11/05/21 15:27
	Description: Programa que crea, imprima un arreglo unidimensional 
	y que busque un dato dentro del mismo arreglo
*/


//librerias
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<stdlib.h>


int Crear();
int Buscar();
int Imprimir();
int Volver();
int MenuP();

int i, op, v, n, m, a[100];



main()
{//inicio main
	system("cls");


	do{	
	printf("Que deseas hacer a continuacion\n\n 1 - Crear una matriz\n 2 - Continuar con la misma matriz\n 3 - Salir del sistema\n");
	scanf("%d", &op);
	if(op<1|| op>3)
	{
	printf("Error rango fuera de 1-3, intente de nuevo\n");

}
				
	system("pause");
	
	system("cls");//limpieza cada ciclo

	
	
	}while(op<1|| op>3);
	
	
			
	switch(op)
	{//inicio del switch 2
		case 1:
			Crear();
		break;
		
		case 2:
			MenuP();
		break;
		
		case 3:
			return 0;
		break;				
	}//fin del switch 2

	
}//fin del main








//------------------Funcion MenuP-------------------


MenuP()
{//inicio menu
	int op, r;
	system("cls");

	do{	
	printf(" 1 - Buscar un valor\n 2 - Imprimir arreglo\n 3 - Crear una matriz\n 4 - Volver\n 5 - Salir del programa\n");
	scanf("%d", &op);
	if(op<1|| op>5)
	{
	printf("Error rango fuera de 1-5, intente de nuevo\n");

				
	system("pause");
	system("cls");//limpieza cada ciclo
	
	}
	}while(op<1|| op>5);
	

	switch(op)
	{//inicio del switch 
		case 1:
			Buscar();
		break;
		
		case 2:
			Imprimir();
		break;
		
		case 3:
			Crear();
		break;	
		
		case 4:
			Volver();
		break;

		case 5:
			return 0;
		break;				
		default:
		break;					
	}//fin del switch 
	
}//fin menu








//------------------Funcion Crear-------------------


int Crear()
{//inicio crear
	system("cls");
	do{
	printf("Cuantos valores desea introducir\n ");
	scanf("%d", &n);
	if(n<1 || n>100)
	{
	printf("Error debe ser menor de 100, intente de nuevo\n");

				
	system("pause");
	system("cls");//limpieza cada ciclo
	
	}
	}while(n<1 || n>100);
	
	
	for(i=0;i<n;i++)
	{
		printf("Dame el valor de la posicion [%d] : ", i);
		scanf("%d", &a[i]);

	}
	
	system("pause");
	MenuP();
		
	}//fin crear







//------------------Funcion Buscar-------------------


Buscar()
{//inicio buscar
	do{
	printf("Que posicion desea saber: ");
	scanf("%d", &m);
	if(m<0|| m>=n)
	{
	printf("Error fuera de rango al ingresado, intente de nuevo\n");

				
	system("pause");
	system("cls");//limpieza cada ciclo
	
	}
	}while(m<0|| m>=n);

	
	printf("El valor de la posicion %d es: %d ", m, a[m]);
	system("pause");
	
	system("pause");
	MenuP();
	
}//fin buscar







//------------------Funcion Imprimir-------------------


Imprimir()
{//inicio imprimir
	system("cls");
	for(i=0; i<n; i++)
	{
		printf("a[%d]=%d \n", i, a[i]);
	}

	system("pause");
	MenuP();
	
}//fin imprimir







//------------------Funcion Volver-------------------


Volver()
{//inicio Volver
	system("pause");
	system("cls");//limpieza cada ciclo
	
	int res;//declaracion tipo local
	
	do{
		printf("\n¿Quieres volver a empezar?\n 1 - SI\n 2 - NO\n");
		scanf("%d",&res);	
	
	if (res<1|| res>2)
	{
		printf("Error rango fuera de 1-2, intente de nuevo\n");

				
	system("pause");
	system("cls");//limpieza cada ciclo
	}
	}while(res<1|| res>2);	
	
	if (res==1)
	{
		return main();
	}
	else 
	{
		return 0;
	}
}//fin Volver
