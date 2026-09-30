#include <stdio.h>
#include <math.h>

int main() {

    float accuracy, confidence;
    int datasetSize, role, statusFlags;
    float modelScore;
    float average;

    // Input
    printf("Enter accuracy (0-100): ");
    scanf("%f", &accuracy);

    printf("Enter confidence (0-100): ");
    scanf("%f", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);

    printf("Enter user role (1=Intern, 2=Engineer, 3=Admin): ");
    scanf("%d", &role);

    printf("Enter status flags: ");
    scanf("%d", &statusFlags);

    // Calculate model score
    modelScore = (accuracy * 0.5)
               + (confidence * 0.3)
               + (fmin(datasetSize / 1000.0, 10) * 2);

    // Print model score
    printf("\nModel Score: %.2f\n", modelScore);

    // Check deployment conditions
    if (statusFlags & 8) {
        printf("Rejected: model deprecated\n");
    }
    else if (!(statusFlags & 1)) {
        printf("Rejected: not trained\n");
    }
    else if (!(statusFlags & 2)) {
        printf("Rejected: not validated\n");
    }
    else if (!(statusFlags & 4)) {
        printf("Pending: awaiting approval\n");
    }
    else if (accuracy < 70 || confidence < 60) {
        printf("Rejected: performance too low\n");
    }
    else if (datasetSize < 5000) {
        printf("Rejected: dataset too small\n");
    }
    else if (role == 1) {
        printf("Denied: interns cannot deploy\n");
    }
    else if (role == 2 && modelScore < 80) {
        printf("Denied: engineer needs higher score\n");
    }
    else {
        printf("Approved for deployment\n");
    }

    // Average of accuracy and confidence
    average = (accuracy + confidence) / 2;

    if (modelScore > average)
        printf("Model score is above the average.\n");
    else
        printf("Model score is not above the average.\n");

    // Size of variables
    printf("\nSize of variables:\n");
    printf("accuracy: %zu bytes\n", sizeof(accuracy));
    printf("confidence: %zu bytes\n", sizeof(confidence));
    printf("datasetSize: %zu bytes\n", sizeof(datasetSize));
    printf("role: %zu bytes\n", sizeof(role));
    printf("statusFlags: %zu bytes\n", sizeof(statusFlags));
    printf("modelScore: %zu bytes\n", sizeof(modelScore));
    printf("average: %zu bytes\n", sizeof(average));

    return 0;
}