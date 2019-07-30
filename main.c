#include <stdio.h>
#include "touch.c"

int main(int argc, char **argv) {
	FILE *ponteiroarquivo;
	
	if(argc < 2) {
		printf("touch: nome do arquivo faltando\n");
		printf("Sintaxe: ./main argumento1 argumento2...\n");
	}
	
	else {
		touch(argc, argv, ponteiroarquivo);
	}
	
	return 0;
}
