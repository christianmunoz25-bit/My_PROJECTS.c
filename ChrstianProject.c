#include <stdio.h>

int main() {
    int choice;
    char simNumber [11];
    int networkChoice;
    int promoChoice;
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
        printf("Please choose your selected services: ");
        scanf("%d", &choice);
  
        switch(choice) {
            case 1:
             
                printf("\nPlease select your Network you want to load: \n");
                printf("1. SMART\n2. TNT\n3. SUN\n4. GLOBE\n5. TM\n6. DITO\n");
                printf("Enter your preferred Network: ");
                scanf("%d", &networkChoice);

           
                switch(networkChoice) {
                     case 1:
                    printf("\nSelected: SMART\n");
                    printf("Available Promos:\n");
                    printf("1. SMART All Text 10 - Unli Text (1 day)\n");
                    printf("2. SMART Call & Text 30 - Unli Text + Calls\n");
                    printf("3. SMART Data 50 - 1GB Data\n");
                    printf("4. SMART Combo 100 - 2GB Data + Unli Text\n");
                    printf("5. Regular Load\n");
                    break;

                case 2:
                    printf("\nSelected: TNT\n");
                    printf("Available Promos:\n");
                    printf("1. TNT Panalo 10 - Unli Text\n");
                    printf("2. TNT Saya 30 - Text + Calls\n");
                    printf("3. TNT Data 50 - 1GB Data\n");
                    printf("4. TNT Giga 99 - 2GB Data\n");
                    printf("5. Regular Load\n");
                    break;

                case 3:
                    printf("\nSelected: SUN\n");
                    printf("Available Promos:\n");
                    printf("1. SUN Text 10 - Unli Text\n");
                    printf("2. SUN Combo 30 - Calls + Text\n");
                    printf("3. SUN Data 50 - 1GB Data\n");
                    printf("4. SUN Surf 100 - 2GB Data\n");
                    printf("5. Regular Load\n");
                    break;

                case 4:
                    printf("\nSelected: GLOBE\n");
                    printf("Available Promos:\n");
                    printf("1. GoTXT 10 - Unli Text\n");
                    printf("2. GoCALL 30 - Text + Calls\n");
                    printf("3. GoSURF 50 - 1GB Data\n");
                    printf("4. GoSURF 99 - 2GB Data\n");
                    printf("5. Regular Load\n");
                    break;

                case 5:
                    printf("\nSelected: TM\n");
                    printf("Available Promos:\n");
                    printf("1. TM AstigTXT 10 - Unli Text\n");
                    printf("2. TM AstigCALL 30 - Calls + Text\n");
                    printf("3. TM Data 50 - 1GB Data\n");
                    printf("4. TM Combo 90 - 2GB Data\n");
                    printf("5. Regular Load\n");
                    break;

                case 6:
                    printf("\nSelected: DITO\n");
                    printf("Available Promos:\n");
                    printf("1. DITO LevelUp 10 - 500MB Data\n");
                    printf("2. DITO LevelUp 30 - 1GB Data + Text\n");
                    printf("3. DITO LevelUp 50 - 2GB Data\n");
                    printf("4. DITO LevelUp 99 - 4GB Data\n");
                    printf("5. Regular Load\n");
                    break;

                default:
                    printf("Invalid Network selection!\n");
                    continue;
            }
            
            printf("Enter your Selected Promo: ");
            scanf("%d", &promoChoice);
                
             printf("\nEnter your SIM number: ");
            scanf("%s", &simNumber);
            
               /* if(networkChoice >= 1 && networkChoice <= 6) {
                    printf("Enter amount to load: ");
                    scanf("%f", &amount);
                    TotalELoad += amount;
                  printf("\n===== LOAD SUCCESSFULLY =====\n");
                  printf("SIM Number: %s\n", simNumber);
                  printf("Amount Loaded: P%.2f\n", amount);
                  printf("===========================\n");
                }
                */
                 if(promoChoice == 1) amount = 10;
            else if(promoChoice == 2) amount = 30;
            else if(promoChoice == 3) amount = 50;
            else if(promoChoice == 4) amount = 100;
            else if(promoChoice == 5) {
                printf("Enter Regular Load Amount: ");
                scanf("%f", &amount);
            }
            else {
                printf("Invalid Promo!\n");

                break;
            }  
            
                  TotalELoad += amount;

            printf("\n===== LOAD SUCCESSFULLY =====\n");
            printf("SIM Number: %s\n", simNumber);
            printf("Amount Loaded: P%.2f\n", amount);
            printf("=============================\n");
                 break;

          case 2:
            printf("E-Wallet Feature - Balance: P%.2f\n", eWALLETBalance);
            break;

        case 3:
            printf("Bills Payment Feature - Total Paid: P%.2f\n", totalBills);
            break;

        case 4:
            printf("THANK YOU! PLEASE COME AGAIN!\n");
            return 0;

        default:
            printf("Invalid! The choice is not on the list! Please try again.\n");
        }
    }

    return 0;
}
