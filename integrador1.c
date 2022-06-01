#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vehiculo, horario, pasajeros, tarifa;

    printf("Seleccione el horario:\n1 Alto\n2 Bajo\n");
    scanf("%d", &horario);

    //if para trabajar con la opción 1 o 2, si se ingresa otro horario se imprime el else de la línea 48
    if(horario==1 || horario==2)
    {
        switch (horario)
        {
            case 1:     printf("Seleccione tipo de veh%cculo\n 1 Autom%cvil\n 2 Cami%cn\n 3 Moto\n", 161,162,162);
                        scanf("%d", &vehiculo);

                //switch anidado para trabajar con el horario 1 o con el horario 2
                switch (vehiculo)
                {
                    case 1:     printf("Informe cantidad de pasajeros\n");
                                scanf("%d", &pasajeros);

                                //if para trabajar con el caso del auto, donde se distingue la tarifa según la cantidad de pasajeros
                                if(pasajeros>2)
                                {
                                    printf("No paga peaje\n");          break;
                                }else{
                                      printf("La tarifa es de $200\n"); break;
                                }

                    case 2:     printf("La tarifa es de $300\n");       break;
                    case 3:     printf("La tarifa es de $100\n");       break;

                } break;

            case 2:     printf("Seleccione tipo de veh%cculo\n 1 Autom%cvil\n 2 Cami%cn\n 3 Moto\n", 161,162,162);
                        scanf("%d", &vehiculo);

                        switch (vehiculo)
                        {
                            case 1:     printf("La tarifa es de $150\n");       break;
                            case 2:     printf("La tarifa es de $200\n");       break;
                            case 3:     printf("No paga peaje\n");              break;
                        } break;
        }
    }else{
        printf("Opci%cn no v%clida. Vuelva a intentarlo.", 162,160);
    }
    system("pause");
    return 0;
}