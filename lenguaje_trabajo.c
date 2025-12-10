//Jesus Perez 32.025.632 (jess) 
//Santiago Acosta 32.016.516
//Adrian Laya 31.128.099

/*Seleccion de que fase eres de dragon ball*/

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
int main(){
    int seleccion_si_no=0;
    int validacion=0;

srand(time(NULL));

    do {
printf("\n\nNOTA: si no seleccionas ninguna de las opciones se cerrara el programa\n\n");
printf("Bienvenido, quiere saber que personaje de dragon ball eres?\n1. si\n2. no\n");
validacion = scanf("%i",&seleccion_si_no);
while (getchar() != '\n'); // Limpia el buffer después del primer scanf
if (validacion != 1 || seleccion_si_no < 1 || seleccion_si_no > 2)
{
    printf("La proxima pon una de las opciones que se indicaron -_-");
    return 1;
}
if (seleccion_si_no == 1)
{

    int personaje_id = (rand() % 10) + 1; // Genera un número aleatorio entre 1 y 10

        printf("\nAnalizando tu personaje...\n\n");
        system("pause");

        switch (personaje_id)
        {
            case 1:
                printf("\n-Eres: Goku, un sayayin que nunca deja de entrenar ni de comer .\n");
                break;
            case 2:
                printf("\n-Eres: Vegeta, orgulloso, fuerte y siempre buscando mejorar.\n");
                break;
            case 3:
                printf("\n-Eres: Piccolo, serio, sabio y un buen estratega.\n");
                break;
            case 4:
                printf("\n-Eres: Gohan, tranquilo pero con un gran poder oculto.\n");
                break;
            case 5:
                printf("\n-Eres: Krilin, Leal y valiente, el mejor amigo de Goku.\n");
                break;
            case 6:
                printf("\n-Eres: Trunks del Futuro, determinado y noble.\n");
                break;
            case 7:
                printf("\n-Eres: Freezer, Elegante, cruel y con una ambición ilimitada.\n");
                break;
            case 8:
                printf("\n-Eres: Broly, Un poder legendario difícil de controlar.\n");
                break;
            case 9:
                printf("\n-Eres: Bulma, Inteligente y una genio de la tecnología.\n");
                break;
            case 10:
                printf("\n-Eres: Maestro Roshi, Viejo pero sabio, con técnicas clásicas y mucho carisma.\n");
                break;
            default:
                // Esto no debería pasar, pero es una buena práctica
                printf("Error de cálculo. Parece que eres un personaje no canónico.\n");
                break;
        }
        printf("\nQuieres intentar de nuevo para ver si eres otro personaje?\n1. si\n2. no\n");
        // Reiniciamos validacion y seleccion_si_no para el nuevo ciclo
        validacion = 0;
        seleccion_si_no = 0;
        // Leemos la nueva seleccion (lo haremos directamente en la variable ya declarada)
        if (scanf("%i",&seleccion_si_no) != 1 || (seleccion_si_no != 1 && seleccion_si_no != 2)) {
             // Si hay un error de lectura o la opción no es 1 o 2, salimos
             seleccion_si_no = 2;
             while (getchar() != '\n'); // Limpiar el buffer de entrada en caso de error de scanf anterior (Añadido)
        }
} else if (seleccion_si_no == 2)
{
    printf("Esta bien :(\nCuando quieras puedes volver\n");
}
    } while (seleccion_si_no == 1); // Condición para repetir el ciclo si el usuario eligió 'si' (opción 1) la última vez que se le preguntó

    printf("\nRecuerda incluso los mas debiles pueden sorprender\n");

return 0;
}