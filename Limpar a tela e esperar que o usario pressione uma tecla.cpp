#include <stdio.h>
#include <conio.h>   // necess�rio para as fun��es clrscr e getch
#define UNIVERSIDADE "Pontif�cia Universidade Cat�lica do Rio Grande do Sul"
	// deve-se colocar entre aspas

int main ()
{
   clrscr();     // Limpa a tela
   printf("%s", UNIVERSIDADE); // Imprime o nome representado pela constante
   getch();      // espera que o usu�rio pressione uma tecla
}
