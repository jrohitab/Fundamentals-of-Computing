#include <stdio.h>

int calculateCheckDigit(int number) {
    int sum = 0;
    
    // Calculate the sum of the digits
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    
    // Add a check digit to make the sum even
    int checkDigit = (sum % 2 == 0) ? 0 : 1;
    
    return checkDigit;
}

int main() {
    int originalNumber, newNumber;
    
    printf("Enter a four-digit number: ");
    scanf("%d", &originalNumber);
    
    int checkDigit = calculateCheckDigit(originalNumber);
    
    newNumber = originalNumber * 10 + checkDigit;
    
    printf("Original Number: %d\n", originalNumber);
    printf("New Number: %d\n", newNumber);
    
    return 0;
}
