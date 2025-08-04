#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

void main() {
    char buffer[PATH_MAX];

    if (getcwd(buffer, sizeof(buffer)) == NULL) {
        fprintf(stderr, "pwd: %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    printf("%s\n", buffer);
}

