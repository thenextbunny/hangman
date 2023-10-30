#include <stdio.h>
#include "play.c"

/**
 * Show the menu
 * @return void
 */
void menu()
{
    int option;

    printf(",--.  ,--.   ,---.   ,--.  ,--.  ,----.    ,--.   ,--.   ,---.   ,--.  ,--.      ,----.      ,---.   ,--.   ,--. ,------. \n");
    printf("|  '--'  |  /  O  \\  |  ,'.|  | '  .-./    |   `.'   |  /  O  \\  |  ,'.|  |     '  .-./     /  O  \\  |   `.'   | |  .---' \n");
    printf("|  .--.  | |  .-.  | |  |' '  | |  | .---. |  |'.'|  | |  .-.  | |  |' '  |     |  | .---. |  .-.  | |  |'.'|  | |  `--, \n");
    printf("|  |  |  | |  | |  | |  | `   | '  '--'  | |  |   |  | |  | |  | |  | `   |     '  '--'  | |  | |  | |  |   |  | |  `---. \n");
    printf("`--'  `--' `--' `--' `--'  `--'  `------'  `--'   `--' `--' `--' `--'  `--'      `------'  `--' `--' `--'   `--' `------' \n");

    printf("Choose an option: \n");
    printf("1. Start the game\n");
    printf("2. About the game\n");
    printf("3. Close the game\n");

    do
    {
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            play(1);
            break;
        case 2:
            printf(",--.  ,--.   ,---.   ,--.  ,--.  ,----.    ,--.   ,--.   ,---.   ,--.  ,--.      ,----.      ,---.   ,--.   ,--. ,------. \n");
            printf("|  '--'  |  /  O  \\  |  ,'.|  | '  .-./    |   `.'   |  /  O  \\  |  ,'.|  |     '  .-./     /  O  \\  |   `.'   | |  .---' \n");
            printf("|  .--.  | |  .-.  | |  |' '  | |  | .---. |  |'.'|  | |  .-.  | |  |' '  |     |  | .---. |  .-.  | |  |'.'|  | |  `--, \n");
            printf("|  |  |  | |  | |  | |  | `   | '  '--'  | |  |   |  | |  | |  | |  | `   |     '  '--'  | |  | |  | |  |   |  | |  `---. \n");
            printf("`--'  `--' `--' `--' `--'  `--'  `------'  `--'   `--' `--' `--' `--'  `--'      `------'  `--' `--' `--'   `--' `------'\n\n");

            printf("A game where you have to guess a word.\n\n");

            printf("You can choose between 1 or 2 players.\n");
            printf("If you choose 1 player, the game will choose a word for you.\n");
            printf("If you choose 2 players, one player will choose a word for the other player.\n\n");

            printf("The player will have 6 attempts to guess the word.\n\n");

            printf("Good luck!\n");

            break;
        case 3:
            printf("Closing the game.\n");
            exit(0);
            break;
        default:
            printf("Invalid option!\n");
            break;
        }
    } while (option < 1 || option > 2);
}
