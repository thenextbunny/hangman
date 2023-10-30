#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#define WORDS 705

/**
 * Choose a random word from the file words.txt
 * @return char random word
 */
char *randomWord()
{
    // Open and read the file
    char filename[] = "words.txt";

    FILE *file = fopen(filename, "r");

    if (file == NULL)
    {
        perror("The game can't be started.");
        exit(1);
    }

    // Choose a random word
    srand((unsigned)time(NULL));

    int line = rand() % WORDS;

    // Read the word in the line "random" of the file
    char *word = malloc(20 * sizeof(char));

    // Read the word in the line
    for (int i = 0; i < line; i++)
    {
        fscanf(file, "%s", word);
    }

    return word;
}