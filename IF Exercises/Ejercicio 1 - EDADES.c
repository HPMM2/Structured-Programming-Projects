/*
	Name: Ejercicio 1 de IF
	Author: Heidi Martinez 
	Date: 11/03/21 21:03
	Description: Programa que indica si una persona es mayor o menor de edad
*/

#include<stdio.h>
#include<windows.h>

main()
{//inicio del main
	int edad;
	char nombre[20];
	
	printf("Dame tu nombre ");
	scanf("%s", &nombre);
	
	printf("%s dame tu edad", nombre);
	scanf("%d", &edad);
	
	
	system("cls");
	
	
	if(edad>=18)
	{
	printf("%s eres mayor de edad ya que tienes %d", nombre, edad);
	}
	else
	{
	printf("%s eres menor de edad ya que tienes %d", nombre, edad);
	}
	
	
	system("pause");
	
} //fin del main
