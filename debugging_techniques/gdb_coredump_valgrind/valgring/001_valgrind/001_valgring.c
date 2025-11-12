#include <stdio.h>
#include <stdlib.h>   

int main() {
    char *ptr;

    ptr = (char *)malloc(19);  
    if (ptr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Memory successfully allocated.\n");

    free(ptr);  
    printf("Memory freed successfully.\n");

    return 0;
}
