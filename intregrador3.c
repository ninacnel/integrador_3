#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, opcion, alumnos[10][2]={};

    do
    {
        printf("MEN%c\n1. Cargar alumnos\n2. Buscar un alumno\n3. Modificar la nota de un alumno\n4. Mostrar listado de alumnos\n5. Salir\n", 163);
        scanf("%d", &opcion);
        do
        {
            switch (opcion)
            {
            case 1:
                for(i=0;i<=9;i++)
                {
                    for(j=0;j<=1;j++)
                    {
                        do
                        {
                            printf("ingrese DNI alumno\n");
                            scanf("%d", &alumnos[i][j]);

                            if(alumnos[i][j]>=1000000 && alumnos[i][j]<=99999999)
                            {
                                alumnos[i][j]=alumnos[i][j];
                            }
                            else
                            {
                                printf("DNI inv%clido. |\t", 160);
                            }
                        } while (alumnos[i][j]<1000000 || alumnos[i][j]>99999999);
                        
                        j++;

                        do
                        {
                            printf("ingrese nota\n");
                            scanf("%d", &alumnos[i][j]);
                        
                            if(alumnos[i][j]>=1 && alumnos[i][j]<=10)
                            {
                                alumnos[i][j]=alumnos[i][j];
                            }
                            else
                            {
                                printf("nota inv%clida. |\t", 160);
                            }
                        
                        } while(alumnos[i][j]<=0 || alumnos[i][j]>10);
                    }
                }
                break;
            case 2:
                printf("\ningrese DNI del alumno\n");
                scanf("%d", &dni);

                do
                {
                    
                } while(dni!=arreglo[i][j])
                 
                break;
            case 3:
                break;
            case 4:
                for(i=0;i<=9;i++)
                {
                    for(j=0;j<=1;j++)
                    {
                        printf("DNI %d | ", alumnos[i][j]);
                        j++;
                        printf("nota: %d\n", alumnos[i][j]);
                    }
                }
                break;
    
            default:
                if(opcion==5)
                {
                    printf("saliendo del programa\n");
                }
                else
                {
                    printf("opci%cn inv%clida\n", 162, 160);
                }
                break;
            }
        } while (opcion!=5);
    } while (opcion!=5);
    
    
    printf("\nfin del programa\n");

    return 0;
    system("pause");
}


/* Deseamos realizar un programa que gestione las notas de una clase de 10 alumnos de los
cuales sabemos el DNI y la nota. El programa debe mostrar un menú con las siguientes
opciones a resolver:
1. Cargar Alumnos
2. Buscar un alumno
3. Modificar la nota de un alumno
4. Mostrar un listado de los 10 alumnos
5. Salir
Donde, la opción 1 permite cargar los 10 alumnos ingresando para cada uno: DNI y nota.
Validar que el DNI no sea menor que 1000000 ni mayor que 99999999. Validar que la nota sea
mayor a 0 y menor o igual que 10.
La opción 2 debe pedir el DNI de un alumno y mostrar en consola DNI y nota. Si el DNI
ingresado no existe, informar la situación con un mensaje “DNI inexistente”.
La opción 3 debe pedir el DNI del alumno al cual se desea cambiar la nota y la nueva nota. Si el
DNI ingresado no existe, informar la situación con un mensaje “DNI inexistente”, si el DNI si se
encuentra modificar la nota del alumno por la ingresada.
La opción 4 debe mostrar en la consola el listado de alumnos.
SÓLO se saldrá de la aplicación si se selecciona la opción 5.
*/