#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello, file handling in C!\n");
    fclose(fp);

    printf("File written successfully.\n");
    return 0;
}

