/*
Heidi Pamela Martinez Martinez 1952947

Taller de Porgramacion - 002 - PIA

Crear un programa en C en donde se ingresen y se impriman datos
de clientes (nombre, correo, contacto, precio), fecha de la 
última vez en que adquirió el servicio junto con el precio 
individual de cada uno y cuando será la próxima vez que requerirá 
el servicio.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void CREAR();
void CONTINUAR();
void CARGAR();
void LISTA();



int i;

typedef struct CLIENTES
{
    char nombre[30];
    char correo[42];
    char num[16];
    char fecha[41];
    char proxfecha[41];
    float desc;
    float precio;
    
}tcliente;





//------------------------------- MENU MAIN --------------------------------------
main()
{
    int op;
    
    do {
        printf("1 - Crear un archivo binario llamado \"CLIENTES.txt\"\n");
        
        printf("2 - Carga de registros de clientes \n");
        
        printf("3 - Listado completo de clientes \n");
           
        printf("4 - Finalizar\n\n");
        
        printf("Ingrese su opcion:");
        
        scanf("%d",&op);
        
        switch(op)
		{
            case 1:
				CREAR();
			break;
			
            case 2:
				CARGAR();
			break;	
			
            case 3:
				LISTA();
			break;						
					
            case 4:
				return 0;
			break;				
			

			
        }
    } while (op!=4);
    return 0;
}





//------------------------------- CONTINUAR --------------------------------------
void CONTINUAR()
{
    printf("Presione una tecla para continuar\n\n");
    getch();
}





//---------------------------------- CREAR ---------------------------------------
void CREAR()
{
	FILE*ptrCf;
	if((ptrCf = fopen("CLIENTES.txt","wb")) ==NULL)
	{
		printf("El archivo no pudo abrirse \n");
	}else
	{
		CONTINUAR();
	
	fclose(ptrCf);
	}
}





//------------------------------- CARGAR ----------------------------------------
void CARGAR()
{
	FILE*ptrCf;
	if((ptrCf = fopen("CLIENTES.txt","ab")) ==NULL)
	{
		printf("El archivo no pudo abrirse \n");
	}else
	{
		char nombres[7][150];
		
		
		for(i=0;i<1;i++)
		{	
			tcliente carga;

			printf("Ingrese el nombre del cliente \n");
			scanf("%s",&carga.nombre);
			fflush(stdin);
		
			printf("Ingrese el correo del cliente \n");
			gets(carga.correo);

			printf("Ingrese el numero de contacto del cliente \n");
			gets(carga.num);
        
			printf("Ingrese la ultima fecha del servicio del cliente (DD/MM/AA) \n");
			printf("Si el cliente es nuevo ingresa el dia de hoy \n");
			gets(carga.fecha);
    
			printf("Ingrese la proxima fecha que el cliente ocupara el servicio (DD/MM/AA) \n");
			gets(carga.proxfecha);
			
			printf("Ingrese el precio neto del servicio: \n");
			scanf("%f",&carga.precio);
				
		fwrite(&carga, sizeof(tcliente), 1, ptrCf);
		fclose(ptrCf);
		}
		CONTINUAR();	
	}
}

		





//------------------------------- LISTA/IMPRESION -----------------------------------
void LISTA()
{
	FILE*ptrCf;
	if((ptrCf = fopen("CLIENTES.txt","rb")) ==NULL)
	{
		printf("El archivo no pudo abrirse \n");
	}else
	{
		tcliente carga;
	    fread(&carga, sizeof(tcliente), 1, ptrCf);
		while(!feof(ptrCf))	
		{
			printf("%s -> %s %s INICIO: %s PROXIMA: %s PRECIO: %0.2f\n", carga.nombre, carga.correo, carga.num, carga.fecha, carga.proxfecha, carga.precio);
			fread(&carga, sizeof(tcliente), 1, ptrCf);
		}
		fclose(ptrCf);
	}
	
	CONTINUAR();
}




