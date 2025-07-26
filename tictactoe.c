#include <stdio.h>
#include <stdbool.h>

//prototyping
bool game_over;
char s[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
void makeBoard(void);
bool winChecker(void);

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        if (game_over == false)
        {
            int x;
            makeBoard();
            printf("Make a move: (must be number 1-9)\n");
            scanf("%d", &x);
            x--;
            if (s[x] == ' ')
            {
                if (i % 2)
                {
                    s[x] = 'x';
                }
                else
                {
                    s[x] = 'o';
                }
            }
            else
            {
                printf("There's already a thingy there! Try again.\n");
                i--;
            }
            game_over = winChecker();
        }
        else
        {
            makeBoard();
            if (i % 2)
            {
            printf("\nGAME OVER. Player o WINS.\n\n");
            }
            else
            {
                printf("\nGAME OVER. Player x WINS.\n\n");
            }
            break;
        }
        
    }
    if (game_over == false)
    {
        makeBoard();
        printf("\nSTALEMATE.\n\n");
    }
}

//prints ASCII tic tac toe board using empty s[] chars as placeholders
void makeBoard(void)
{
    printf("\n%c | %c | %c\n- + - + -\n%c | %c | %c\n- + - + -\n%c | %c | %c\n\n", s[0], s[1], s[2], s[3], s[4], s[5], s[6], s[7], s[8]);
}

//checks after every turn if every possible 3-in-a-row contains either entirely x's or o's
bool winChecker(void)
{
    bool game_over;
    if ((s[0] == s[1] && s[1] == s[2] && s[2] == 'x') || (s[0] == s[1] && s[1] == s[2] && s[2] == 'o'))
    {
        bool game_over = true;
        return game_over;
    }

    if ((s[3] == s[4] && s[4] == s[5] && s[5] == 'x') || (s[3] == s[4] && s[4] == s[5] && s[5] == 'o'))
    {
        bool game_over = true;
        return game_over;
    }

    if ((s[6] == s[7] && s[7] == s[8] && s[8] == 'x') || (s[6] == s[7] && s[7] == s[8] && s[8] == 'o'))
    {
        bool game_over = true;
        return game_over;
    }

    if ((s[0] == s[3] && s[3] == s[6] && s[6] == 'x') || (s[0] == s[3] && s[3] == s[6] && s[6] == 'o'))
    {
        bool game_over = true;
        return game_over;
    }

    if ((s[1] == s[4] && s[4] == s[7] && s[7] == 'x') || (s[1] == s[4] && s[4] == s[7] && s[7] == 'o'))
    {
        bool game_over = true;
        return game_over;
    }

    if ((s[2] == s[5] && s[5] == s[8] && s[8] == 'x') || (s[2] == s[5] && s[5] == s[8] && s[8] == 'o'))
    {
        bool game_over = true;
        return game_over;
    }

    if ((s[0] == s[4] && s[4] == s[8] && s[8] == 'x') || (s[0] == s[4] && s[4] == s[8] && s[8] == 'o'))
    {
        bool game_over = true;
        return game_over;
    }

    if ((s[2] == s[4] && s[4] == s[6] && s[6] == 'x') || (s[2] == s[4] && s[4] == s[6] && s[6] == 'o'))
    {
        bool game_over = true;
        return game_over;
    }
    return game_over;
}