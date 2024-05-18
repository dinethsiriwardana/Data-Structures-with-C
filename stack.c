#include <stdio.h>
#include <stdlib.h>

#define Max 5

struct stack
{
    int arr[Max];
    int top;
} st;

void Display();
void Push();
void Pop();

int main()
{
    st.top = -1;
    int choice;
    do
    {
        printf("\n\n\t 1. push an element into stack :- ");
        printf("\n\n\t 2. pop an element from stack :- ");
        printf("\n\n\t 3. display the elements of the stack :- ");
        printf("\n\n\t 4. Exit from the program");
        printf("\n\n\t enter your choice:- ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nTry Again\n");
            break;
        }
    } while (choice != 4);

    return 1;
}

void Display()
{
    for (int i = 0; i <= st.top; i++)
    {
        printf("%d\t", st.arr[i]);
    }
}
void Pop()
{
    int item = st.arr[st.top];
    st.top--;
}

void Push()
{
    int pushno;
    if (st.top == Max - 1)
    {
        printf("\n\nIt's Full");
    }
    else
    {
        printf("\n\nEnter the Value:- ");
        scanf("%d", &pushno);
        st.top++;
        st.arr[st.top] = pushno;
    }
}
