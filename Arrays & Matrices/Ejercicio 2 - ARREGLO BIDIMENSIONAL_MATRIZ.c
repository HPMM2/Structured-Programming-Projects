/*
	Name: Ejercicio 2
	Author: Heidi Martinez 
	Date: 10/05/21 14:17
	Description: Programa que mediante un Menu muestre que se quiere hacer crear una matriz
*/



//librerias
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<stdlib.h>

int Crear();
int Buscar();
int SumaDP();
int SumaDS();
int SumaTS();
int SumaTI();
int Imprimir();
int MenuP();

int i, j, n, p, e, matriz[50][50], sumaDP, sumaDS, sumaTS, sumaTI;



main()
{//inicio main
	printf("Bienvenido al programa, primero vamos a crear una Matriz\n\n");
	
	Crear();
	system("cls");
	int op2;

	do{	
	printf("Que deseas hacer a continuacion\n\n 1 - Crear una matriz\n 2 - Continuar con la misma matriz\n 3 - Salir del sistema");
	scanf("%d", &op2);
	if(op2<1|| op2>3)
	{
	printf("Error rango fuera de 1-3, intente de nuevo");

				
	system("pause");
	system("cls");//limpieza cada ciclo
	
	}
	}while(op2<1|| op2>3);
	
		
	switch(op2)
	{//inicio del switch 2
		case 1:
			main();
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
	printf(" 1 - Buscar un valor\n 2 - Imprimir matriz\n 3 - Suma de diagonal principal\n 4 - Suma de la diagonal inversa\n 5 - Suma triangulo superior\n 6 - Suma triangulo inferior\n 7 - Crear una matriz\n");
	scanf("%d", &op);
	if(op<1|| op>7)
	{
	printf("Error rango fuera de 1-7, intente de nuevo");

				
	system("pause");
	system("cls");//limpieza cada ciclo
	
	}
	}while(op<1|| op>7);
	

	switch(op)
	{//inicio del switch 
		case 1:
			Buscar();
		break;
		
		case 2:
			Imprimir();
		break;
		
		case 3:
			SumaDP();
		break;

		case 4:
			SumaDS();
		break;
		
		case 5:
			SumaTS();
		break;
		
		case 6:
			SumaTI;
		break;	
			
		case 7:
			Crear();
		break;	
		default:
		break;					
	}//fin del switch 
	
}//fin menu








//------------------Funcion Crear-------------------


Crear()
{//inicio crear
	do{
	printf("De que dimensiones deseas la matriz?\n ");
	scanf("%d", &n);
	if(n<1 || n>50)
	{
	printf("Error debe ser menor de 50, intente de nuevo");

				
	system("pause");
	system("cls");//limpieza cada ciclo
	
	}
	}while(n<1 || n>50);
	
	
	
	sumaDP=0;
	sumaDS=0;
	sumaTS=0;
	sumaTI=0;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("Dame el numero [%d,%d] : ", i, j);
			scanf("%d", &matriz[i][j]);
			
			
			if (i==j)
			{
				sumaDP=sumaDP+matriz[i][j];
			}
			
			if ((n+1)==(i+j))
			{
				sumaDS=sumaDS+matriz[i][j];				
			}
			
			if (i<j)
			{
				sumaTS=sumaTS+matriz[i][j];					
			}
			
			if (i>j)
			{
				sumaTI=sumaTI+matriz[i][j];					
			}
		}
	}
	
	system("pause");
	MenuP();

}//fin del crear







//------------------Funcion Buscar-------------------


Buscar()
{//inicio buscar
	printf("Que posicion desea saber: ");
	scanf("%d, %d", &i, &j);

	
	printf("Posicion %d, %d = %d", i, j, matriz[i][j]);
	system("pause");
	MenuP();
}//fin buscar







//------------------Funcion Imprimir-------------------


Imprimir()
{//inicio imprimir
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			printf("%d\t", matriz[i][j]);
		}
			printf("\n");
	}
	system("pause");
	MenuP();
}//fin imprimir







//------------------Funcion SumaDP-------------------


SumaDP()
{//inicio sumaDP
	printf("LA SUMA DE LA DIAGONAL PRINCIPAL ES %d \n", sumaDP);
	system("pause");
	MenuP();
}//fin sumaDP







//------------------Funcion SumaDS-------------------


SumaDS()
{//inicio sumaDS
	printf("LA SUMA DE LA DIAGONAL SECUNDARIA ES %d \n", sumaDS);
	system("pause");
	MenuP();
}//fin sumaDS







//------------------Funcion SumaTS-------------------


SumaTS()
{//inicio sumaTS
	printf("LA SUMA DEL TRIANGULO SUPERIOR ES %d \n", sumaTS);
	system("pause");
	MenuP();
}//fin sumaTS







//------------------Funcion SumaTI-------------------


SumaTI()
{//inicio sumaTI
	printf("LA SUMA DEL TRIANGULO INFERIOR ES %d \n", sumaTI);
	system("pause");
	MenuP();
}//fin sumaTI


