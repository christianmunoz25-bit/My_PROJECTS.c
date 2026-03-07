#include <stdio.h>

int main() {
    int choice;
    int networkChoice; // Use a separate variable for the sub-menu
    float amount;
    float TotalELoad = 0.0;
    float eWALLETBalance = 0.0;
    float totalBills = 0.0;

    printf("Welcome to the 7/11 E-Loading Machine!\n");
    
    while(1) {
        printf("\nPlease select an option:\n");
        printf("1. E-Load\n");
        printf("2. E-wallet\n");
        printf("3. Bills Payment\n");
        printf("4. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);
  
        switch(choice) {
            case 1:
                printf("\nPlease select your Network you want to load: \n");
                printf("1. SMART\n2. TNT\n3. SUN\n4. GLOBE\n5. TM\n6. DITO\n");
                printf("Enter your preferred Network: ");
                scanf("%d", &networkChoice);

                // Nested switch to handle specific network logic
                switch(networkChoice) {
                    case 1: printf("Selected: SMART\n"); break;
                    case 2: printf("Selected: TNT\n"); break;
                    case 3: printf("Selected: SUN\n"); break;
                    case 4: printf("Selected: GLOBE\n"); break;
                    case 5: printf("Selected: TM\n"); break;
                    case 6: printf("Selected: DITO\n"); break;
                    default: printf("Invalid Network selection!\n"); break;
                }
                
                // Add loading logic here (e.g., enter amount)
                if(networkChoice >= 1 && networkChoice <= 6) {
                    printf("Enter amount to load: ");
                    scanf("%f", &amount);
                    TotalELoad += amount;
                    printf("Successfully loaded P%.2f!\n", amount);
                }
                break; // Exits Case 1 and prevents "falling through" to default

            case 2:
                printf("E-Wallet Feature - Balance: P%.2f\n", eWALLETBalance);
                break;

            case 3:
                printf("Bills Payment Feature - Total Paid: P%.2f\n", totalBills);
                break;

            case 4:
                printf("Exiting... Thank you for using 7/11!\n");
                return 0; // Terminates the program
           
            default:
                printf("Invalid! The choice is not on the list! Please try again.\n");
                break;
        }
    }
    return 0;
}
