 #include <stdio.h>
 #define N 10
 #include <iso646.h>
 #define ALLOCATE_SIZE 1000
 #include <stdbool.h>
 int input_array(int A[], int max_size)
 {
     int top =0;

     while (true)
     {
         int x;
         scanf("%d",&x);
         if (x == 0 or top == max_size) break;
         A[top] = x;
         top++;
     }
    return top;
 }
void insert_sort(int A[],int data)
{
    int temp;
    int tempi;

    for (int i = 1;i<data;++i){
        temp = A[i];
        tempi = i;
        while (tempi>0 and temp<A[tempi-1]){
            A[tempi] =  A[tempi-1];
            A[tempi-1] = temp;
            tempi-=1;
        }
    }
}
 int main(int argc, char const *argv[]) 
 {
    printf("Enter numbers:");
    int A[ALLOCATE_SIZE];
    int data;

    data = input_array(A,ALLOCATE_SIZE);
    insert_sort(A,data);
    for (int i = 0;i<data;i++){
        printf(" %d",A[i]);
    }
     return 0;
 }
 