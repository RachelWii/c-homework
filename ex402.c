#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,n,s,i,j;
	int p,q;
	int c;
	int d;
	scanf("%d,%d",&m,&n);
	if(m>n){
		s=m;
		m=n;
		n=s;
	}
	for(j=m;j<n-1;j++){
		c=0;d=0;
		for(i=2;i<j;i++){
			if(j%i==0){
				c=c+1;
			}
		}
//		printf("%d的因子个数为%d\n",j,c);
		if(c==0){
			p=j;
			q=j+2;
			for(i=2;i<q;i++){
			    if(q%i==0){
				    d=d+1;
			    }
		    }
		    if(d==0){
			    printf("%d,%d\n",p,q);
	     	}	
		}
//			printf("j=%d\n",j);
	}
	return 0;
}


