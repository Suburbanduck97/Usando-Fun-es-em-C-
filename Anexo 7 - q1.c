#include <stdio.h>
#include <locale.h>

void maiorOuMenor(int numero){
	if(numero > 10){
		printf("\nRESPOSTA: %d � MAIOR QUE 10", numero);
	}else if(numero == 10){
		printf("\nRESPOSTA: %d � IGUAL A 10", numero);
	}else{ printf("\nRESPOSTA: %d � MENOR QUE 10", numero);
	}
}

int main() {
	setlocale(LC_ALL, "");
	int numero = 0;
	
	printf("INSIRA UM VALOR QUALQUER: ");
	scanf("%d",&numero);
	system("cls || clear");
	
	puts("=== EXIBINDO DADOS ===");
	printf("\nN�MERO SELECIONADO: %d", numero);
	maiorOuMenor(numero);
	
	return 0;
}
