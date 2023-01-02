#include <stdio.h>
#include <windows.h>

int main(void)
{
    int h, m, s;
    int delay = 1000;

    printf("Set time: ");
    scanf("%d%d%d", &h, &m, &s);

    if (h > 12 || m > 60 || s > 60)
    {
        printf("ERROR !");
        exit(0);
    }
    
}