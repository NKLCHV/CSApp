#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f;

    for(;;)
    {
        printf("������һ��������:");
        scanf("%f",&f);
        printf("�������������ֵ��:%f\n",f);
        if(f==0)
            break;
    }
    return 0;
}
