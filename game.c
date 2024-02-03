#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* chooseRandomWord() {
    const char* words[] = {"apple", "banana", "chocolate", "programming", "elephant", "university"};
    int numWords = sizeof(words) / sizeof(words[0]);
    srand(time(NULL));
    return strdup(words[rand() % numWords]);
}

int main() {
    char* wordToGuess = chooseRandomWord();
    int length = strlen(wordToGuess);
    char* guessedWord = (char*)malloc(length + 1);
    memset(guessedWord, '_', length);
    guessedWord[length] = '\0';

    // Implement the game logic here.

    free(wordToGuess);
    free(guessedWord);
    return 0;
}

