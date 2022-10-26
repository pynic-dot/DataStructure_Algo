// #define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))
// int a[17];
// size_t n = NELEMS(a);

#include<stdio.h>

int main(){
  //  declaration of array
   int A[3];
    for(int i = 0; i<(sizeof(A)/sizeof(A[0]));i++){
      printf("Enter a number at place [%d] of array : ",i);
      scanf("%d",&A[i]);
    }
    printf("Entered numbers are:\n");
    for(int i = 0; i<(sizeof(A)/sizeof(A[0]));i++){
      printf("%d\n",A[i]);
    }
    return 0;
}