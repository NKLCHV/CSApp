#include <stdio.h>
#include <stdlib.h>

char a[30]="Hello 1170300821������";

void showbytes()
{
    size_t i;
    for(i=0;i<22;i++)
        printf("%.2x ",a[i]);
}

int main()
{
    showbytes();
    printf("\nHello 1170300821������\n");
    return 0;
}
