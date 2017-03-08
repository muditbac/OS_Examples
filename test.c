#include <stdio.h>

int main(){
	FILE *p = stdout;
	fprintf(p, "sdhf");
	printf("%p->%d", p, (p->_IO_write_end)-(p->_IO_write_ptr));
}
