// --> Write a program to Create ticket booking system :--

#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
    int booked; // 1 = Booked, 0 = Cancelled
};

int main()
{
    struct Ticket t;
    int choice;

    t.booked = 0;

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter Ticket Number: ");
            scanf("%d", &t.ticketNo);

            printf("Enter Passenger Name: ");
            scanf(" %[^\n]", t.name);

            printf("Enter Number of Seats: ");
            scanf("%d", &t.seats);

            t.booked = 1;
            printf("Ticket Booked Successfully!\n");
            break;

        case 2:
            if (t.booked)
            {
                printf("\n--- Ticket Details ---\n");
                printf("Ticket Number : %d\n", t.ticketNo);
                printf("Passenger Name: %s\n", t.name);
                printf("Seats         : %d\n", t.seats);
                printf("Status        : Booked\n");
            }
            else
            {
                printf("No Ticket Booked!\n");
            }
            break;

        case 3:
            if (t.booked)
            {
                t.booked = 0;
                printf("Ticket Cancelled Successfully!\n");
            }
            else
            {
                printf("No Ticket to Cancel!\n");
            }
            break;

        case 4:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}