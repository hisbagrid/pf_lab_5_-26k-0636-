#include <stdio.h>

int main()
{
    int time, motion, light, room, cooking;

    printf("Enter time (0-23): ");
    scanf("%d", &time);

    printf("Enter motion detected (1 = Yes, 0 = No): ");
    scanf("%d", &motion);

    printf("Enter light level (0-100): ");
    scanf("%d", &light);

    printf("\n1. Living Room\n");
    printf("2. Bedroom\n");
    printf("3. Kitchen\n");
    printf("Select room: ");
    scanf("%d", &room);

    switch (room)
    {
        case 1:
            if (motion == 0)
            {
                printf("Away mode: all OFF");
            }
            else if (time >= 6 && time < 18)
            {
                printf("Day mode: lights ON");
            }
            else if (time >= 18 && time < 23)
            {
                printf("Evening mode: dim lights");
            }
            else
            {
                printf("Night mode: lights OFF");
            }
            break;

        case 2:
            if (motion == 0)
            {
                printf("Away mode: all OFF");
            }
            else if (time >= 6 && time < 18)
            {
                printf("Day mode: lights ON");
            }
            else if (time >= 18 && time < 23)
            {
                printf("Evening mode: dim lights");
            }
            else
            {
                printf("Night mode: lights OFF");
            }
            break;

        case 3:
            printf("Are you cooking? (1 = Yes, 0 = No): ");
            scanf("%d", &cooking);

            if (motion == 0)
            {
                printf("Away mode: all OFF");
            }
            else if (time >= 6 && time < 18)
            {
                printf("Day mode: lights ON");
            }
            else if (time >= 18 && time < 23)
            {
                printf("Evening mode: dim lights");
            }
            else
            {
                printf("Night mode: lights OFF");
            }

            if (cooking == 1)
            {
                printf("\nExhaust fan ON");
            }
            break;

        default:
            printf("Invalid room selection");
    }

    return 0;
}