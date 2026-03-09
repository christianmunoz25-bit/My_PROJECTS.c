#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    int choice;
    char simNumber[12]; // 11 digits + null terminator
    int networkChoice;
    int promoChoice;
    float amount;
    float TotalELoad = 0.0;
    float eWALLETBalance = 0.0;
    float totalBills = 0.0;

    printf("Welcome to the 7/11 E-Loading Machine!\n");

    while(1) {

        printf("\nPlease select an option:\n");
        printf("1. E-Load\n2. E-wallet\n3. Bills Payment\n4. Exit\n");
        printf("Please choose your selected services: ");

        if(scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter numbers only.\n");
            while(getchar() != '\n'); // clear input buffer
            continue;
        }

        switch(choice) {

            case 1:

                printf("\nPlease select your Network you want to load:\n");
                printf("1. SMART\n2. TNT\n3. SUN\n4. GLOBE\n5. TM\n6. DITO\n");
                printf("Enter your preferred Network: ");

                if(scanf("%d", &networkChoice) != 1 || networkChoice < 1 || networkChoice > 6) {
                    printf("Invalid Network selection!\n");
                    while(getchar() != '\n');
                    continue;
                }

                // Display promos based on network
                switch(networkChoice) {
                    case 1:
                        printf("\nSelected: SMART\n");
                        printf("1. SMART All Text 10\n2. SMART Call & Text 30\n3. SMART Data 50\n4. SMART Combo 100\n5. Regular Load\n");
                        break;
                    case 2:
                        printf("\nSelected: TNT\n");
                        printf("1. TNT Panalo 10\n2. TNT Saya 30\n3. TNT Data 50\n4. TNT Giga 99\n5. Regular Load\n");
                        break;
                    case 3:
                        printf("\nSelected: SUN\n");
                        printf("1. SUN Text 10\n2. SUN Combo 30\n3. SUN Data 50\n4. SUN Surf 100\n5. Regular Load\n");
                        break;
                    case 4:
                        printf("\nSelected: GLOBE\n");
                        printf("1. GoTXT 10\n2. GoCALL 30\n3. GoSURF 50\n4. GoSURF 99\n5. Regular Load\n");
                        break;
                    case 5:
                        printf("\nSelected: TM\n");
                        printf("1. TM AstigTXT 10\n2. TM AstigCALL 30\n3. TM Data 50\n4. TM Combo 90\n5. Regular Load\n");
                        break;
                    case 6:
                        printf("\nSelected: DITO\n");
                        printf("1. DITO LevelUp 10\n2. DITO LevelUp 30\n3. DITO LevelUp 50\n4. DITO LevelUp 99\n5. Regular Load\n");
                        break;
                }

                printf("Enter your Selected Promo: ");
                if(scanf("%d", &promoChoice) != 1 || promoChoice < 1 || promoChoice > 5) {
                    printf("Invalid Promo selection!\n");
                    while(getchar() != '\n');
                    continue;
                }

                printf("Enter your SIM number: ");
                scanf("%s", simNumber);

                // Validate SIM number
                if(strlen(simNumber) != 11) {
                    printf("Invalid SIM number! Must be exactly 11 digits.\n");
                    continue;
                }

                int validSIM = 1;
                for(int i = 0; i < 11; i++) {
                    if(!isdigit(simNumber[i])) {
                        validSIM = 0;
                        break;
                    }
                }
                if(!validSIM) {
                    printf("Invalid SIM number! Only digits are allowed.\n");
                    continue;
                }

                // Set amount based on promo
                if(promoChoice == 1) amount = 10;
                else if(promoChoice == 2) amount = 30;
                else if(promoChoice == 3) amount = 50;
                else if(promoChoice == 4) amount = 100;
                else if(promoChoice == 5) {
                    printf("Enter Regular Load Amount: ");
                    if(scanf("%f", &amount) != 1 || amount <= 0) {
                        printf("Invalid amount! Must be a positive number.\n");
                        while(getchar() != '\n');
                        continue;
                    }
                }

                TotalELoad += amount;

                printf("\n===== LOAD SUCCESSFULLY =====\n");
                printf("SIM Number: %s\n", simNumber);
                printf("Amount Loaded: P%.2f\n", amount);
                printf("=============================\n");

                break;

            case 2:
                printf("E-Wallet Feature - COMING SOON! STAY TUNE!", eWALLETBalance);
                break;

            case 3:
                printf("Bills Payment Feature - COMING SOON! STAY TUNE!\n", totalBills);
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
