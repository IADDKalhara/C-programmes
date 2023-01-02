#include <stdio.h>
#include <windows.h>

int main(void)
{
    int h, m, s;
    int delay = 1000;

    printf("Set start time: \n");
    scanf("%d%d%d", &h, &m, &s);

    if (h > 12 || m > 60 || s > 60)
    {
        printf("ERROR !");
        exit(0);
    }

    // Create infinite loop
    while (TRUE)
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {
            h = 1;
        }

        printf("Clock:\n");
        printf("%02d:%02d:%02d", h, m, s);

        // Slowdown the while loop
        Sleep(delay);

        // Clear screen
        system("cls");
    }

}