#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	int i=100;
	for(i=100;i<1000;i++){
		a=i/100;
		b=i/10-10*a;
		c=i-100*a-10*b;
		if(i==a*a*a+b*b*b+c*c*c){
			printf("%d\n",i);
		}
	}
	return 0;
}



