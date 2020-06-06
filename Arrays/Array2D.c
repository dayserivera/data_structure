#include <stdio.h>

int main(){
    int *B[3];
    int **C;
    int i, j;

    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));

    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    C=(int **)malloc(3*sizeof(int *));
    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));
    C[2]=(int *)malloc(4*sizeof(int));

    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
