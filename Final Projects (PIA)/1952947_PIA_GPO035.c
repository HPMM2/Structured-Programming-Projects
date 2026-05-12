/*
	Name: PIA
	Author: Heid Martinez
	Date: 21/05/21 02:32
	Description: Programa que se basa en una calculadora para resolver ciertos
	problemas numéricos e implementa matrices en donde se es un menú.
 
*/

//librerias
#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int BASICA();
int MATRICES();
int Crear();
int MenuP();
int continuar();
int mainp();




   
int x, y, res, c; //funciones globales

main()
{//inicio del main

	system("color 3f");   

	int op;//funcion local
	
	printf("Bienvenido a la calculadora de numeros enteros\n\n");
	printf("Que desea usar?\n 1 - Calculadora basica\n 2 - Creacion de matrices\n 3 - Salir del programa \n");
	scanf("%d", &op);
	if(op<1|| op>3)
	{
	printf("Error rango fuera de 1-3, intente de nuevo\n");


				
	system("pause");
	system("cls");//limpieza cada ciclo
	
	}while(op<1|| op>3);
	
	
			
	switch(op)
	{//inicio del switch 
		case 1:
			BASICA();
		break;
		
		case 2:
			MATRICES();
		break;
		
		case 3:
			return 0;
		break;				
	}//fin del switch 

	
}//fin del main















//                                                              BASICA








//------------Funcion calculadora basica------------------
BASICA()
{
	system("cls");//limpieza cada ciclo
	Crear();
}



//------------------------Funcion Crear------------------------------
Crear()
{
	printf("Ingrese su primer numero (x) \n");
	scanf("%d",&x);
		do
		{
			printf("Ingrese su segundo numero (y) \n");
			scanf("%d",&y);
			if(y==0)
			printf("No se van a poder usar todas las funciones con 0, ingrese otro n%cmero\n", 163);
			}while (y<=1);		
		


		MenuP();
	}


//------------------------Funcion MenuP------------------------------
MenuP()
{
	system("cls");//limpieza cada ciclo
	int op;
	printf("Que desea hacer a continuacion?\n");
	printf(" 1 - Sumar\n 2 - Restar\n 3 - Multiplicar\n 4 - Dividir\n 5 - Indicar el numero mayor\n 6 - Raiz cuadrada del primer numero\n 7 - Raiz cuadrada del segundo numero\n 8 - Potencia del primer numero\n 9 - Potencia del segundo numero\n 10 - Coseno del primer numero\n");
	printf(" 11 - Coseno del segundo numero\n 12 - Seno del primer numero\n 13 - Seno del segundo numero\n 14 - Tangente del primer numero\n 15 - Tangente del segundo numero\n 16 - Inversa del primer numero\n 17 - Inversa del segundo numero\n 18 - Salir del programa\n");
	scanf("%d",&op);
	if(op<1|| op>18)
	{
	printf("Error rango fuera de 1-18, intente de nuevo\n");


				
	system("pause");
	system("cls");//limpieza cada ciclo
	
	}while(op<1|| op>18);
	
	
			
	switch(op)
	{//inicio del switch 
		case 1:
			res=x+y;
			printf("La suma de %d y %d es: %d\n", x, y, res);
			system("pause");
			continuar();			
		break;
		
		case 2:
			res=x-y;
			printf("La resta de %.1d y %.1d es: %d\n", x, y, res);
			system("pause");
			continuar();			
		break;
		
		case 3:
			res=x*y;
			printf("La multiplicaci%cn de %.1d y %.1d es: %d\n", 162, x, y, res);
			system("pause");
			continuar();			
		break;
		
		case 4:
			res=x/y;
			printf("La divisi%cn de %.1d entre %.1d es: %d\n", 162, x, y, res);
			system("pause");
			continuar();			
		break;
		
		case 5:
			if(x>y)
			{
				printf("El mayor de %d y %d es %d\n",x, y, x);
			}else if(y>x)
			{
				printf("El mayor de %d y %d es %d\n",x, y, y);
			}else
			{
				printf("Los dos numeros son iguales\n");
			}
			system("pause");
			continuar();			
		break;
		
		case 6:
			res=sqrt(x);
			printf("La ra%cz cuadrada de %.1d es: %d\n", 161, x, res);
			system("pause");
			continuar();			
		break;
		
		case 7:
			res=sqrt(y);
			printf("La ra%cz cuadrada de %.1d es: %d\n", 161, y, res);
			system("pause");
			continuar();			
		break;
		
		case 8:
			printf("Dame el valor que sera la potencia ");
			scanf("%d", &c);
			
			res=pow(x,c);
			
			printf("La potencia de %.1d a la %.1d potencia es: %d\n", x, c, res);
			system("pause");
			continuar();			
		break;
		
		case 9:
			printf("Dame el valor que sera la potencia ");
			scanf("%d", &c);
			
			res=pow(y,c);
			
			printf("La potencia de %.1d a la %.1d potencia es: %d\n", y, c, res);
			system("pause");
			continuar();			
		break;
		
		case 10:
			res=cos(x);
			printf("El coseno de %0.1d es %d\n", x, res);
			system("pause");
			continuar();			
		break;
		
		case 11:
			res=cos(y);
			printf("El coseno de %0.1d es %d\n", y, res);
			system("pause");
			continuar();			
		break;
		
		case 12:
			res=sin(x);
			printf("El seno de %0.1d es %d\n", x, res);
			system("pause");
			continuar();			
		break;
		
		case 13:
			res=sin(y);
			printf("El seno de %0.1d es %d\n", y, res);
			system("pause");
			continuar();			
		break;
		
		case 14:
			res=tan(x);
			printf("La tangente de %0.1d es %d\n", x, res);
			system("pause");
			continuar();			
		break;
		
		case 15:
			res=tan(y);
			printf("La tangente de %0.1d es %d\n", y, res);
			system("pause");
			continuar();			
		break;
		
		case 16:
			res=1/x;
			printf("La inversa de %0.1d es %d\n", x, res);
			system("pause");
			continuar();			
		break;
		
		case 17:
			res=1/y;
			printf("La inversa de %0.1d es %d\n", y, res);
			system("pause");
			continuar();			
		break;
		
		case 18:
			return 0;
		break;		
	}//fin del switch 

	

}


continuar()
{
    printf("Presione una tecla para continuar\n\n");
    MenuP();
}
















//                                                              MATRICES





int CrearM();
int Buscar();
int Imprimir();
int continuarM();
int MenuM();



//------------Funcion calculadora de matrices------------------
MATRICES()
{
	CrearM();
}



int i, op, v, n, m, a[100]; // locales



mainp()
{//inicio main
	system("cls");


	do{	
	printf("Que deseas hacer a continuacion\n\n 1 - Crear una matriz\n 2 - Continuar con la misma matriz\n 3 - Salir del sistema\n");
	scanf("%d", &op);
	if(op<1|| op>3)
	{
	printf("Error rango fuera de 1-3, intente de nuevo\n");


				
	system("pause");
	system("cls");//limpieza cada ciclo
	
	}
	}while(op<1|| op>3);
	
	
			
	switch(op)
	{//inicio del switch 2
		case 1:
			CrearM();
		break;
		
		case 2:
			MenuM();
		break;
		
		case 3:
			return 0;
		break;				
	}//fin del switch 2

	
}//fin del main








//------------------Funcion MenuM-------------------


MenuM()
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
			continuarM();
		break;

		case 5:
			return 0;
		break;				
		default:
		break;					
	}//fin del switch 
	
}//fin menu








//------------------Funcion Crear-------------------


CrearM()
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
	mainp();
		
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
	MenuM();
	
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
	MenuM();
	
}//fin imprimir






//------------------Funcion Continuar------------------
continuarM()
{
    printf("Presione una tecla para continuar\n\n");
    system("pause");
    mainp();
}



