// Síntese
//  Objetivo: Replica do jogo dos copos, onde o programa ira dar a posicao do copo informado.
//  Entrada : N é o numero de movimentos realizados, local é o caracter (A, B ou C) responsavel e mov é o numero do movimento.
//  Saída   : Informara o local da moeda

#include <stdio.h>

int main(void) {
	
	int n, mov, i;
	char local;
	
	printf("Informe a quantidade de movimentos:");
	fflush(stdin); //limpeza de buffer
	scanf("%d",&n);
	
	fflush(stdin); //limpeza de buffer
	do{
	printf("Informe o local da moeda (A,B ou C):");
	scanf("%c",&local);
	local=toupper(local); //Torna caracter maiusculo
	}while (local != 'A' && local != 'B' && local != 'C'); //validacao para inserir A, B ou C apenas.
	
	for(i=1;i<=n;i++){ //repeticao para rodar n vezes escolhidas
  		do{
  			printf("Informe o movimento a ser realizado (1 (A<->B),  2 (B<->C) ou 3 (C<->A)):");
  			fflush(stdin);
			scanf("%d", &mov);
		}while (1<mov>3);//validacao para movimentar apenas as opcoes 1 a 3
		
		switch(mov){
			case 1://move A para B ou B para A
			if (local == 'A'){
				local='B';
				break;
			}
			if (local == 'B'){
				local ='A';
				break;
			}
			printf("Movimento inválido, moeda nao estava em A ou B");
			break;
			case 2: //move B para C ou C para B
			if (local == 'B'){
				local='C';
				break;
			}
			if (local == 'C'){
				local ='B';
				break;
			}
			printf("Movimento inválido, moeda nao estava em B ou C");
			break;
			case 3://move C para A ou A para C
			if (local == 'C'){
				local='A';
				break;
			}
			if (local == 'A'){
				local ='C';
				break;
			}
			printf("Movimento inválido, moeda nao estava em C ou A");
			break;
		}
	}
	printf("%c", local); //printa local da moeda	
	return 0;
}
