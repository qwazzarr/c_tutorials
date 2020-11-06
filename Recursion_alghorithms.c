#include <stdio.h>
#include <iso646.h>


int fibonacci(int n);
int main(int argc, char const *argv[])
{
    int x;
    printf("Power of fib:");
    scanf("%d",&x);
    int answer = fibonacci(x);
    printf("\n%d",answer);
    /* code */
    return 0;
}
int fibonacci(int n)
{
    int pp = 1;
    int ss = 1;
    int new_p;
    for (int i = 3;i<n+1;i++ ){
        int new_p = ss+pp;
        pp = ss;
        ss = new_p;
    }
    return ss;
}
