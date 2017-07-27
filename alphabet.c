#include <stdio.h>
#include<conio.h>
void  main()
{
    char s;
    printf("Enter a character: ");
    scanf("%c",&s);
    if( (s>='a' && s<='z') || (s>='A' && s<='Z'))
    {
        printf("%c is an alphabet.",s);
    }
    else
    {
        printf("%c is not an alphabet.",s);
    }

    return 0;
}
