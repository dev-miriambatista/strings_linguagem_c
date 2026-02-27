		#include <stdio.h>
		#include <string.h>
		#include <locale.h>
		
		int main(){
		setlocale(LC_ALL, "Portuguese");
		
		int tamanho = 6;
		
		char nomes[10][50] = {
	    "Maria Cristina Americo",
	    "Joao Afonso Carvalho",
	    "Ana Paula Farias",
	    "Miriam Batista Alves da Silva",
	    "Jose de OLiveira Lorenço",
	    "Marta da Rocha Vargas"
};

		for(int i= 0; i< tamanho; i++)
			for(int j= 0; j<tamanho -i-1; j++){
				char sobrenome1[50], sobrenome2[50];
				strcpy(sobrenome1, strrchr(nomes[j], ' ') + 1);
				strcpy(sobrenome2, strrchr(nomes[j+1], ' ') + 1);
			
				
			if(strcmp(sobrenome1, sobrenome2) > 0){
						char temp[50];
						strcpy(temp, nomes[j]);
						strcpy(nomes[j], nomes[j+1]);
						strcpy(nomes[j+1], temp); 
				}
			}
			
		for(int i = 0; i < tamanho; i++){
    	printf("%s\n", nomes[i]);
}
		
		return 0;
	}
