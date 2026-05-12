/*
	Name: 
	Copyright: 
	Author: 
	Date: 26/03/21 19:35
	Description: 
*/
#include<stdio.h>
#include<windows.h>


main()
{//inicio del main
	int  nac=0, i, n, sal, clase, salt, aum;
	
	printf("¿Cuantos profesores hay? ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{//inicio del for
		do
		{
		
		printf("Dame el nivel academico del profesor %d\n", i);
		printf("1\n");
		printf("2\n");
		printf("3\n");
		printf("4\n");
		scanf("%d",&clase);
		}while (clase>=5 or clase<=0);
		
		printf("Dame el salario del profesor %d\n", i);
		scanf("%d", &sal);
		
		switch(clase)
		{//inicio del switch
			case 1:
				aum=(sal*0.035);
				salt=(sal+aum);
				printf("El profesor con nivel academico 1 tiene un salario de %d\n", salt);
				break;
			
			case 2:
				aum=(sal*0.041);
				salt=(sal+aum);
				printf("El profesor con nivel academico 2 tiene un salario de %d\n", salt);
				break;
				
			case 3:
				aum=(sal*0.048);
				salt=(sal+aum);
				printf("El profesor con nivel academico 3 tiene un salario de %d\n", salt);
				break;
				
			case 4:
				aum=(sal*0.053);
				salt=(sal+aum);
				printf("El profesor con nivel academico 4 tiene un salario de %d\n", salt);
				break;
			
			return 0;
		}//fin del switch
	
	
	}//fin del for


}

