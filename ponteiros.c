#include <stdlib.h>
#include <stdio.h>
#include <time.h>




int main(){
	
	
	float y = 10.0f;
	float *p = &y;
	y = 16.0f;
	float *g = *&p;
	printf("endereço de y : %p, endereço de p: %p\n", p,g);
	
	return 0;
} 
