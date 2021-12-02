#include <stdio.h>

int main(int argc, char **argv) {
    FILE *file;
    int a = *argv[1] - '0', b = *argv[2] - '0';
    file = fopen("C:\\Users\\zaxar\\CLionProjects\\untitled46\\cout.txt", "w");
    fprintf(file, "%d\n", a + b);
    fclose(file);
    return 0;
}
