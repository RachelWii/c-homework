#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;//a is use
	float b;//b is money
	scanf("%d",&a);
	if(a<=200){
		b=0.8*a;
	}
	else if(a<=300){
		b=160+(a-200)*0.9;
	}
	else {
		b=250+(a-300);
	}
	if(b<=100){
		b=100;
	}
	else if(b>400){
		b=b+b*0.15;
	}
	printf("%.2f",b);
	return 0;
}

