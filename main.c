#include <stdio.h>

char arr[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void play();
void print();
int checkWin();
int draw();

int main()
{
    play();
    return 0;
}

void play()
{
    int a, b, descion, flag;

    do
    {
        system("cls");
        printf("\n");

        flag = 0;
        descion = 0;
        do
        {
            print();

            printf("\n");
            printf("It is Player A (X) turn: ");
            scanf("%d", &a);

            if (b == a)
            {
                printf("you cannot enter value which as same as b\nEnter new value: ");
                scanf("%d", &a);
            }

            arr[a - 1] = 'X';

            if (draw())
            {
                flag = 2;
                break;
            }

            if (checkWin())
            {
                flag = 1;
                break;
            }

            printf("It is Player B (O) turn: ");
            scanf("%d", &b);

            if (b == a)
            {
                printf("you cannot enter value which as same as a\nEnter new value: ");
                scanf("%d", &b);
            }

            arr[b - 1] = 'O';

            if (draw())
            {
                flag = 2;
                break;
            }

            if (checkWin())
            {
                flag = -1;
                break;
            }

            printf("\n");

            if (flag == -1)
            {
                break;
            }

            system("cls");
        } while (flag != 1);

        system("cls");

        printf("\n");
        print();

        if (flag == 1)
            printf("\nPlayer A (X) Win\n\n");

        else if (flag == -1)
            printf("\nPlayer B (O) Win\n\n");

        else if (flag == 2)
            printf("\nGame is draw\n\n");

        printf("--------------------\n\n");
        printf("Enter 1 for play again\n");
        printf("Enter 0 for exit the game\n");
        scanf("%d", &descion);

        arr[0] = '1';
        arr[1] = '2';
        arr[2] = '3';
        arr[3] = '4';
        arr[4] = '5';
        arr[5] = '6';
        arr[6] = '7';
        arr[7] = '8';
        arr[8] = '9';

    } while (descion != 0);
}

void print()
{
    printf("  %c  |  %c  |  %c \n", arr[0], arr[1], arr[2]);
    printf("-----|-----|-----\n");
    printf("  %c  |  %c  |  %c \n", arr[3], arr[4], arr[5]);
    printf("-----|-----|-----\n");
    printf("  %c  |  %c  |  %c \n", arr[6], arr[7], arr[8]);
}

int checkWin()
{
    if (arr[0] == arr[1] && arr[1] == arr[2] || arr[3] == arr[4] && arr[4] == arr[5] || arr[6] == arr[7] && arr[7] == arr[8] || arr[0] == arr[3] && arr[3] == arr[6] || arr[1] == arr[4] && arr[4] == arr[7] || arr[2] == arr[5] && arr[5] == arr[8] || arr[0] == arr[4] && arr[4] == arr[8] || arr[2] == arr[4] && arr[4] == arr[6])
        return 1;

    return 0;
}

int draw()
{
    if (arr[0] == 'O' || arr[0] == 'X')
    {
        if (arr[1] == 'O' || arr[1] == 'X')
        {
            if (arr[2] == 'O' || arr[2] == 'X')
            {
                if (arr[3] == 'O' || arr[3] == 'X')
                {
                    if (arr[4] == 'O' || arr[4] == 'X')
                    {
                        if (arr[5] == 'O' || arr[5] == 'X')
                        {
                            if (arr[6] == 'O' || arr[6] == 'X')
                            {
                                if (arr[7] == 'O' || arr[7] == 'X')
                                {
                                    if (arr[8] == 'O' || arr[8] == 'X')
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
