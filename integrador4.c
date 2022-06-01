#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion, stock[100][3]={};

    do
    {
        printf("\nMEN%c\n1. Cargar productos\n2. Modificar stock\n3. Mostrar productos sin stock\n4. Listar productos\n5. Salir\n", 162);
        scanf("%d", opcion);
        switch (opcion)
        {
        case case 1:
            printf("ingrese c%cdigo del producto\n", 162);
            scanf("%d", &stock[i][i+1]);
            break;
        
        case 4:
            printf("ingrese codigo producto");
            scanf("%d", &cod);
            printf("%d", arreglo[cod]);
        default:
            break;
        }
    } while (opcion!=5);
    


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