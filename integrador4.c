#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//grupo 4. Integrantes:
//Lucio Gallucci
//Mirko Lonac
//Nerina Coronel

int main(int argc, char *argv[])
{
   int opcion=0, i=0, p=0, cod=0, nuevoStock=0, sinStock=0, codigo[100], stock[100], existente;
    
    //no inicializamos los arreglos en [0] porque luego en el caso 4 que imprime la lista de productos,
    //solo imprimía el primer número tanto del stock[0] como del codigo[0];
    do
    {
        printf("Ingrese cantidad de productos a cargar\n");
        scanf("%d", &p);
        if(p<=100 && p>=1)
        {
            codigo[p], stock[p];
        }else if(p>100)
        {
            printf("No puede ingresar m%cs de 100 electrodom%csticos\n", 160, 130);
        }else
        {
            printf("No se ingresar%c ning%cn producto\n", 160, 163);
        }
    } while (p>100 && p!=0);
    
    char electrodomestico[p][50];

    do
    {
        printf("\nMEN%c\n1. Cargar productos\n2. Modificar stock\n3. Mostrar productos sin stock\n4. Listar productos\n5. Salir\n", 163);
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            for(i=0;i<p;i++)
            {
                printf("Ingrese el nombre del electrodom%cstico: \n", 130);
                scanf("%s", &electrodomestico[i]);
                printf("Ingrese c%cdigo del electrodom%cstico: \n", 162, 130);
                scanf("%d", &codigo[i]);
                // do
                // {
                //     printf("ingrese codigo del electrodomestico\n");
                //     scanf("%d", &cod);
                //     if(cod!=codigo[i-1])
                //     {
                //         codigo[i]=cod;
                //     }
                // } while (cod==codigo[i-1]);
                //no pudimos resolver que dos productos no tengan el mismo codigo;
                printf("Ingrese stock del producto: \n");
                scanf("%d", &stock[i]);
            }
            break;
        
        case 2:
            printf("Ingrese c%cdigo del producto\n", 162);
            scanf("%d", &cod);

            //además de existir un error en el caso de que se ingrese el mismo codigo para diferentes productos,
            //encontramos un error que no supimos resolver, cuando modificamos el arreglo stock, en consola
            //se imprime el elemento guardado en el arreglo codigo, siendo que en la línea 74 el elemento que
            //pedimos mostrar es aquel que esté en el arreglo stock;
            for(i=0;i<p;i++)
            {
                if(cod==codigo[i])
                {
                    printf("Stock existente: %d. Ingrese stock actual\n", stock[i]);
                    scanf("%d", &nuevoStock);
                    stock[i]=nuevoStock;
                    existente = 1;
                }
                
            }
             if (existente = 0)
                {
                    printf("Producto no encontrado\n");
                }
        
        case 3:
            //con un for recorro todo el arreglo de stock para buscar si alguno de los elementos guardados dentro de éste sea igual a 0
            //cada vez que se encuentre un 0, se itera una vez la variable sinStock previamente inicializada en 0;
            for(i=0;i<p;i++)
            {
                if(stock[i]==0)
                {
                    sinStock++;
                }
            }
            //encotramos un error cuando probamos modificar el stock a 0 de un producto en el case 2, automáticamente
            //la variable sinStock itera y suma un producto sin stock aunque no hayamos entrado a la opcion case 3; 
            if(sinStock>1)
            {
                printf("Hay %d productos sin stock\n", sinStock);;
            }else if(sinStock==1)
            {
                printf("Hay %d producto sin stock\n", sinStock);
            }else
            {
                printf("No hay productos faltantes de stock\n");
            }
            
            break;

        case 4:
            for(i=0;i<p;i++)
            {
                printf("Producto: %s | C%cd: %d | Stock: %d| \n", electrodomestico[i], 162, codigo[i],  stock[i]);

            }

            break;

        default:
            if(opcion>5)
            {
                printf("Opci%cn inv%clida.\n", 162, 160);
            }
            break;
        }
    } while (opcion!=5);

    //no pudimos resolver que el programa no muestre el menú si lo que se ingresa es un 0
    if(p==0 || opcion==5)
    {
        printf("Fin del programa.\n");
    }   

    return 0;
    system("pause");
}