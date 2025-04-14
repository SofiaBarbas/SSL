#include <stdio.h>

int main (){
    FILE*f=fopen("output.txt","w+");
    printf("Hola Sofia Barbas!");
    fprintf(f,"Hola Sofia Barbas!");
    fclose(f);
    return 0;
}
