#include<stdio.h>

main()

{
    printf("\n ~Which is Greater One~");

    int A,B;

    printf("\n Enter 1st Number=> ");
    scanf("%d",&A);

    printf("\n Enter 2nd Number=> ");
    scanf(
          "%d",&B);

    if(A>B)
    {
        printf("\n 1st Digit is Greater");
    }
    else{
        printf("\n 2nd Digit is Greater");
    }
}
