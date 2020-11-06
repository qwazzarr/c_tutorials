#define N 20
int main(int argc, char const *argv[])
{
    int seive[N] = {0};

    for(int i = 2; i*i < N ; ++i)
        if (seive[i] == 0)
            for(int k = i*i; k< N ; k+=i)
                seive[k] = 1;
    for (int i =0; i<N ; ++i)
        printf(" %d - %d\n",i , seive[i]);
    return 0;
}
