#include <stdio.h>

// Function prototypes
void convertLength();
void convertWeight();
void convertTemperature();
void convertVolume();

int main() {
    int choice;

    do {
        printf("\nUnit Converter Menu\n");
        printf("1. Convert Length\n");
        printf("2. Convert Weight\n");
        printf("3. Convert Temperature\n");
        printf("4. Convert Volume\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                convertLength();
                break;
            case 2:
                convertWeight();
                break;
            case 3:
                convertTemperature();
                break;
            case 4:
                convertVolume();
                break;
            case 5:
                printf("Exiting the unit converter. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    } while (choice != 5);

    return 0;
}

//Converting Length
void convertLength() {
    float value;
    int choice;

    printf("\nLength Converter\n");
    printf("1. Meters to Feet\n");
    printf("2. Feet to Meters\n");
    printf("3. Meters to Centimeters\n");
    printf("4. Centimeters to Meters\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter length in meters: ");
            scanf("%f", &value);
            printf("%.1f meters is equal to %.1f feet.\n", value, value * 3.28084);
            break;
        case 2:
            printf("Enter length in feet: ");
            scanf("%f", &value);
            printf("%.1f feet is equal to %.1f meters.\n", value, value / 3.28084);
            break;
        case 3:
            printf("Enter length in meters: ");
            scanf("%f", &value);
            printf("%.1f meters is equal to %.1f centimeters.\n", value, value * 100);
            break;
        case 4:
            printf("Enter length in centimeters: ");
            scanf("%f", &value);
            printf("%.1f centimeters is equal to %.1f meters.\n", value, value / 100);
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
    }
}

//Converting Weight
void convertWeight() {
    float value;
    int choice;

    printf("\nWeight Converter\n");
    printf("1. Kilograms to Grams\n");
    printf("2. Grams to Kilograms\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter weight in kilograms: ");
            scanf("%f", &value);
            printf("%.1f kilograms is equal to %.1f grams.\n", value, value * 1000);
            break;
        case 2:
            printf("Enter weight in grams: ");
            scanf("%f", &value);
            printf("%.1f grams is equal to %.1f kilograms.\n", value, value / 1000);
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
    }
}

//Converting Temperature
void convertTemperature() {
    float value;
    int choice;

    printf("\nTemperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Kelvin to Fahrenheit\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &value);
            printf("%.1f Celsius is equal to %.1f Fahrenheit.\n", value, (value * 9 / 5) + 32);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &value);
            printf("%.1f Fahrenheit is equal to %.1f Celsius.\n", value, (value - 32) * 5 / 9);
            break;
        case 3:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &value);
            printf("%.1f  Kelvin is equal to %.1f Fahrenheit.\n", value, (value - 273.15) * 9 / 5 + 32);
            break;
        case 4:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &value);
            printf("%.1f  Fahrenheit is equal to %.1f  Kelvin.\n", value, (value - 32) * 5 / 9 + 273.15);
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
    }
}

    //converting volume
    void convertVolume() {
    float value;
    int choice;

    printf("\nVolume Converter\n");
    printf("1. liter to milliliter\n");
    printf("2. milliliter to liter\n");
    printf("3. liter to cubic centimeter\n");
    printf("4. cubic centimeter to cubic meter\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);


    switch (choice) {
        case 1:
            printf("Enter Volume in liter : ");
            scanf("%f", &value);
            printf("%.1f liter is equal to %.1f milliliter.\n", value, value * 1000);
            break;
        case 2:
            printf("Enter Volume in milliliter: ");
            scanf("%f", &value);
            printf("%.1f milliliter is equal to %.1f liter.\n", value, value / 1000);
            break;
        case 3:
            printf("Enter Volume in liter: ");
            scanf("%f", &value);
            printf("%.1f  liter is equal to %.1f cubic centimeter.\n", value, value * 1000);
            break;
        case 4:
            printf("Enter Volume in cubic centimeter: ");
            scanf("%f", &value);
            printf("%.1f  cubic centimeter is equal to %.1f  cubic meter.\n", value, value / 1000000);
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
    }
}



