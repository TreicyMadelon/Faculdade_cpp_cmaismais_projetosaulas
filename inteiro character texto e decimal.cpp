#include <stdio.h> //padr�o
#include <string.h> //necesario para string texto
#include <conio.h>   // necess�rio para as fun��es clrscr e getch

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
