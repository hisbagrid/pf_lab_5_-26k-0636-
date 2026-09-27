#include <stdio.h>

int main() {
    int vehType, hours, status;
    float fee;

    printf("select vehicle type:\n1.bike\n2.car\n3.truck\n");
    scanf("%d", &vehType);

    printf("Enter hours parked:");
    scanf("%d", &hours);

    printf("Enter membership status:\n1.member\n0.non-member\n");
    scanf("%d", &status);

    if (vehType != 1 && vehType != 2 && vehType != 3) {
        printf("Invalid vehicle type");
    }
    else if (hours <= 0) {
        printf("Invalid duration");
    }
    else {
        if (vehType == 1) {
            fee = 20 * hours;
        }
        else if (vehType == 2) {
            if (hours <= 2) {
                fee = 50;
            }
            else {
                fee = 50 + 30 * (hours - 2);
            }
        }
        else {
            if (hours <= 3) {
                fee = 100;
            }
            else {
                fee = 100 + 50 * (hours - 3);
            }
        }

        if (status == 1 && fee > 200) {
            fee = fee * 0.85;
            printf("final fee: %f", fee);
        }
        else {
            printf("final fee: %d", fee);
        }
    }

    return 0;
}
