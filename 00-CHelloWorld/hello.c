#include <stdio.h>

int main() {
   FILE *fp;
   fp = fopen("output.txt", "w");
    fprintf(fp, "Hello, World!\n");
    printf("Hello, World!\n");
    fclose(fp);
   return 0;
}
