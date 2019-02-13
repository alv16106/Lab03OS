#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/wait.h>

int main(){
	clock_t t1, t2;
	pid_t p1, p2, p3;
	int a;
	t1 = clock();
	p1 = fork();
	if (p1 != 0) {
		wait(NULL);
		t2 = clock();
		double ext = (double)(t2 - t1);
		printf("El tiempo de ejecucion fue de %f \n", ext);
		return 0;
	} else {
		p2 = fork();
		if (p2 != 0) {
			for ( a=0; a<1000000; a++ ) {}
			wait(NULL);
		} else {
			p3 = fork();
			if (p3 != 0){
				for ( a=0; a<1000000; a++ ) {}
				wait(NULL);
			}else{
				for ( a=0; a<1000000; a++ ) {}	
			}	
		}
	}
}
