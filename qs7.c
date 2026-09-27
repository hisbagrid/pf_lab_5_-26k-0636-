#include <stdio.h>

int main()
{
    int stream, interest, medicine;

    printf("Choose stream:\n1. Science\n2. Commerce\n3. Arts\n");
    scanf("%d", &stream);

    switch (stream)
    {
        case 1:
            printf("Choose interest:\n1. Biology\n2. Physics\n3. Chemistry\n");
            scanf("%d", &interest);

            switch (interest)
            {
                case 1:
                    printf("Are you interested in medicine? (1 = Yes, 0 = No): ");
                    scanf("%d", &medicine);

                    if (medicine == 1)
                    {
                        printf("Recommended course: MBBS");
                    }
                    else if (medicine == 0)
                    {
                        printf("Recommended course: Biotechnology");
                    }
                    else
                    {
                        printf("Invalid choice");
                    }
                    break;

                case 2:
                    printf("Recommended course: Physics");
                    break;

                case 3:
                    printf("Recommended course: Chemistry");
                    break;

                default:
                    printf("Invalid choice");
            }
            break;

        case 2:
            printf("Choose interest:\n1. Accounting\n2. Marketing\n");
            scanf("%d", &interest);

            switch (interest)
            {
                case 1:
                    printf("Recommended course: Accounting");
                    break;

                case 2:
                    printf("Recommended course: Marketing");
                    break;

                default:
                    printf("Invalid choice");
            }
            break;

        case 3:
            printf("Choose interest:\n1. Literature\n2. History\n3. Psychology\n");
            scanf("%d", &interest);

            switch (interest)
            {
                case 1:
                    printf("Recommended course: Literature");
                    break;

                case 2:
                    printf("Recommended course: History");
                    break;

                case 3:
                    printf("Recommended course: Psychology");
                    break;

                default:
                    printf("Invalid choice");
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}