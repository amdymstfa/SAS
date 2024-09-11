#include <stdio.h>

int main() {
    int user_age, medical_history, coverage_type;

    printf("Enter your age: ");
    scanf("%d", &user_age);

    printf("Enter your medical history (0 for no problem, 1 for minor problem, 2 for major problem): ");
    scanf("%d", &medical_history);

    printf("Enter the coverage type (1 for basic, 2 for extended): ");
    scanf("%d", &coverage_type);

    if (user_age < 30) {
        printf("Recommended plan: Basic Plan\n");
    } else if (user_age >= 30 && medical_history == 0) {
        printf("Recommended plan: Basic Plan\n");
    } else if (user_age >= 30 && medical_history >= 1) {
        printf("Recommended plan: Extended Plan\n");
    }

    if (medical_history == 2) {
        printf("Additional coverage for major problems included.\n");
    }

    return 0;
}
