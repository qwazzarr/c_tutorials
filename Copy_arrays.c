#include <stdio.h>
#define N 10
void print_array(int A[]){
    for (int i = 0; i<N ;++i)
        printf("%d " ,A[i]);
    printf("\n");
}
int main(int argc, char const *argv[])
{
    int A[N] = {10,20,20,30,40,
                50,50,60,120,123};
    int B[N] = {};
    for (int i = 0; i<N ;++i)
        B[N-i-1] = A[i];
    print_array(A);
    print_array(B);
     return 0;
     
}
