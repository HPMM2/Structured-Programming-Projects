/*
	Name: Ejercicio 2
	Author:Heidi Martinez 
	Date: 23/04/21 10:04
	Description: Programa donde aprueben o reprueben una cantidad de alumnos 
*/

//librerias
#include<stdio.h>
#include<windows.h>
#include <stdlib.h>

 


//declaracion de variables tipo global
int  i;
int numapro=0, numrepro=0, alum, prom; 
float C1, C2, C3;



main()
{//inicio del main

system("cls");//limpieza cada ciclo

inicial();
forr();


}



//----------funcion incial-------------
inicial()
{

	float tot;//declaracion tipo local
	char nom[20];
	do{
	printf("¿Cuantos alumnos caben en el salon\n ");
	scanf("%f", &tot);
	if(tot<1)
	{
		printf("Error debe haber al menos 1 persona, intente de nuevo\n");

				
	system("pause");
	system("cls");//limpieza cada ciclo
	
	}
	}while(tot<1);

 do
{
	float alum;
	printf("¿Cuantos alumnos hay en el salon\n ");
	scanf("%f", &alum);//declaracion tipo local
	if(alum<=0 || alum>tot)
	{
		printf("Error cantidad no valida para el salon, intente de nuevo\n");

				
	system("pause");
	system("cls");//limpieza cada ciclo	
}
}while(alum>0 || alum>tot);



}//fin de la funcion inicial





//----------funcion for-------------
forr()
{

for(i=0;i>=alum;i++)
{//inicio del for
	
	i=1;
	char nom[20];
	printf("Dame el nombre del alumno %d ", i);
	scanf("%s", &nom);
	
	do
	{
		printf("Dame la primera calificacion ");
		scanf("%f", &C1);
		if(C1<0 || C1>100)
		{
			printf("Error calificacion no valida\n");
			
				
	system("pause");
		}
	}while(C1<0 || C1>100);	

		do
	{
		printf("Dame la segunda calificacion ");
		scanf("%f", &C2);
		if(C2<0 || C2>100)
		{
			printf("Error calificacion no valida\n");
			
				
	system("pause");
		}
	}while(C2<0 || C2>100);	
	
		do
	{
		printf("Dame la tercera calificacion ");
		scanf("%f", &C3);
		if(C3<0 || C3>100)
		{
			printf("Error calificacion no valida\n");
			
				
	system("pause");
		}
	}while(C3<0 || C3>100);	
	
	
	
	prom=(C1+C2+C3)/3;
	if(prom>=70)
	{//inicio del if
		printf("Tu promedio es de %d por lo tanto aprobaste\n", prom);
		numapro = numapro+1;
	}
	else
	{
		printf("Tu promedio es de %d por lo tanto reprobaste\n", prom);
		numrepro = numrepro+1;
		
		int op;//declaracion tipo local
	
	do{
		printf("\n¿Desea continuar?\n 1 - SI\n 2 - NO\n");
		scanf("%d",&op);	
	
	if (op<1|| op>2)
	{
		printf("Error rango fuera de 1-2, intente de nuevo");

				
	system("pause");

	}
	}while(op<1|| op>2);	
	
	if (op==1)
	{
		return forr();
	
	}
	else 
	{
		printf("De los alumnos aprobaron %d y reprobaron %d\n", numapro, numrepro);
		volver();
	
	}
	}
	
}
//fin de la funcion for
	
	

}//fin del for






//----------funcion volver-------------
volver()
{
	system("pause");
	system("cls");//limpieza cada ciclo
	
	int res;//declaracion tipo local
	
	do{
		printf("\n¿Quieres volver a empezar?\n 1 - SI\n 2 - NO\n");
		scanf("%d",&res);	
	
	if (res<1|| res>2)
	{
		printf("Error rango fuera de 1-2, intente de nuevo");

				
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
}
	
	
	



