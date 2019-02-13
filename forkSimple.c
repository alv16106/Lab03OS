#include <stdio.h>
#include <unistd.h>

int main(){
	fork();
	fork();
	fork();
	fork();
	printf("Esto es un programa \n");
	return 0;
}
