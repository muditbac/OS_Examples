#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define FORN(i, n) for(int i=1;i<=n;i++)
main(){
	char x[20];
	int a[50][200];
	int n;
	// ;
	printf("Enter number of processes: "); scanf("%d", &n);
	FORN(i, n) a[i][122]=i;

	do{
		scanf("%s", x);
		FORN(i, n){
			if (x[1]=='='&&x[3]=='+') a[i][x[0]]=a[i][x[2]]+a[i][x[4]];
			if (x[1]=='='&&x[2]<60) a[i][x[0]]=x[2]-48;
			if (x[1]=='r') {printf("%d \n", a[i][x[6]]); sleep(1);}	

		}
		if (x[3]=='o'){
			int m=n;
			FORN(k, m){
				n++;for(int j=0;j<199;j++) a[n][j]=a[k][j]; a[n][122]=n;
				a[k][x[0]]=n;
				a[n][x[0]]=0;
			}
		}
	} while(1);

}
