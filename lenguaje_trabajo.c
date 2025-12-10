//Jesus Perez 32.025.632 (jess) 
//Santiago Acosta 32.016.516

/*Seleccion de que fase eres de dragon ball*/
#include <stdio.h>
#include <stdlib.h>  
#include <time.h>
int main(){
    int seleccion_si_no=0;
    int validacion=0;

srand(time(NULL));

printf("NOTA: si no seleccionas ninguna de las opciones se cerrara el programa\n\n");
printf("Bienvenido, quiere saber que personaje de dragon ball eres?\n1. si\n2. no\n");
validacion = scanf("%i",&seleccion_si_no);
if (validacion != 1 || seleccion_si_no < 1 || seleccion_si_no > 2)
{
    printf("La proxima pon una de las opciones que se indicaron -_-");
    return 1;
}
if (seleccion_si_no == 1)
{

    int personaje_id = (rand() % 10) + 1; // Genera un número aleatorio entre 1 y 10

        printf("\n¡Analizando tu personaje...!\n");

        switch (personaje_id)
        {
            case 1:
                printf("Eres: ¡Goku¡ un sayayin que nunca deja de entrenar ni de comer .\n");
                break;
            case 2:
                printf("Eres: ¡Vegeta! orgulloso, fuerte y siempre buscando mejorar.\n");
                break;
            case 3:
                printf("Eres: ¡Piccolo! serio, sabio y un buen estratega.\n");
                break;
            case 4:
                printf("Eres: ¡Gohan! tranquilo pero con un gran poder oculto.\n");
                break;
            case 5:
                printf("Eres: ¡Krilin! Leal y valiente, el mejor amigo de Goku.\n");
                break;
            case 6:
                printf("Eres: ¡Trunks del Futuro! determinado y noble.\n");
                break;
            case 7:
                printf("Eres: ¡Freezer! Elegante, cruel y con una ambición ilimitada.\n");
                break;
            case 8:
                printf("Eres: ¡Broly! Un poder legendario difícil de controlar.\n");
                break;
            case 9:
                printf("Eres: ¡Bulma! Inteligente y una genio de la tecnología.\n");
                break;
            case 10:
                printf("Eres: ¡Maestro Roshi! Viejo pero sabio, con técnicas clásicas y mucho carisma.\n");
                break;
            default:
                // Esto no debería pasar, pero es una buena práctica
                printf("Error de cálculo. Parece que eres un personaje no canónico.\n");
                break;
        }

} else if (seleccion_si_no == 2)
{
    printf("Esta bien :(\nCuando quieras puedes volver\n");
}
    printf("Recuerda incluso los mas debiles pueden sorprender");

return 0;
}