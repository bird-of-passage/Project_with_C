#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int hour = 0, minute = 0, second = 0, flag = 0;
void delay(ms)
{
    clock_t timeDelay = ms + clock();
    while (timeDelay > clock())
        ;
}
int counter()
{
    while (!kbhit && flag == 0)
    {
        if (minute > 59)
        {
            minute = 0;
            ++hour;
        }
        if (second > 59)
        {
            second = 0;
            ++minute;
        }
        printData();
        delay(1000);
        ++second;
    }
    selection();
}
int selection()
{
    switch (getch())
    {
    case 49:
        flag == 0;
        break;
    case 50:
        flag = 1;
        break;
    case 51:
        hour = minute = second = 0;
        flag = 1;
        break;
    case 52:
        exit(0);
        break;
    }

    int printData()
    {
        system("cls");
        printf("1.Start  2.Stop  3.Rest  4.End\n");
        printf("******************************\n\n");
        printf("\t %d : %d : %d\n\n", hour, minute, second);
        printf("\n******************************\n");
    }
    int main()
    {
        counter();
        printData();

        return 0;
    }

    // #include <stdio.h>
    // #define CYCLE 5

    // // #ifdef _WIN32
    // // #define sleep(x) Sleep(x * 1000)
    // // #include <unistd.h>
    // // #else
    // #include <unistd.h>
    // #include <conio.h>
    // #include <stdlib.h>
    // // #endif

    // int main()
    // {
    //     int hour, minute, second;
    //     printf("Enter Hour Minute Second: ");
    //     scanf("%d %d %d", &hour, &minute, &second);
    //     system("cls");

    //     int h = 0, m = 0, s = 0;
    //     while (1)
    //     {
    //         printf("\n\n####### STOP WATCH #######\n\n\n");
    //         printf("%.2d : %.2d : %.2d\n", h, m, s);
    //         printf("\n\n##########################\n\n\n");
    //         if (h == hour && m == minute && s == second)
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             system("cls");
    //         }

    //         s++;
    //         sleep(1);
    //         if (s == CYCLE)
    //         {
    //             m++;
    //             s = 0;
    //         }
    //         if (m == CYCLE)
    //         {
    //             h++;
    //             m = 0;
    //         }
    //     }

    //     return 0;
    // }