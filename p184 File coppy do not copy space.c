#include<stdio.h>
main()
{
    FILE *f1,*f2;
    char ch;

    f1=fopen("c:\\intel\\abc.txt","r");
    f2=fopen("c:\\intel\\pqr.txt","w");

    while(ch!=EOF)
    {
        ch=getc(f1);
        if(ch==' ')
        {
        }
        else
        {
            putc(ch,f2);
        }
    }
     fclose(f1);
     fclose(f2);
    printf("\n Have Not copy Space");
}
