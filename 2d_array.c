#include <stdio.h>
#include <stdlib.h>
#define N 10
#define M 5
int main(int argc, char const *argv[])
{
    int count = 0;
    int** A;
    A = (int**)malloc(N*sizeof(int*));в
    for (int i =0; i< N; ++i){
        A[i] = (int*)malloc(M*sizeof(int));
    }
    for (int i =0; i< N; ++i){
        for (int b =0; b<M;++b){
            A[i][b] = count;
            printf("%d ",count);
            count+=1;
        }
        printf("\n");
    }
    for (int i = 0; i<N ; i++)
        free(A[i]);
    free(A);
    return 0;
}


















