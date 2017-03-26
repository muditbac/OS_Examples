#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* g;
	g = fopen("a", "w");
	g = fopen("b", "w");
	write(3, "p", 1);
}