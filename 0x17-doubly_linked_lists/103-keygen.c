#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KEY_LEN 25

char *generate_key(char *username)
{
    int i;
    int len = strlen(username);
    char *key = malloc(KEY_LEN + 1);
    memset(key, 0, KEY_LEN + 1);

    for (i = 0; i < len; i++) {
        key[i % KEY_LEN] += username[i];
    }

    for (i = 0; i < KEY_LEN; i++) {
        key[i] = ((key[i] ^ 0x3b) & 0x7f);
        if (key[i] < 0x20) {
            key[i] += 0x20;
        }
    }

    return key;
}

int main(int argc, char **argv)
{
    if (argc != 2) {
        printf("Usage: %s username\n", argv[0]);
        return 1;
    }

    char *username = argv[1];
    char *key = generate_key(username);

    printf("%s\n", key);

    free(key);

    return 0;
}
