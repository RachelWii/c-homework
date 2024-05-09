#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,c,i;
	float b,d;
	d=0;
	scanf("%d,%f,%d",&a,&b,&c);
	for(i=1;i<=c;i++){
		d=(a+d)*(1+b/12);
	}
	printf("%.2f",d);
	return 0;
}

