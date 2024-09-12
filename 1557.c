#include <stdio.h>

int main() {
    int a = 0, numbersArray[200];
    int number = 0;

    while(scanf("%i", &number) && number){
        numbersArray[a] = number;
        a++;
    }

    printArray(numbersArray, a);
    return 0;
}

int QntNumber(int number) {
    int count = 0;

    while(number != 0) {
        count++;
        number /= 10;
    }
    return count - 1;
}

void printArray(int values[], int quantityA) {
    int i, j, a, b, incrementx, incrementy, maxValue, incrementParcial;
    int permitido = 1;

    for(a = 0; a < quantityA; a++) {
        if(values[a] >= 16) {
            permitido -= 1;
        }
    }

    if(permitido == 1) {
        for(a = 0; a < quantityA; a++) {
        incrementx = 1;
        incrementy = 1;
        incrementParcial = 1;

        for(b = 1; b < values[a]; b++) {
            incrementParcial*=2;
        }

        maxValue = (incrementParcial * incrementParcial) * 10;

        for(i = 0; i < values[a]; i++) {
            for(j = 0; j < values[a]; j++) {
                if(j == 0) {
                   for(b = 0; b < (QntNumber(maxValue) - QntNumber(incrementx)) - 1; b++) {
                        printf(" ");
                    }
                } else {
                    if((QntNumber(maxValue) - QntNumber(incrementx)) == 0) {
                        printf(" ");
                    } else {
                        for(b = 0; b < (QntNumber(maxValue) - QntNumber(incrementx)); b++) {
                        printf(" ");
                        }
                    }
                }

                printf("%i", incrementx);
                incrementx = incrementx * 2;
            }

            incrementy = incrementy * 2;
            incrementx = incrementy;
            printf("\n");
        }
        printf("\n");
    }
    } else {
        printf("ERROR!!!!!!!!!!!!!!!!");
    }


}
