#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,n,s,i;
	int a;
	int b;
	int c=0; 
    scanf("%d,%d",&m,&n);
    if(m>0&&m<10000&&n>0&&n<10000){
    	if(m>n){
    		s=m;
    		m=n;
    		n=s;
    	}
		for(i=m;i<n+1;i++){
			b=0;
			for(a=1;a<i;a++){
//				printf("数%d除%d的余数是%d\n",i,a,i%a);
				if(i%a==0){
//					printf("数%d的因子有%d，\n",i,a);
					b=b+a;					
				}
			}
//			printf("数%d的因子和为%d\n",i,b);	
			if(i==b){
				c=c+1;
				if(c==1){
				printf("%d",i);	
				}
				else{
					printf(",%d",i);
				}
				
			}
		}
	}
	else{
		printf("error");
	}
	return 0;
}

