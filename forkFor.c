#include <stdio.h>
#include <unistd.h>

int main(){
	int a;
	for ( a=0; a<4; a++ ) {
		fork();
	}
	printf("Esto es un programa \n");
	return 0;
}
