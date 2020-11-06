#include <stdio.h>
int main(int argc, char const *argv[])
#define N 20
{
    int A[N] = {};
    for (int i = 0; i<N ; ++i)
        A[i] = N-i-1;
    for (int i = 0; i<N ; ++i)
        printf(" %d ",A[i]);
        
    return 0;
}
