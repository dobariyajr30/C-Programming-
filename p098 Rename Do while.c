#include<stdio.h>

main()
{
    printf("\n ~You'r First Number Will be Square & 2nd Number Will be Cube~");
    int a,op;

    do
    {
            printf("\nEnter 1 for square");
            printf("\nEnter 2 for cube");
            printf("\nEnter 3 for exit");
            printf("\nEnter ->");
            scanf("%d",&op);

            if(op==1)
            {
                printf("\n Enter Number=> ");
                scanf("%d",&a);

                printf("\n Square is=> %d",a*a);
            }
            else if(op==2)
            {
                printf("\n Enter Number=> ");
                scanf("%d",&a);

                printf("\n Cube is=> %d",a*a*a);
            }
            else if(op==3)
            {
                printf("\nBye");
            }
            else
            {
                printf("\nWrong opt");
            }

    }while(op!=3);



    printf("\n");

}
