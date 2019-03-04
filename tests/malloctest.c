#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void){
int *p1 = malloc(1000*sizeof(int));
int n=0;
if(p1){
	
	for(n=0;n<1000;++n){
fork();	
	p1[n] = n*n;
		system("sleep 1");
	}
}
printf("DONE");




 return 0;
}
