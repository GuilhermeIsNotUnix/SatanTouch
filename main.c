#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *ponteiro_arquivo;
	
	if(argc < 2) 
	{
		printf("Argumento faltando\n");
		printf("Sintaxe: ./main argumento1 argumento2...\n");
	}
	
	else
	{
		for(int i = 0; i < argc; ++i)
		{
			ponteiro_arquivo = fopen(argv[i], "w");
		}
		
		fclose(ponteiro_arquivo);
	}
    
    return 0;
}

