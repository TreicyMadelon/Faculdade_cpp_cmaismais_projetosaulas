#include <stdio.h>

int main(){
	int idade;
	printf("Informe idade\n");
	scanf("%i",&idade);
	
	if (idade<=5)
	printf("Bebe\n");
	else
	if (idade >5 && idade<=10)
	printf("Crian�a\n");
	return 0;
	
}
