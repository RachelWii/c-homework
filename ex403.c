#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double sum(int n){
	double a[n],t,x,y,z;
	t=0.0;
	int i;
	x=1.0;
	y=2.0;
	for(i=0;i<n;i++){
		a[i]=y/x;
		z=y;
		y=x+y;
		x=z;
	} 
	for(i=0;i<n;i++){
		t=t+a[i];
	}
	return(t);
}
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	double sum(int n);
	printf("%.2f",sum(n));
}



