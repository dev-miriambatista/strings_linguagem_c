	#include <stdio.h>
	#include <string.h>
	#include <locale.h>
	
	int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char str[52];
	int maior_char = 1;

	
		printf("Digite uma string com caracteres repetidos(até 50 caracteres):   \n");
		fgets(str, 52, stdin);
		str[strcspn(str, "\n")] = '\0';
	
	int cont = 1;
	char atual = str[0];
	char melhor_char = str[0];
	
	
	for(int i=1; i < strlen(str) ; i++ ){
		if(atual == str[i]){
			cont++;
		}else{
			
			cont = 1;
			atual = str[i];
		}
		
		if(cont > maior_char){
			maior_char = cont;
			melhor_char = atual;
		}
	}
	
	printf(" s = (%c, %i)", melhor_char, maior_char);
	return 0;
	}

