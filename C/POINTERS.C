#include <stdio.h>

int main()
{
    int j = 46;
    int *p= NULL;
    p = &j;
    printf("The adress of j : %x\n",&j );
    printf("The adress of j in p : %x\n",p );
    printf("The adress of j  : %d\n",j );
    printf("The adress of *p %d\n",*p );
    return 0;
}