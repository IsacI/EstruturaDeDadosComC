#include <stdio.h>
#include <stdlib.h>

int main(){
	int pesos [3][5]={{10,30,45,70,36},
	    {86,44,63,82,88},
	    {70,61,52,63,74}};
	    
	    
	    int linha, coluna;
	    for(linha=0; linha<3; linha++)
	    for(coluna=0; coluna<5; coluna++)
	    printf("elemento[%d][%d] = %d\n", linha, coluna, pesos [linha][coluna]);
	    
	    system("pause");
	    
	    return(0);
}
