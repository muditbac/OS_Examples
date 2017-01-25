#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define FORN(i, n) for(int i=1;i<=n;i++)
main(){
	char x[20], f[10];
	char y[50][20];

	int a[200];
	int i=0;
	FILE *fp;
	a[119]=0;
	int n;
	printf("Give filename: "); scanf("%s", f); fp = fopen(f, "r");
	int skip=0;
	do {fscanf(fp, "%s", y[i]); i++;} while(strcmp(y[i-1], "end")!=0);

	do {
		strcpy(x, y[a[119]]); a[119]++;
		// printf("%d\n", a[119]);
		if (skip>0) {skip--;continue;}
		if (x[1]=='='&&x[3]=='+') a[x[0]]=a[x[2]]+a[x[4]];
		if (x[1]=='='&&x[2]<60) a[x[0]]=x[2]-48;
		if (x[1]=='='&&x[2]>=65) a[x[0]]=a[x[2]];

		if (x[1]=='r') {printf("%d\n", a[x[6]]); sleep(1);}
		if (x[1]=='f'&&x[4]=='<') {
			if (!(a[x[3]]<a[x[5]])) skip=1;
		}
	} while(1);
}
