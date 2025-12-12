#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"
 
int main(int argc, char *argv[]) {
    if (argc == 3 && strcmp(argv[1], "car") == 0) {
        double a = atof(argv[2]);
        double r = _car(a);
        printf("%.6lf", r);  
        return 0;
    }
    if (argc == 4) {
        char* op = argv[1];
        double a = atof(argv[2]);
        double b = atof(argv[3]);
        double r = 0;
 
        if (strcmp(op, "add") == 0)      r = _add(a, b);
        else if (strcmp(op, "sub") == 0) r = _sub(a, b);
        else if (strcmp(op, "mul") == 0) r = _mul(a, b);
        else if (strcmp(op, "div") == 0) r = _div(a, b);
        else {
            printf("Erreur de parametres");
            return 1;
        }
        printf("%.6lf", r);
    }
    else {
        printf("Erreur de parametres");
    }
    return 0;
}
		
