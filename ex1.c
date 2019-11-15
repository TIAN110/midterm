#include <stdio.h>
int main()
{
    int n1=0;
    int n2=0;

    char c;

    while ((c =getchar())!=EOF)
    {
        if (c == 'a'||c == 'A')
        n1++;
        if (c == '0')
        n2++;
    }
    printf("The number of a is :%d and the number of 0 is:%d\n",n1,n2);
}