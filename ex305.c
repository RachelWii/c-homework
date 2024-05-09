#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,e,i,k,j,l;
	l=0;
	scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&i,&k,&j);
	if(a%2==0){
		l=l+a;
	}
	if(b%2==0){
		l=l+b;
	}
	if(c%2==0){
	    l=l+c;
	}
	if(d%2==0){
		l=l+d;
	}
    if(e%2==0){
		l=l+e;
	}
	if(i%2==0){
		l=l+i;
	}
	if(k%2==0){
		l=l+k;
	}
	if(j%2==0){
		l=l+j;
	}
	printf("%d",l);
	return 0;
}

