#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b;
	scanf("%f",&a);
	if(a<=500){
		b=a;
	}
	else if(a<=1000){
		b=0.9*a;
	}
	else{
		b=0.8*a;
	}
	printf("%.2f",b);
	return 0;
}

