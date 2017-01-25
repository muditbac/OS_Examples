#include <stdio.h>
#include <unistd.h>
#include <string.h>

main(){
	char x[20];
	int a[200];
	int b[200];
	a[122]=1,b[122]=2;
	do{
		scanf("%s", x);
		if (skip>0) {skip--;continue;}
		if (x[1]=='='&&x[3]=='+') a[x[0]]=a[x[2]]+a[x[4]],b[x[0]]=b[x[2]]+b[x[4]];
		if (x[1]=='='&&x[2]<60) a[x[0]]=x[2]-48, b[x[0]]=x[2]-48;
		if (x[1]=='r') {printf("%d %d\n", a[x[6]], b[x[6]]); sleep(1);}
	} while(1);

}