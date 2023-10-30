#include <stdbool.h>
#include "randomWord.c"
#include "maskWord.c"

/**
 * The function play the game
 * @param players number of players
 * @return void
 */
void play(int players)
{
    char letter, *letters;
    char *word = randomWord();
    char *hiddenWord = maskWord(word);
    int tries = 0;

    while (strcmp(word, hiddenWord) != 0 && tries != 6)
    {
        bool hasTriedLetter = false;

        printf("The hidden word is: %s\n", hiddenWord);
        printf("You have %d tries.\n", 6 - tries);

        if (tries > 0)
        {
            printf("You have already tried the letters: ");
            for (int i = 0; i < tries; i++)
            {
                printf("%c ", letters[i]);
            }
            printf("\n");
        }

        printf("Choose a letter: ");
        scanf(" %c", &letter);

        for (int i = 0; i < tries; i++)
        {
            if (letters[i] == letter)
            {
                hasTriedLetter = true;
                break;
            }
        }

        if (hasTriedLetter == true)
        {
            printf("\nYou have already tried this letter.\n");
            continue;
        }

        // Using malloc and realloc to store the letters
        if (tries == 0)
        {
            letters = malloc(sizeof(char));
        }
        else
        {
            letters = realloc(letters, (tries + 1) * sizeof(char));
        }

        letters[tries] = letter;

        bool found = false;

        for (int i = 0; i < strlen(word); i++)
        {
            if (word[i] == letter)
            {
                hiddenWord[i] = letter;
                found = true;
            }
        }

        if (found == false)
        {
            tries++;
        }
    }

    if (strcmp(word, hiddenWord) == 0)
    {
        printf("                                                                ,---.\n");
        printf(",--.   ,--.  ,-----.  ,--. ,--.     ,--.   ,--. ,--. ,--.  ,--. |   | \n");
        printf(" \\  `.'  /  '  .-.  ' |  | |  |     |  |   |  | |  | |  ,'.|  | |  .' \n");
        printf("  '.    /   |  | |  | |  | |  |     |  |.'.|  | |  | |  |' '  | |  |  \n");
        printf("    |  |    '  '-'  ' '  '-'  '     |   ,'.   | |  | |  | `   | `--'  \n");
        printf("    `--'     `-----'   `-----'      '--'   '--' `--' `--'  `--' .--.  \n");
        printf("                                                                '--'  \n");
        printf("                         The word was %s.\n", word);
    }
    else
    {
        printf(" ,--.   ,--.  ,-----.  ,--. ,--.     ,--.     ,-----.   ,---.   ,------. \n");
        printf(" \\n  `.'  /  '  .-.  ' |  | |  |     |  |    '  .-.  ' '   .-'  |  .---'\n");
        printf("  '.    /   |  | |  | |  | |  |     |  |    |  | |  | `.  `-.  |  `--,  \n");
        printf("    |  |    '  '-'  ' '  '-'  '     |  '--. '  '-'  ' .-'    | |  `---. \n");
        printf("    `--'     `-----'   `-----'      `-----'  `-----'  `-----'  `------' \n");
        printf("                         The word was %s.\n", word);
    }
}