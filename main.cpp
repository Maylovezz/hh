/*

No problema sobre tri�ngulos

No caso do tratamento 1 ser verdadeiro, o tratamento 2 � chamado

No caso do tratamento 1 ser falso uma mensagem da n�o exist�ncia de tri�ngulo � colocado na

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	set locale (LC_ALL, "PORTUGUESE")
	FLOAT L1, L2, L3;
	printf("Digite os tr�s lados do poss� tri�ngulo, separados por espa�o e tecle enter:\n");
	scanf("%f %f %f",&l1, %l2, &l3);
	if((l1 + l2) > l3)
	   if ((l1 + l3) > l2)
	    else printf("n�o existe tri�ngulo")
	       if((l2 + l3) > l1)
	       if (l1=l2=l3)
	        else printf("n�o existe tri�ngulo")
	       {
	       	   printf("tri�ngulo equil�tero")
		   }
		       else  if ((l1 != l2) && (l2 != l3) && (l1 != l3))
		         
		            {
		            	printf("Tri�ngulo escaleno.");
					}
					    else
					    {
					    	printf("Tri�ngulo is�sceles.");
						}
				else
					printf("n�o existe tri�ngulo.");
	return 0;					
}
