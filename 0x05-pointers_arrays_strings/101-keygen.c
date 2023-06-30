#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6
/**
 * generete - Program  generate random valid password for the program
 */
void generate(char *password, int length) {
    const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    for (i = 0; i < length; i++) {
        int random_index = rand() % (sizeof(characters) - 1);
        password[i] = characters[random_index];
    }

    password[length] = '\0';
}

int main() {
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1];
    generate(password, PASSWORD_LENGTH);

    printf("Generated Password: %s\n", password);

    return 0;
}
