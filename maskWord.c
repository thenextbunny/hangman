#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Mask the word with underscores
 * @param word
 * @return hidden word
 * @example maskWord("hello") -> "_____"
 */
char *maskWord(char *word)
{
    int wordLength = strlen(word);

    char *hiddenWord = malloc(wordLength * sizeof(char));

    for (int i = 0; i < wordLength; i++)
    {
        hiddenWord[i] = '_';
    }

    hiddenWord[wordLength] = '\0';

    return hiddenWord;
}