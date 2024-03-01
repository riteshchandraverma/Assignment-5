#include <stdio.h>

int main() {
    int num, sum = 0;
    char choice;

    printf("Enter a series of integers:\n");

    
        printf("Enter an integer: ");
        scanf("%d", &num);
        while(1){
        if (num % 2 == 0) {
            sum += num;
        }

        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &choice);

        if (choice == 'N' || choice == 'n') {
            break;
        } else if (choice != 'Y' && choice != 'y') {
            printf("Invalid input. Exiting...\n");
            break;
        }
        }
    printf("Sum of even integers: %d\n", sum);

    return 0;
}