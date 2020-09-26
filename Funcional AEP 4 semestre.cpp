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
	printf("\nOssos do corpo humano: M�o ");
	printf("\n1� R�dio \n2� C�bito \n3� Esc�foide \n4� Semilunar \n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.");
}

void selecionarMeioambiente()
{
	printf("\n-=Geografia: Biomas Brasileiros=-");
	printf("\nOs principais biomas Brasileiros s�o: ");
	printf("\n1� A Floresta Amaz�nica \n2� Cerrado \n3� Pantanal \n4� Caatinga \n.\n.\n.\n.\n.\n.\n.\n.\n.\n.");
}

void EscolhaCG()
{
	int op1;
	printf("\n1 - Medicina");
	printf("\n2 - Meio Ambiente");
	printf("\n\nEscolha sua op��o: ");
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
 		printf("\n�reas de conhecimento: ");
 		printf("\n1 - Conhecimentos Gerais");
 		printf("\n2 - Sair");
 		printf("\nEscolha sua op��o: ");
 		scanf("%d",&op);
 		switch (op)
 		{
 			
 			case 1: EscolhaCG(); break;
		 }
	 }while(op != 2);

}

