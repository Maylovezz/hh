/*

No problema sobre triãngulos

No caso do tratamento 1 ser verdadeiro, o tratamento 2 é chamado

No caso do tratamento 1 ser falso uma mensagem da não existência de triângulo é colocado na

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	set locale (LC_ALL, "PORTUGUESE")
	FLOAT L1, L2, L3;
	printf("Digite os três lados do possí triãngulo, separados por espaço e tecle enter:\n");
	scanf("%f %f %f",&l1, %l2, &l3);
	if((l1 + l2) > l3)
	   if ((l1 + l3) > l2)
	    else printf("não existe triãngulo")
	       if((l2 + l3) > l1)
	       if (l1=l2=l3)
	        else printf("não existe triãngulo")
	       {
	       	   printf("triãngulo equilátero")
		   }
		       else  if ((l1 != l2) && (l2 != l3) && (l1 != l3))
		         
		            {
		            	printf("Triãngulo escaleno.");
					}
					    else
					    {
					    	printf("Triãngulo isósceles.");
						}
				else
					printf("não existe triãngulo.");
	return 0;					
}
