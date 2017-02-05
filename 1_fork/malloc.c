#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){

    int *p = NULL;
    p= (int *)malloc(400000*sizeof(int));

    printf("Mallocked..\n");
    sleep(5);
    for (int i=0;i<400000;i++){
        p[i] = 0;
    }
    printf("Assigned..\n");
    sleep(5);
    
    int q=fork();

    if (q){
            p[0] = 345;
    }
    else {
        sleep(1);
        printf("%d\n", p[0]);
    }

    printf("%X\n", p);

    sleep(10);
    free(p);


}
