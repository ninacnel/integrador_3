#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int opcion, i, p, cod, nuevoStock, sinStock=0, codigo[0], stock[0];

    do
    {
        printf("ingrese cantidad de productos a cargar\n");
        scanf("%d", &p);
        if(p<=100 && p>=1)
        {
            codigo[p], stock[p];
        }else if(p>100)
        {
            printf("No puede ingresar mas de 100 electrodomesticos\n");
        }else
        {
            printf("no se ingresara ningun producto\n");
        }
    } while (p>100 && p!=0);
    
    
    char descrip[p][20];

    do
    {
        printf("\nMEN%c\n1. Cargar productos\n2. Modificar stock\n3. Mostrar productos sin stock\n4. Listar productos\n5. Salir\n", 163);
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            for(i=0;i<p;i++)
            {
                do
                {
                    printf("ingrese codigo del electrodomestico\n");
                    scanf("%d", &cod);
                    if(cod!=codigo[i-1])
                    {
                        codigo[i]=cod;
                    }
                } while (cod==codigo[i-1]);
                
                printf("ingrese descripcion del producto\n");
                scanf("%s", &descrip[i]);
                printf("ingrese stock del producto\n");
                scanf("%d", &stock[i]);
            }
            break;
        
        case 2:
            cod=0;
            printf("ingrese codigo del producto\n");
            scanf("%d", &cod);

            for(i=0;i<p;i++)
            {
                if(cod==codigo[i])
                {
                    printf("Stock existente: %d. Ingrese stock actual: \n", stock[i]);
                    scanf("%d", &nuevoStock);
                    stock[i]=nuevoStock;
                }
            }

            //no  da ponerlo fuera
            if(cod!=codigo[i])
            {
                printf("electrodomestico inexistente\n");
            }
            break;
        
        case 3:
            for(i=0;i<p;i++)
            {
                if(stock[i]==0)
                {
                    sinStock++;
                }
            }
            if(sinStock>1)
            {
                printf("Hay %d productos sin stock\n", sinStock);
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
                printf("cod: %d | %s | stock: %d\n", codigo[i], descrip, stock[i]);
            }

            break;

        default:
            if(opcion>5)
            {
                printf("opci%cn inv%clida.\n", 162, 160);
            }
            break;
        }
    } while (opcion!=5);

    if(p==0 || opcion==5)
    {
        printf("fin del programa");
    }   

    return 0;
    system("pause");
}

/*Se desea realizar un programa que gestione el stock de un negocio de venta de
electrodomésticos. Como máximo se permitirán cargar 100 electrodomésticos. De cada
electrodoméstico se conoce su código de barras, su descripción y una cantidad en stock.
Se deberá presentar un menú con las siguientes opciones:
1. Cargar productos.
2. Modificar stock.
3. Mostrar productos sin stock.
4. Listar productos.
5. Salir.
Donde, la opción 1 permite cargar los 100 electrodomésticos ingresando para cada uno: código
de barras, descripción y cantidad.
La opción 2 debe pedir el código de barras del electrodoméstico al cual se desea cambiar el
stock y la nueva cantidad. Si el código de barras ingresado no existe, informar la situación con
un mensaje “Electrodoméstico inexistente”, si el código de barras si se encuentra modificar su
stock con la cantidad ingresada.
La opción 3 debe mostrar en la consola los datos de aquellos electrodomésticos con cantidad
igual a cero.
La opción 4 debe mostrar en la consola el listado de electrodomésticos.
SOLO se saldrá de la aplicación si se selecciona la opción 5.
*/