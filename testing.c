#include <stdio.h>
int main(int argc, char const *argv[])
{
    int two = 2;
    int two_two;
    if (two == 2)
        printf("2 tak2 ");
    two_two = two;
    two = 3;
    printf("\n%d",two_two);

    return 0;
}
