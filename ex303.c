#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,i;
	a=1;
	for(i=0;i<9;i++){
		a=(a+1)*2;
	}
	printf("%d",a);
	return 0;
}

