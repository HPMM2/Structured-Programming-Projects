/*
	Name: Ejercicio 4 de FOR
	Author: Heidi Martinez
	Date: 12/03/21 10:51
	Description: Programa que muestra cuantos alumnos acreditaron y cuantos no
*/

#include<stdio.h>
#include<windows.h>


main()
{//inicio del main
	int ac=0, nac=0, i, n, prom;
	
	printf("¿Cuantos alumnos hay? ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{//inicio del for
		printf("Dame el promedio del alumno %d ", i);
		scanf("%d", &prom);
		
		
		if(prom>=70)
		{//inicio del if
			ac=ac+1;
		}//fin del if
		else
		{//inicio del else
			nac=nac+1;
		}//fin del else
	}//fin del for
	
	system("cls");
	
	printf("La cantidad de alumnos total fue de un %d\n aprobados: %d\n reprobados %d", n, ac, nac);
}//fin del main

