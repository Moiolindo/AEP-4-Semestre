#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct tipoelemento
{
	int elemento;
}TElemento;

typedef struct tipoFila
{
	TElemento filaElemento[100];
	int tamanho_fila;
}TFila;

void inicializaFila(TFila *pFila)
{
	
	pFila->tamanho_fila = 0;
}	

void selecionarMedicina()
{
	printf("\n-=Biologia: Corpo Humano=-");
	printf("\nOssos do corpo humano: Mão ");
	printf("\n1° Rádio \n2° Cúbito \n3° Escáfoide \n4° Semilunar \n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.");
}

void selecionarMeioambiente()
{
	printf("\n-=Geografia: Biomas Brasileiros=-");
	printf("\nOs principais biomas Brasileiros são: ");
	printf("\n1° A Floresta Amazônica \n2° Cerrado \n3° Pantanal \n4° Caatinga \n.\n.\n.\n.\n.\n.\n.\n.\n.\n.");
}

void EscolhaCG()
{
	int op1;
	printf("\n1 - Medicina");
	printf("\n2 - Meio Ambiente");
	printf("\n\nEscolha sua opção: ");
	scanf("%d", &op1);
	switch(op1)
	{
		case 1: selecionarMedicina(); break;
		case 2: selecionarMeioambiente(); break;
	}

}
int main()
{
	setlocale(LC_ALL,"Portuguese");
	TFila fila;
 	inicializaFila(&fila);
 	int op;
 	do
 	{
 		printf("\nÁreas de conhecimento: ");
 		printf("\n1 - Conhecimentos Gerais");
 		printf("\n2 - Sair");
 		printf("\nEscolha sua opção: ");
 		scanf("%d",&op);
 		switch (op)
 		{
 			
 			case 1: EscolhaCG(); break;
		 }
	 }while(op != 2);

}

