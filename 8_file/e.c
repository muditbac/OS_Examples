#include <stdio.h>
#include <fcntl.h>
int main(){
FILE *g,*h;
g=fopen("a", "w");
fprintf(g, "p");
h=freopen("b", "w", g);
fprintf(g, "q");
fprintf(h, "r");
}
