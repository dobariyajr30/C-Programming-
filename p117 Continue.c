#include<stdio.h>
main()
{
    int i,n;

    for(i=1; i<=10; i++)
    {
        if(i==5 || i==7)
        {
            continue;
        }
        printf("\n %d",i);
     }

}
