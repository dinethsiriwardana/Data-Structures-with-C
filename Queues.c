#include <stdio.h>
#include <stdlib.h>

#define n 5

int arr[n], front = 0, back = 0, choice;
void Enqueue();
void Dequeue();
void Display();

int main()
{

    do
    {
        printf("\n\n\t 1. Enqueue :- ");
        printf("\n\n\t 2. Dequeue :- ");
        printf("\n\n\t 3. Display :- ");
        printf("\n\n\t 4. Exit from the program");
        printf("\n\n\t enter your choice:- ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n\tError\n");
            break;
        }
    } while (choice != 4);

    return 1;
}
void Enqueue()
{
}
void Dequeue()
{
}
void Display()
{
}