// printf (Escribir)... Scanf(Leer)...if (si)...else if (de lo contrario si)...
//int (entero)...char (caracter)...float(real)...do (inicio del ciclo)
#include <stdio.h>
#include <stdlib.h>

int main()
{
int peso,d,cont=0,contaux=0,contex=0,contnat=0,contpre=0,precioa,preciob,precioc,preciod;
char resp,respdos;
float rech,ganancia;

printf("\n\n\t :v Bienvenidos :v\n\n\t");
system ("PAUSE");
printf("hubo produccion de naranja esta cosecha? s/n: \n");
scanf("%c",&resp);
if (resp=='s'||resp=='S')
  { 
    do
	 {  
       printf("Cual es el peso de la naranja en g?: \n");
  	   scanf("%i",&peso);
  	   printf("Cual es el diametro de la naranja en cm?: \n");
  	   scanf("%i",&d);
  	   cont++;
  	   if ((peso<=300)&&(d>=7&& d<9))
  	    {	  
  	     printf("esta es una naranja Natural\n ");
  	     contnat++;
        }
       if ((peso>=300&& peso<450)&&(d>8&& d<=11))
        {
  	     printf(" esta es una naranja Extra\n");
  	     contex++;
        }
       if ((peso>=450)&&(d>9&& d<=12))
        {
  	     printf("esta es una naranja tipo premium :'v \n");
  	     contpre++;
        }
       if ((d<7)||(d>12))
        {
  	     printf("esta naranja no entra en ninguna de las categorias :'( \n");
  	     contaux++;
        }
        printf("Hay mas naranjas por medir? s/n: \n");
        fflush (stdin);
        scanf("%c",&respdos);
     } while (respdos=='s'||respdos=='S');
   rech=(contaux*100)/cont;
   system ("cls");
   printf("El porcentaje de naranjas rechazadas es: %.2f \n",rech);
   printf("cuanto es el costo de la docena Premium: \n");
   scanf("%i",&precioc);
   printf("cuanto es el costo de la docena Extra: \n");
   scanf("%i",&precioa);
   printf("cuanto es el costo de la docena Natural: \n");
   scanf("%i",&preciob);
   printf("cuanto es el costo de la docena de las naranjas rechazadas: \n");
   scanf("%i",&preciod);
   ganancia=(contex*precioa/12)+(contpre*precioc/12)+(contnat*preciob/12)-(rech*preciod/12);
   printf("La ganancia es de: %.2f \n",ganancia);
   printf("Gracias por comprar en mi granja :'v\n");
   printf("Adios :v\n");
   printf("vayase por la sombrita para que no se queme :v\n");
  }
else 
  { printf("No hubo cosecha por lo tanto no hay produccion.\n");
  	printf("Adios :v\n");
  	printf("vayase por la sombrita para que no se queme :v\n");
  }
}
