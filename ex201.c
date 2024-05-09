#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	scanf("%d",&a);
	if(a<0||a%2==0){
		printf("%d",a*a);
		}
		else{
			printf("%d",a/2);
		}
		
	return 0;
}

