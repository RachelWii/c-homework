#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float p(int n,int x)
{
  if(n<0){
  	return(-1);
  }
  if(n==0)
  { 
    return(1);
  }
  else if(n==1)
  {
    return(x);
  }
  else
  {
    return((2*n-1)*x-p((n-1),x)-(n-1)*p((n-2),x))/n;
  }
}
int main(int argc, char *argv[]) {


  int temp,num; 
  float num_P; 
  float p(int n,int x);
  scanf("%d,%d",&num,&temp);
  num_P=p(num,temp); 
  if(num_P==-1){
  	printf("error");
  }
  else
  printf("%.2f",num_P); 
  return 0; 



}


