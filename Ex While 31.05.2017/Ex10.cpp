#include <stdio.h>
#include <conio.h>
main()
{
	int contOutros=0, contInter=0, contGremio=0, contTorce=-1;
	char resposta;

	do{
		printf("Digite para qual time voce torce ('I' para Internacional, 'G' para Gremio, 'O' para outros e 'F' para finalizar): ");
		scanf("%c", &resposta);
		fflush(stdin);
		contTorce++;
		if(resposta=='I')
			contInter++;
		if(resposta=='G')
			contGremio++;
		if(resposta=='O')
			contOutros++;
	}while(resposta!='F');
	printf("Torcedores do inter: %d \nTorcedores do Gremio: %d \nTorcedores de outros times: %d \nTotal de torcedores entrevistados: %d", contInter, contGremio, contOutros, contTorce);
	getche();
}	
