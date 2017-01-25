#include <stdio.h>
#include <unistd.h>
#include <string.h>

main(){
	char x[20];
	int a[200];
	int skip=0;
	do{
		scanf("%s", x);
		if (skip>0) {skip--;continue;}
		if (x[1]=='='&&x[3]=='+') a[x[0]]=a[x[2]]+a[x[4]];
		if (x[1]=='='&&x[2]<60) a[x[0]]=x[2]-48;
		if (x[1]=='='&&x[2]>=65) a[x[0]]=a[x[2]];
		if (x[1]=='='&&x[2]=='['&&x[3]>=65) a[x[0]]=a['a'+a[x[3]]-1];
		if (x[1]=='='&&x[2]=='['&&x[3]<60) a[x[0]]=a['a'-1+x[3]-48];

		if (x[3]=='='&&x[0]=='['&&x[1]>=65) a['a'+a[x[1]]-1]=x[4]-48;
		if (x[3]=='='&&x[0]=='['&&x[1]<60) a['a'+x[1]-1-48]=x[4]-48;
		if (x[1]=='r') {printf("%d\n", a[x[6]]); sleep(1);}
		if (x[1]=='f'&&x[4]=='>') {
			if (!(a[x[3]]>a[x[5]])) skip=1;
		}
	} while(1);

}