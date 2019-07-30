#include <stdio.h> //padrão
#include <string.h> //necesario para string texto
#include <conio.h>   // necessário para as funções clrscr e getch

int main(){
	int inteira = 10;
	float decimal = 10.5;
	char caractere = 'a';
	char Nome[30];
	strcpy(Nome, "Jose da Silva"); 

	
	printf("Valor inteiro %i\n", inteira);
	printf("Decimal %.2f\n",decimal);
	printf("Char %c\n",caractere);
	printf("Nome %s\n",Nome);
	
	return 0;
}
