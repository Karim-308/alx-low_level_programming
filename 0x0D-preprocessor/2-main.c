#include <stdio.h>
#include <string.h>

int main() {
    const char* filepath = __FILE__;
    const char* filename = strrchr(filepath, '/') + 1;
    printf("%s\n", filename);
    return 0;
}
