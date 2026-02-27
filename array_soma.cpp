		#include <stdio.h>
		#include <string.h>
		#include <locale.h>
		
		int main(){
		setlocale(LC_ALL, "Portuguese");
		
		int nums[] = {12,18,31,48};
		int target = 30;
		int tamanho = 4;
	
		
		for(int i = 0; i < tamanho; i++){
	    for(int j = i+1; j < tamanho; j++){
	    		int soma = nums[i] + nums[j];
	       if(target == soma){
	       	printf("(as posições usadas foram: %d, %d)", i, j);
		   }
	    }
	}
				
		return 0;
	}
