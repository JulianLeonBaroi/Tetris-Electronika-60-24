/*Tetris® Electronika 60 '24*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int main()
{
    printf(" Welcome\n\n");
    printf(" Electronika 60\n");
    printf(" Copyright 1978 Ministry of the Electronics Industry (Soviet Union). All Rights Reserved.\n\n");
    printf(" RT-11 V05.3\n\n");

    //The user will type his/her name. The length should be from 1 to 15.
    char user[16];
    printf(" Username: ");
    fgets(user, sizeof(user), stdin);
    user[strcspn(user, "\n")] = '\0';  //It removes newline characters.
    printf(" Welcome, %s", user);

    printf(" \n\n");

     //It clears the input buffer.
    fflush(stdin);

    char name[7];
    for(;;)
    {
        printf(" Just type out its name!\n");
        printf(" Note: Use capital only.\n");
        printf(" Input: ");
        if (scanf("%6s", &name) != 1)
        {
            //It handles invalid input (not matching the expected format).
            printf("\n ?Error-File not found MX1.SAV\n\n");
            fflush(stdin);  //It clears the input buffer.
            continue;  //The input from the user continues.
        }

        //It checks if there are additional characters after the expected input.
        char extra;
        if (scanf("%c", &extra) == 1 && extra != '\n')
        {
            //It handles the case where there are extra characters.
            printf("\n ?Error-File not found MX1.SAV\n\n");
            fflush(stdin);  //It clears the input buffer.
            continue;  //The input from the user continues.
        }

        /*The user will type the name of the game(all letters should be in uppercase) and run the game.*/
        if(strcmp(name, "TETRIS") == 0)
        {
            printf(" \n");
            printf(" \n");
            printf("                            9 6 0 0  0 0 0 0  0 0 1 0  0 0 0 0  0 0 0 0  01 24 47\n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                    [ ]                                          \n");
            printf("                                    T E T R I S                                  \n");
            printf("                                            [ ]                                  \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");

            /*The user will type the level any number from 0 to 9.*/
            int num;
            printf("                     YOUR LEVEL?  (0-9)  - ");
            scanf("%d", &num);
            if(num>=0 && num<=9)
            {
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf(" \n");
            printf(" \n");
            printf("                            9 6 0 0  0 0 0 0  0 0 1 0  0 0 0 0  0 0 0 0  01 26 31\n");
            printf("                                                                                 \n");
            printf(" FULL LINES:  2           <! . . . . . . . . . .!>                               \n");
            printf(" LEVEL:       3           <! . . . . . . . . . .!>   7: LEFT     9: RIGHT        \n");
            printf("   SCORE:  304            <! . . . . . . . . . .!>        8:ROTATE               \n");
            printf("                          <! . . . . . . . . . .!>   4:SPEED UP  5:DROP          \n");
            printf("                          <! . . . . . . . . . .!>   1: SHOW  NEXT               \n");
            printf("                          <! . . . . . . . . . .!>   0:  ERASE THIS TEXT         \n");
            printf("                          <! . . . .[][][] . . .!>     SPACEBAR - DROP           \n");
            printf("                          <! . . . . . .[] . . .!>                               \n");
            printf("                          <! . . . . . . . . . .!>                               \n");
            printf("                          <! . . . . . . . . . .!>                               \n");
            printf("                   [][][] <! . . . . . . . . . .!>                               \n");
            printf("                     []   <! . . . . . . . . . .!>                               \n");
            printf("                          <! . . . . . . . . . .!>                               \n");
            printf("                          <! . . . .[][] . . . .!>                               \n");
            printf("                          <! . . . .[][] . . . .!>                               \n");
            printf("                          <! . . .[][][][] . . .!>                               \n");
            printf("                          <! .[][] .[][][] . .[]!>                               \n");
            printf("                          <! .[][] .[] . . .[][]!>                               \n");
            printf("                          <![][][] .[][][][][][]!>                               \n");
            printf("                          <![][][][] . .[][][][]!>                               \n");
            printf("                          <!====================!>                               \n");
            printf("                            \\/\\/\\/\\/\\/\\/\\/\\/\\/\\/                       \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("\n");
            printf("\n");
            printf("                            9 6 0 0  0 0 0 0  0 0 1 0  0 0 0 0  0 0 0 0  01 35 21\n");
            printf("                                                                                 \n");
            printf(" FULL LINES: 13           <! . . . .[] . . . . .!>                               \n");
            printf(" LEVEL:       3           <! . . . .[][] . . . .!>   7: LEFT     9: RIGHT        \n");
            printf("   SCORE: 2024            <! . . . .[][] . . . .!>        8:ROTATE               \n");
            printf("  X X                     <! . . . .[][] . . . .!>   4:SPEED UP  5:DROP          \n");
            printf("                          <! . . .[][] . . . . .!>   1: SHOW  NEXT               \n");
            printf("                          <! . . .[][][][] . . .!>   0:  ERASE THIS TEXT         \n");
            printf("                          <! . . . .[][] . .[] .!>     SPACEBAR - DROP           \n");
            printf("                          <![][] .[][][] .[][] .!>                               \n");
            printf("                          <! .[][][][][] .[][][]!>                               \n");
            printf("                          <! .[][][][][][][][][]!>                               \n");
            printf("                   [][]   <![][][][] .[][][][][]!>                               \n");
            printf("                     [][] <![][][][][][][][][][]!>                               \n");
            printf("                          <! .[][][][][][][][][]!>                               \n");
            printf("                          <![][][][] . .[] .[][]!>                               \n");

            /*The user will type his/her name which will show on the leaderboard. The length should from 1 to 10.*/
            char scoreboard[11];
            int length;
            printf(" YOUR NAME?");
            scanf("%s", &scoreboard);
            length = strlen(scoreboard);
            printf("                          <![][][][][][][][] .[]!>                               \n");
            printf("                          <! .[] . .[][][][][][]!>                               \n");
            printf("                          <![][][][][][] .[][][]!>                               \n");
            printf("                          <! .[][] .[] .[][][][]!>                               \n");
            printf("                          <![][][][] . .[][][][]!>                               \n");
            printf("                          <!====================!>                               \n");
            printf("                            \\/\\/\\/\\/\\/\\/\\/\\/\\/\\/                       \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("\n");
            printf("\n");
            printf("                            9 6 0 0  0 0 0 0  0 0 1 0  0 0 0 0  0 0 0 0  01 35 45\n");
            printf("                                                                                 \n");
            printf("                 NAME       LEVEL    SCORE                                       \n");
            {

            /*Depending on the length of the name, the output will vary.*/
            if(length == 1)
            {
            printf("                 %s              3     2024  XX                                  \n", &scoreboard);
            }
            else if(length == 2)
            {
            printf("                 %s             3     2024  XX                                   \n", &scoreboard);
            }
            else if(length == 3)
            {
            printf("                 %s            3     2024  XX                                    \n", &scoreboard);
            }
            else if(length == 4)
            {
            printf("                 %s           3     2024  XX                                     \n", &scoreboard);
            }
            else if(length == 5)
            {
            printf("                 %s          3     2024  XX                                      \n", &scoreboard);
            }
            else if(length == 6)
            {
            printf("                 %s         3     2024  XX                                       \n", &scoreboard);
            }
            else if(length == 7)
            {
            printf("                 %s        3     2024  XX                                        \n", &scoreboard);
            }
            else if(length == 8)
            {
            printf("                 %s       3     2024  XX                                         \n", &scoreboard);
            }
            else if(length == 9)
            {
            printf("                 %s      3     2024  XX                                          \n", &scoreboard);
            }
            else if(length == 10)
            {
            printf("                 %s     3     2024  XX                                           \n", &scoreboard);
            }

            /*If the length is not from 1 to 10, then the program will show crash.*/
            else
            {
            system("cls");
            return 0;
            }
            }
            printf("                 ALEXEY P.      1     1278                                       \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("                                                                                 \n");
            printf("            ONCE MORE? (YES / NO) -                                              \n");
            printf("                                                                                 \n");
            printf("\n");
            printf("\n");
            printf(" Tetris Registered & Copyright 1985~2024 Tetris Holding.\n");
            printf(" Tetris logos, Tetris theme song and Tetriminos are trademarks of Tetris Holding.\n");
            printf(" The Tetris trade dress is owned by Tetris Holding. Licensed to The Tetris Company.\n");
            printf(" Tetris Game Design by Alexey Pajitnov.\n");
            printf(" All Rights Reserved.\n\n\n");
            printf(" Version 1.0.0\n");
            printf(" Developed by Julian Leon Baroi.\n");
            printf(" Copyright 2024 Julian Leon Baroi. All rights reserved.\n");
            }

            /*If the user doesn't type the number from 0 to 9, then the program will show crash.*/
            else
            {
            system("cls");
            }

            break;
        }

        /*If the user doesn't type the name correctly, it will keep trying to show an error message and take the input from the
        user again and again.*/
        else
        {
        printf("\n ?Error-File not found MX1.SAV\n\n");
        }

    }

    system("pause");
    return 0;
}
