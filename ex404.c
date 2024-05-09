#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int a;
    scanf("%d",&a);
    if(a%4==0||a%100==0){
    	printf("%d is a leap year",a);
	}
	else{
		printf("%d is not a leap year",a);
	}
	return 0;
}

