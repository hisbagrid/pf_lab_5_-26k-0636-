#include <stdio.h>

int main()
{
    int age, oxygen, heartRate;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter oxygen level (SpO2 %%): ");
    scanf("%d", &oxygen);

    printf("Enter heart rate (bpm): ");
    scanf("%d", &heartRate);

    if (oxygen < 90)
    {
        printf("Critical: immediate attention");
    }
    else if (heartRate > 130 || heartRate < 40)
    {
        printf("Critical: cardiac alert");
    }
    else if (age >= 65 && oxygen < 95)
    {
        printf("High priority");
    }
    else if (age <= 5 && heartRate > 110)
    {
        printf("High priority");
    }
    else if (oxygen < 97)
    {
        printf("Medium priority");
    }
    else
    {
        printf("Low priority");
    }

    return 0;
}