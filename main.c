#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
     int num1;
     int num2;
     int result;
     int opcao;
    
   
    printf("Digite um valor ");
    scanf("%d",&num1);
    printf("Digite outro valor ");
    scanf("%d",&num2);
    printf("O que voce deseja fazer?  1(som) 2(sub) 3(multi) e 4(div): ");
    scanf("%d", &opcao);
   
    
    
    switch(opcao) {
    	
   
    	
    	case 1:
    		
    		result = num1 + num2;
			printf("Resultado: %d \n", result);	
			
    	break;
    	
    	case 2:
    		
    		result = num1 - num2;
    		printf("Resultado: %d \n", result);	
    		
    	break;
    	
    	case 3:
    		
    		result = num1 * num2;
    		printf("Resultado: %d \n", result);	
    		
    	break;
    	
    	case 4:
    		
    		result = num1 / num2;
    		printf("Resultado: %d \n", result);	
    		
    	break;
  	
    }
    
    
   
    
	return 0;
	
}
