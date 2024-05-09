#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a=0,b=0,c=0,d=0,e=0;
	scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
    if(a>='a'&&a<'w'){
	a=a+4;
	}
	else if(a>='w'){
	a='a'+ (a-'w');
	}
	if(b>='a'&&b<'w'){
	b=b+4;
	}
	else if(b>='w'){
	b='a'+(b-'w');
	}
	if(c>='a'&&c<'w'){
	c=c+4;
	}
	else if(c>='w'){
	c='a'+ (c-'w');
	}
	if(d>='a'&&d<'w'){
	d=d+4;
	}
	else if(d>='w'){
	d='a'+ (d-'w');
	}
	if(e>='a'&&e<'w'){
	e=e+4;
	}
	else if(e>='w'){
	e='a'+ (e-'w');
	}
	printf("%c%c%c%c%c",a,b,c,d,e); 
}



