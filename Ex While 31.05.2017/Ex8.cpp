#include <stdio.h>
#include <conio.h>
main()
{
	int cont=0;
	char resposta='n';
	float sal, medSal, salAcumulado=0;
	
	do{
		printf("Digite o salario: ");
		scanf("%f", &sal);
		fflush(stdin);
		cont++;
		salAcumulado=sal+salAcumulado;
		printf("Voce deseja digitar outro salario? Digite s ou n: ");
		scanf("%c", &resposta);
	}while(resposta!='n');
	medSal=salAcumulado/cont;
	printf("\nA media salarial e: %.2f", medSal);
	getche();
}

