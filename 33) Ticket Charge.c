#include <stdio.h>

double calculateTicketCharge(int age) {
    double ticketCharge = 0.0;
    
    if (age >= 55) {
        ticketCharge = 10.0;
    } else if (age >= 21 && age <= 54) {
        ticketCharge = 15.0;
    } else if (age >= 13 && age <= 20) {
        ticketCharge = 10.0;
    } else if (age >= 3 && age <= 12) {
        ticketCharge = 5.0;
    } else {
        ticketCharge = 0.0;
    }
    
    return ticketCharge;
}

int main() {
    int age;
    
    printf("Enter the age of the person: ");
    scanf("%d", &age);
    
    double ticketCharge = calculateTicketCharge(age);
    
    printf("Ticket Charge: $%.2lf\n", ticketCharge);
    
    return 0;
}
