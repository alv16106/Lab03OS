#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main(){
	clock_t t1, t2;
	int a;
	t1 = clock();
	for ( a=0; a<1000000; a++ ) {
	}
	for ( a=0; a<1000000; a++ ) {
	}
	for ( a=0; a<1000000; a++ ) {
	}
	t2 = clock();
	double ext = (double)(t2 - t1);
	printf("El tiempo de ejecucion fue de %f \n", ext);
	return 0;
}
