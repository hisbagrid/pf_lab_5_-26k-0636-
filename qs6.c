#include <stdio.h>

int main()
{
    int category, subtype, delayed;

    printf("Choose category:\n1. Greeting\n2. Query\n3. Complaint\n4. Feedback\n");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("Choose subtype:\n1. Morning\n2. Evening\n");
            scanf("%d", &subtype);

            switch (subtype)
            {
                case 1:
                    printf("Good morning! How can I help you?");
                    break;

                case 2:
                    printf("Good evening! How can I help you?");
                    break;

                default:
                    printf("Invalid selection");
            }
            break;

        case 2:
            printf("Choose subtype:\n1. Product\n2. Billing\n3. Technical\n");
            scanf("%d", &subtype);

            switch (subtype)
            {
                case 1:
                    printf("How can I help you with our product?");
                    break;

                case 2:
                    printf("How can I help you with your billing?");
                    break;

                case 3:
                    printf("Please describe your technical issue.");
                    break;

                default:
                    printf("Invalid selection");
            }
            break;

        case 3:
            printf("Choose subtype:\n1. Delivery\n2. Quality\n");
            scanf("%d", &subtype);

            switch (subtype)
            {
                case 1:
                    printf("Is your order delayed? (1 = Yes, 0 = No): ");
                    scanf("%d", &delayed);

                    if (delayed == 1)
                    {
                        printf("We apologize for the delay in your order.");
                    }
                    else
                    {
                        printf("We apologize for the inconvenience with your delivery.");
                    }
                    break;

                case 2:
                    printf("We apologize for the quality issue.");
                    break;

                default:
                    printf("Invalid selection");
            }
            break;

        case 4:
            printf("Choose subtype:\n1. Positive\n2. Negative\n");
            scanf("%d", &subtype);

            switch (subtype)
            {
                case 1:
                    printf("Thank you for your positive feedback!");
                    break;

                case 2:
                    printf("Thank you for your feedback. We will work to improve.");
                    break;

                default:
                    printf("Invalid selection");
            }
            break;

        default:
            printf("Invalid selection");
    }

    return 0;
}