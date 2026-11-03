#include <stdio.h>

#define MAX 100

struct song {
    char band[100];
    char name[100];
    float price;
    int year;
};

struct song songs[MAX];

int main()
{
    int choice;
    do
    {
        printf("\n=====Song Catalogue======\n");
        printf("1. Enter data\n");
        printf("2. Save data to file\n");
        printf("3. Read data from the file\n");
        printf("4. Print out the catalogue to screen\n");
        printf("5. Exit Program\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("You selected Enter data\n");
                break;
            case 2:
                printf("You selected Save data to file\n");
                break;
            case 3:
                printf("You selected read data from file\n");
                break;
            case 4:
                printf("You selected print out the catalogue to screen\n");
                break;
            case 5: 
                printf("You selected Exit Program\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 5);
    
    return 0;
}