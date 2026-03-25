#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]){
	if (argc == 4)
	{
	char* op = argv[1];
	char* a = argv[2];
	char* b = argv[3];
	double r = 0;

// Pour les opérations +, -, *, /, besoin de 4 arguments:
		
	if (strcmp(op, "add") == 0) {
		r = _add(atof(a), atof(b));
		printf("%lf",r);
	}
	else if (strcmp(op, "sub") == 0) {
		r = _sub(atof(a), atof(b));
		printf("%lf",r);
	}
	else if (strcmp(op, "mul") == 0) {
		r = _mul(atof(a), atof(b));
		printf("%lf",r);
	}
	else if (strcmp(op, "div") == 0) {
		r = _div(atof(a), atof(b));
		printf("%lf",r);
	}
	else {printf("Erreur de parametres");}
	}
// Pour opération carré besoin de 3 arguments seulement

		else if (argc == 3) {
        if (strcmp(argv[1], "car") == 0) {
            double r = _sqr(atof(argv[2]));
            printf("%lf", r);
        } else {
            printf("Erreur de parametres");
        }
    }

// Si ce n'est ni 3 ni 4 arguments
			
	else {printf("Erreur de parametres");}
	return 0;
}

		
