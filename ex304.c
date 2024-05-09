#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,i,k,j;
	i=0;
	scanf("%d",&a);
	if(a>=3&&a<=10){
		for(k=0;k<16;k+=3){
			j=(a+k)*(a+k)*(a+k)*(a+k);
			i=i+j;
		}
		printf("%d",i);
	}
	else{
		printf("error");
	}
	return 0;
}

