#include <stdio.h>
#include <libgen.h>

int main() {
    char* filename = basename(__BASE_FILE__);
    printf("%s\n", filename);
    return 0;
}
