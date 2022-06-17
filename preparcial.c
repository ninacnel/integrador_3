#include <stdio.h>
#include <stdlib.h>

int numerosID[50];
float pesos[50];
int destinos[50];
int horasPlanificadas[50];
int estados[50];

const int tam = 50;
//constante porq no queremos modificarla a traves del codigo
//recordar poner lo que pide la consigna, en este caso pide 50

void cargarEnvios();
void mostrarEnvios();
void modificarEstadoDeUnEnvio();
void mostrarEnvioParaDestino(int destino);

void main()
{
    int opcion = 0;
    int des = 0; 

    do
    {
        printf("\n1- Cargar env%cos planificados.", 161);
        printf("\n2- Mostrar env%cos planificados.", 161);
        printf("\n3- Modificar estado de un env%co.", 161);
        printf("\n4- Mostrar env%cos para un destino.", 161);
        printf("\n5- Salir.\n\n");
        scanf("%d", &opcion);

        if(opcion != 5)
        {
            switch(opcion)
            {
                case 1: 
                    //Cargar envíos planificados
                    cargarEnvios();
                    break;
                case 2: 
                    //Mostrar envíos planificados
                    mostrarEnvios();
                    break;
                case 3: 
                    //Modificar estado de un envío  
                    modificarEstadoDeUnEnvio();
                    break;
                case 4: 
                    //Mostrar envíos para un destino
                    printf("Destino a buscar: ");
                    printf("\n1- Rosario");
                    printf("\n2- Funes");
                    printf("\n3- Roldan");
                    printf("\n4- Baigorria");
                    printf("\n");
                    scanf("%i", &des);

                    mostrarEnvioParaDestino(des);

                    break;
                default:
                    printf("La opci%cn ingresada es inv%clida\n", 162, 160);
            }  
        }

    } while (opcion != 5);
}

void cargarEnvios()
{
    printf("--Ingrese los datos de los env%cos--\n", 161);

    //va de i hasta 50
    for(int i = 0; i < tam; i++)
    {

        //en estos datos ingresados faltan todas las validaciones do while correspondiente
        printf("Nro. de env%co: \n", 161);	
        scanf("%d", &numerosID[i]);

        printf("Ingrese el peso: \n");
        scanf("%f", &pesos[i]);
        
        printf("Ingrese el destino: ");
        printf("\n1- Rosario");
        printf("\n2- Funes");
        printf("\n3- Roldan");
        printf("\n4- Baigorria");
        printf("\n");
        scanf("%i", &destinos[i]);
        //poder poner valores enteros que luego muestres texto

        printf("Ingrese la hora: ");
        scanf("%d", &horasPlanificadas[i]);

        printf("Ingrese el estado: ");
        printf("\n0- Pendiente");
        printf("\n1- Despachado");
        //solo dos valores posibles 0 o 1
        printf("\n");
        scanf("%d", &estados[i]);
    }
}

//vamos a ir recorriendo dato a dato e ir mostrandolo
//si tiene un 1 almacenado va a mostrar rosario, etc
void mostrarEnvios()
{
    for(int i = 0; i < tam; i++)
    {
        printf(" %d \t", numerosID[i]);
        printf(" %.2f \t", pesos[i]);
        switch(destinos[i])
        {
            case 1:
                printf("Rosario");
                break;
            case 2:
                printf("Funes");
                break;
            case 3:
                printf("Roldan");
                break;
            case 4:
                printf("Baigorria");
                break; 
            default:
                printf("Destino inv%clido\n", 160);
        }
        printf("\t");
        printf(" %d hs \t", horasPlanificadas[i]);

        //en este switch lo mismo que arriba
        switch(estados[i])
        {
            case 0:
                printf("Pendiente");
                break;
            case 1:
                printf("Despachado");
                break;
            default:
                printf("Estado inv%clido\n", 160);
        }
        
        printf("\n");    
    }
}

//pedir al usuario el numero de envio a modificar y luego
//voy a tener que recorrer el arreglo buscando la opcion que ingreso
void modificarEstadoDeUnEnvio()
{
    int nroID = 0, est = 0;
    int encontrado = 0;

	printf("Nro del env%co a modificar:", 161);	
    scanf("%d", &nroID);

    
}

//que el usuario indique para que destino quiere ver el envio
//muestro el menu y el valor que leo lo paso como parametro a la funcion envio
//for i de 0 al <50
//si es igual lo voy a mostrar en la consola, si no es igual no lo muestro
void mostrarEnvioParaDestino(int destino)
{

}

//NO hay que MODIFICAR hay que COMPLETAR

//no se trabaja ccon base de datos, cada vez qe se ekevute el usuario tiene que ingresar los datos
//5 datos de cada envio
//un for del 1 hasta el tamaño del elemento a cargar
//validar que el dato cargado sea correcto

//si el envio estaba en 0(pendiente) que pase a estar en 1(despachado) o viceversa en la opcion de modificar
//en C todas se llaman funciones, pero se diferencian algunas funciones que devuelven
//vacio cuando declaramos void(parecido a un subproceso/procedimiento)
//variables locales: voy a poder modificarlas a lo largo del codigo
//variable global: en vez de ir poniendo limite 50 destinos[50], por ej, el dia
//que se puedan hacer mas de 50 solo debo modificar la dimension del arreglo