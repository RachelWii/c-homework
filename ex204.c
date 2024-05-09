#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,e,f;
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	if(a<b){
		e=a;
	}
	else{
		e=b;
	}
	if(c>d){
		f=c;
	}
	else{
		f=d;
	}
	printf("%d",e+f);
	return 0;
}

