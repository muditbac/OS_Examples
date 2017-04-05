#include <stdio.h>

int main(){

	int m=4096;
	int n=2;
	int k=1;

	FILE* a = fopen("a", "w");
	int i;
	for (i=1;i<=m;i++){
		fprintf(a, "A");
	}

	close(3);
	// fclose(a);

	for (i=1;i<=n;i++){
		fprintf(a, "B");
	}

	fopen("b", "w");

	for (i=1;i<=k;i++){
		fprintf(a, "C");
	}

}
