//Jesus Perez 32.025.632 (jess) 
//Santiago Acosta 32.016.516

/*Seleccion de que fase eres de dragon ball*/
#include <stdio.h>
int main(){
    int seleccion_si_no=0;
    int validacion=0;
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

} else if (seleccion_si_no == 2)
{
    printf("Esta bien :(\nCuando quieras puedes volver\n");
}


return 0;
}