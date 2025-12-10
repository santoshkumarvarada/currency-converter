#include <stdio.h>

int main() {
    int choice;        // Variable to store the user's menu choice
    float amount;      // Variable to store the amount to be converted

    while (1) {        // Infinite loop to keep showing the menu until user exits
        // Display conversion menu
        printf("\n===== CURRENCY CONVERTER =====\n");
        printf("1. INR -> USD\n");
        printf("2. USD -> INR\n");
        printf("3. USD -> EUR\n");
        printf("4. EUR -> USD\n");
        printf("5. INR -> EUR\n");
        printf("6. EUR -> INR\n");
        printf("7. Exit\n");
        printf("Choose: ");

        scanf("%d", &choice);   // Read user's menu selection

        // If user selects Exit option (7), break the loop
        if (choice == 7) {
            printf("Exiting...\n");
            break;              // Exit the while loop
        }

        // Ask user for the currency amount to convert
        printf("Enter amount: ");
        scanf("%f", &amount);

        // Perform conversion based on user's choice
        if (choice == 1)
            printf("%.2f INR = %.2f USD\n", amount, amount * 0.012f);
        else if (choice == 2)
            printf("%.2f USD = %.2f INR\n", amount, amount * 83.0f);
        else if (choice == 3)
            printf("%.2f USD = %.2f EUR\n", amount, amount * 0.92f);
        else if (choice == 4)
            printf("%.2f EUR = %.2f USD\n", amount, amount * 1.08f);
        else if (choice == 5)
            printf("%.2f INR = %.2f EUR\n", amount, amount * 0.011f);
        else if (choice == 6)
            printf("%.2f EUR = %.2f INR\n", amount, amount * 90.0f);
        else
            printf("Invalid choice!\n"); // Handle incorrect menu input
    }

    return 0;  // End of program
}