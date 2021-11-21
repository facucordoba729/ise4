#include <stdio.h>
#include <ctype.h>

#define MAX 1024

int read_file(char *text, char *filename);

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Uso: ./word file\n");
        return 1;
    }

    char text[MAX];

    if (read_file(text, argv[1])) {
        printf("Archivo no encontrado\n");
        return 1;
    }

    // TODO
    int orac= 0, palabras = 0;
    int ind = 0
     
    while (text[ind]!='\0')
        {
         if (text[ind]== ' '){
             palabras++;
         }
         ind++;
        }
        if (text[ind] == '\0') {
        palab++;
    }

    printf("La cantidad de palabras es %i\n", palab);

    ind = 0;

    while (text[ind] != '\0') {
        if (text[ind]=='?'||text[ind]=='!'||text[ind]=='.') {
        orac++;
        }
        ind++;
    }

    printf("La cantidad de oraciones es %i", orac);


 
    return 0;
}

int read_file(char *text, char *filename) {

    FILE *fp;
    char c;
    char full_name[30];
    
    sprintf(full_name, "frases/%s.txt", filename);
    fp = fopen(full_name, "r");
    
    if (!fp) {
        return 1;
    } 
    while ((c = getc(fp)) != EOF) {
        *text = c;
        text++;
    }
    return 0;
}
