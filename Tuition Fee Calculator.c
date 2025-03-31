#include <stdio.h>

int main() {
    float semesterRegistrationFee, perCreditFee, totalCredit, waiverPercentage;
    float totalTuitionFee, firstInstallment, secondInstallment, thirdInstallment;

    printf("Enter Semester Registration Fee: ");
    scanf("%f", &semesterRegistrationFee);

    printf("Enter Per Credit Fee: ");
    scanf("%f", &perCreditFee);

    printf("Enter Total Credits Taken: ");
    scanf("%f", &totalCredit);

    printf("Enter Waiver Percentage: ");
    scanf("%f", &waiverPercentage);

    totalTuitionFee = (perCreditFee * totalCredit) - ((waiverPercentage / 100) * (perCreditFee * totalCredit)) + semesterRegistrationFee;

    firstInstallment = totalTuitionFee * 0.40;
    secondInstallment = totalTuitionFee * 0.30;
    thirdInstallment = totalTuitionFee * 0.30;

    printf("\nTotal Tuition Fee: %.2f\n", totalTuitionFee);
    printf("First Installment (40%%): %.2f\n", firstInstallment);
    printf("Second Installment (30%%): %.2f\n", secondInstallment);
    printf("Third Installment (30%%): %.2f\n", thirdInstallment);

    return 0;
}
