#include <stdio.h>
#include <stdbool.h>

void drawBoard(void);
bool winChecker(void);
char a[6] = {' ', ' ', ' ', ' ', ' ', ' '};
char b[6] = {' ', ' ', ' ', ' ', ' ', ' '};
char c[6] = {' ', ' ', ' ', ' ', ' ', ' '};
char d[6] = {' ', ' ', ' ', ' ', ' ', ' '};
char e[6] = {' ', ' ', ' ', ' ', ' ', ' '};
char f[6] = {' ', ' ', ' ', ' ', ' ', ' '};
char g[6] = {' ', ' ', ' ', ' ', ' ', ' '};

int main(void)
{
    bool gameOver;
    int aCounter = -1;
    int bCounter = -1;
    int cCounter = -1;
    int dCounter = -1;
    int eCounter = -1;
    int fCounter = -1;
    int gCounter = -1;

    for (int i = 0; i < 42; i++)
    {
        if (gameOver == false)
        {
            char column;

            drawBoard();
            printf("\ninsert column (eg. a, b, etc.): \n");
            scanf(" %c", &column);

            if ((int) column < 97 || (int) column > 103)
            {
                printf("that ain't right bruh try again\n");
                i--;
            }
            else
            {
                switch (column)
                {
                    case 'a':

                        aCounter++;

                        if (i % 2)
                        {
                            a[aCounter] = 'O';
                        }
                        else
                        {
                            a[aCounter] = 'X';
                        }
                        break;
                    case 'b':

                        bCounter++;

                        if (i % 2)
                        {
                            b[bCounter] = 'O';
                        }
                        else
                        {
                            b[bCounter] = 'X';
                        }
                        break;
                    case 'c':

                        cCounter++;

                        if (i % 2)
                        {
                            c[cCounter] = 'O';
                        }
                        else
                        {
                            c[cCounter] = 'X';
                        }
                        break;
                    case 'd':

                        dCounter++;

                        if (i % 2)
                        {
                            d[dCounter] = 'O';
                        }
                        else
                        {
                            d[dCounter] = 'X';
                        }
                        break;
                    case 'e':

                        eCounter++;

                        if (i % 2)
                        {
                            e[eCounter] = 'O';
                        }
                        else
                        {
                            e[eCounter] = 'X';
                        }
                        break;
                    case 'f':

                        fCounter++;

                        if (i % 2)
                        {
                            f[fCounter] = 'O';
                        }
                        else
                        {
                            f[fCounter] = 'X';
                        }
                        break;
                    case 'g':

                        gCounter++;

                        if (i % 2)
                        {
                            g[gCounter] = 'O';
                        }
                        else
                        {
                            g[gCounter] = 'X';
                        }
                        break;
                    default:
                        printf("shit broke :(\n");
                        break;
                }
                gameOver = winChecker();
            }
        }
        else
        {
            drawBoard();

            if (i % 2)
            {
                printf("\nGAME OVER: player X wins.\n");
                break;
            }
            else
            {
                printf("\nGAMEOVER: player O wins.\n");
                break;
            }
        }
    }
    if (gameOver == false)
    {
        drawBoard();
        printf("\nSTALEMATE");
    }
}



void drawBoard(void)
{
    printf("   a   b   c   d   e   f   g\n");
    printf("\n | %c | %c | %c | %c | %c | %c | %c |\n |---+---+---+---+---+---+---|", a[5], b[5], c[5], d[5], e[5], f[5], g[5]);
    printf("\n | %c | %c | %c | %c | %c | %c | %c |\n |---+---+---+---+---+---+---|", a[4], b[4], c[4], d[4], e[4], f[4], g[4]);
    printf("\n | %c | %c | %c | %c | %c | %c | %c |\n |---+---+---+---+---+---+---|", a[3], b[3], c[3], d[3], e[3], f[3], g[3]);
    printf("\n | %c | %c | %c | %c | %c | %c | %c |\n |---+---+---+---+---+---+---|", a[2], b[2], c[2], d[2], e[2], f[2], g[2]);
    printf("\n | %c | %c | %c | %c | %c | %c | %c |\n |---+---+---+---+---+---+---|", a[1], b[1], c[1], d[1], e[1], f[1], g[1]);
    printf("\n | %c | %c | %c | %c | %c | %c | %c |\n |---+---+---+---+---+---+---|", a[0], b[0], c[0], d[0], e[0], f[0], g[0]);
    printf("\n/_\\\t\t\t    /_\\\n");
}

bool winChecker(void)
{
  if (a[0] != ' ' && (a[0] == a[1] && a[1] == a[2] && a[2] == a[3])) // a column
  {
    return true;
  }
  else if (a[1] != ' ' && (a[1] == a[2] && a[2] == a[3] && a[3] == a[4]))
  {
    return true;
  }
  else if (a[2] != ' ' && (a[2] == a[3] && a[3] == a[4] && a[4] == a[5]))
  {
    return true;
  }
  else if (b[0] != ' ' && (b[0] == b[1] && b[1] == b[2] && b[2] == b[3])) // b column
  {
    return true;
  }
  else if (b[1] != ' ' && (b[1] == b[2] && b[2] == b[3] && b[3] == b[4]))
  {
    return true;
  }
    else if (b[2] != ' ' && (b[2] == b[3] && b[3] == b[4] && b[4] == b[5]))
  {
    return true;
  }
  else if (c[0] != ' ' && (c[0] == c[1] && c[1] == c[2] && c[2] == c[3])) // c column
  {
    return true;
  }
  else if (c[1] != ' ' && (c[1] == c[2] && c[2] == c[3] && c[3] == c[4]))
  {
    return true;
  }
  else if (c[2] != ' ' && (c[2] == c[3] && c[3] == c[4] && c[4] == c[5]))
  {
    return true;
  }
  else if (d[0] != ' ' && (d[0] == d[1] && d[1] == d[2] && d[2] == d[3])) // d column
  {
    return true;
  }
  else if (d[1] != ' ' && (d[1] == d[2] && d[2] == d[3] && d[3] == d[4]))
  {
    return true;
  }
  else if (d[2] != ' ' && (d[2] == d[3] && d[3] == d[4] && d[4] == d[5]))
  {
    return true;
  }
  else if (e[0] != ' ' && (e[0] == e[1] && e[1] == e[2] && e[2] == e[3])) // e column
  {
    return true;
  }
  else if (e[1] != ' ' && (e[1] == e[2] && e[2] == e[3] && e[3] == e[4]))
  {
    return true;
  }
  else if (e[2] != ' ' && (e[2] == e[3] && e[3] == e[4] && e[4] == e[5]))
  {
    return true;
  }
  else if (f[0] != ' ' && (f[0] == f[1] && f[1] == f[2] && f[2] == f[3])) // f column
  {
    return true;
  }
  else if (f[1] != ' ' && (f[1] == f[2] && f[2] == f[3] && f[3] == f[4]))
  {
    return true;
  }
  else if (f[2] != ' ' && (f[2] == f[3] && f[3] == f[4] && f[4] == f[5]))
  {
    return true;
  }
  else if (g[0] != ' ' && (g[0] == g[1] && g[1] == g[2] && g[2] == g[3])) // g column
  {
    return true;
  }
  else if (g[1] != ' ' && (g[1] == g[2] && g[2] == g[3] && g[3] == g[4]))
  {
    return true;
  }
  else if (g[2] != ' ' && (g[2] == g[3] && g[3] == g[4] && g[4] == g[5]))
  {
    return true;
  }
  else if (a[0] != ' ' && (a[0] == b[0] && b[0] == c[0] && c[0] == d[0])) // row 0
  {
    return true;
  }
  else if (b[0] != ' ' && (b[0] == c[0] && c[0] == d[0] && d[0] == e[0]))
  {
    return true;
  }
  else if (c[0] != ' ' && (c[0] == d[0] && d[0] == e[0] && e[0] == f[0]))
  {
    return true;
  }
  else if (d[0] != ' ' && (d[0] == e[0] && e[0] == f[0] && f[0] == g[0]))
  {
    return true;
  }
  else if (a[1] != ' ' && (a[1] == b[1] && b[1] == c[1] && c[1] == d[1])) // row 1
  {
    return true;
  }
  else if (b[1] != ' ' && (b[1] == c[1] && c[1] == d[1] && d[1] == e[1]))
  {
    return true;
  }
  else if (c[1] != ' ' && (c[1] == d[1] && d[1] == e[1] && e[1] == f[1]))
  {
    return true;
  }
  else if (d[1] != ' ' && (d[1] == e[1] && e[1] == f[1] && f[1] == g[1]))
  {
    return true;
  }
  else if (a[2] != ' ' && (a[2] == b[2] && b[2] == c[2] && c[2] == d[2])) // row 2
  {
    return true;
  }
  else if (b[2] != ' ' && (b[2] == c[2] && c[2] == d[2] && d[2] == e[2]))
  {
    return true;
  }
  else if (c[2] != ' ' && (c[2] == d[2] && d[2] == e[2] && e[2] == f[2]))
  {
    return true;
  }
  else if (d[2] != ' ' && (d[2] == e[2] && e[2] == f[2] && f[2] == g[2]))
  {
    return true;
  }
  else if (a[3] != ' ' && (a[3] == b[3] && b[3] == c[3] && c[3] == d[3])) // row 3
  {
    return true;
  }
  else if (b[3] != ' ' && (b[3] == c[3] && c[3] == d[3] && d[3] == e[3]))
  {
    return true;
  }
  else if (c[3] != ' ' && (c[3] == d[3] && d[3] == e[3] && e[3] == f[3]))
  {
    return true;
  }
  else if (d[3] != ' ' && (d[3] == e[3] && e[3] == f[3] && f[3] == g[3]))
  {
    return true;
  }
  else if (a[4] != ' ' && (a[4] == b[4] && b[4] == c[4] && c[4] == d[4])) // row 4
  {
    return true;
  }
  else if (b[4] != ' ' && (b[4] == c[4] && c[4] == d[4] && d[4] == e[4]))
  {
    return true;
  }
  else if (c[4] != ' ' && (c[4] == d[4] && d[4] == e[4] && e[4] == f[4]))
  {
    return true;
  }
  else if (d[4] != ' ' && (d[4] == e[4] && e[4] == f[4] && f[4] == g[4]))
  {
    return true;
  }
  else if (a[5] != ' ' && (a[5] == b[5] && b[5] == c[5] && c[5] == d[5])) // row 5
  {
    return true;
  }
  else if (b[5] != ' ' && (b[5] == c[5] && c[5] == d[5] && d[5] == e[5]))
  {
    return true;
  }
  else if (c[5] != ' ' && (c[5] == d[5] && d[5] == e[5] && e[5] == f[5]))
  {
    return true;
  }
  else if (d[5] != ' ' && (d[5] == e[5] && e[5] == f[5] && f[5] == g[5]))
  {
    return true;
  }
  else if (a[0] != ' ' && (a[0] == b[1] && b[1] == c[2] && c[2] == d[3])) // row 0 bottom left -> top right
  {
    return true;
  }
  else if (b[0] != ' ' && (b[0] == c[1] && c[1] == d[2] && d[2] == e[3]))
  {
    return true;
  }
  else if (c[0] != ' ' && (c[0] == d[1] && d[1] == e[2] && e[2] == f[3]))
  {
    return true;
  }
  else if (d[0] != ' ' && (d[0] == e[1] && e[1] == f[2] && f[2] == g[3]))
  {
    return true;
  }
  else if (a[1] != ' ' && (a[1] == b[2] && b[2] == c[3] && c[3] == d[4])) // row 1 bottom left -> top right
  {
    return true;
  }
  else if (b[1] != ' ' && (b[1] == c[2] && c[2] == d[3] && d[3] == e[4]))
  {
    return true;
  }
  else if (c[1] != ' ' && (c[1] == d[2] && d[2] == e[3] && e[3] == f[4]))
  {
    return true;
  }
  else if (d[1] != ' ' && (d[1] == e[2] && e[2] == f[3] && f[3] == g[4]))
  {
    return true;
  }
  else if (a[2] != ' ' && (a[2] == b[3] && b[3] == c[4] && c[4] == d[5])) // row 2 bottom left -> top right
  {
    return true;
  }
  else if (b[2] != ' ' && (b[2] == c[3] && c[3] == d[4] && d[4] == e[5]))
  {
    return true;
  }
  else if (c[2] != ' ' && (c[2] == d[3] && d[3] == e[4] && e[4] == f[5]))
  {
    return true;
  }
  else if (d[2] != ' ' && (d[2] == e[3] && e[3] == f[4] && f[4] == g[5]))
  {
    return true;
  }
  else if (d[0] != ' ' && (d[0] == c[1] && c[1] == b[2] && b[2] == a[3])) // row 0 bottom right -> top left
  {
    return true;
  }
  else if (e[0] != ' ' && (e[0] == d[1] && d[1] == c[2] && c[2] == b[3]))
  {
    return true;
  }
  else if (f[0] != ' ' && (f[0] == e[1] && e[1] == d[2] && d[2] == c[3]))
  {
    return true;
  }
  else if (g[0] != ' ' && (g[0] == f[1] && f[1] == e[2] && e[2] == d[3]))
  {
    return true;
  }
  else if (d[1] != ' ' && (d[1] == c[2] && c[2] == b[3] && b[3] == a[4])) // row 1 bottom right -> top left
  {
    return true;
  }
  else if (e[1] != ' ' && (e[1] == d[2] && d[2] == c[3] && c[3] == b[4]))
  {
    return true;
  }
  else if (f[1] != ' ' && (f[1] == e[2] && e[2] == d[3] && d[3] == c[4]))
  {
    return true;
  }
  else if (g[1] != ' ' && (g[1] == f[2] && f[2] == e[3] && e[3] == d[4]))
  {
    return true;
  }
  else if (d[2] != ' ' && (d[2] == c[3] && c[3] == b[4] && b[4] == a[5])) // row 2 bottom right -> top left
  {
    return true;
  }
  else if (e[2] != ' ' && (e[2] == d[3] && d[3] == c[4] && c[4] == b[5]))
  {
    return true;
  }
  else if (f[2] != ' ' && (f[2] == e[3] && e[3] == d[4] && d[4] == c[5]))
  {
    return true;
  }
  else if (g[2] != ' ' && (g[2] == f[3] && f[3] == e[4] && e[4] == d[5]))
  {
    return true;
  }
  else
  {
    return false;
  }
}

/* 

5  *   *   *   *   *   *   *
4  *   *   *   *   *   *   *
4  *   *   *   *   *   *   *
2  *   *   *   *   *   *   *
1  *   *   *   *   *   *   *
0  *   *   *   *   *   *   *
   a   b   c   d   e   f   g

*/