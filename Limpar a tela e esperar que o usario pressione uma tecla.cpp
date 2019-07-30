#include <stdio.h>
#include <conio.h>   // necessário para as funções clrscr e getch
#define UNIVERSIDADE "Pontifícia Universidade Católica do Rio Grande do Sul"
	// deve-se colocar entre aspas

int main ()
{
   clrscr();     // Limpa a tela
   printf("%s", UNIVERSIDADE); // Imprime o nome representado pela constante
   getch();      // espera que o usuário pressione uma tecla
}
