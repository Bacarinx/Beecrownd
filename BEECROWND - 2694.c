#include <stdio.h>

void swap(int *arr, int low, int high) {
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
}

int partition(int *arr, int left, int rigth) {
    int pivot = arr[(left + rigth) /2]; // pegando o valor do meio

    while(left <= rigth) {
        while(arr[left] < pivot) left++;
        while(arr[rigth] > pivot) rigth--;

        if(left <= rigth) {
            swap(arr, left, rigth);
            left++;
            rigth--;
        }

    }

    return left;
}

void quickSort(int *arr, int left, int rigth) {
    if(left < rigth) {
        int pos  = partition(arr, left, rigth);
        quickSort(arr, left, pos - 1);
        quickSort(arr, pos, rigth);
    }
}

int main() {
    int i, vezes, numero, iPar = 0, iImpar = 0;
    scanf("%i", &vezes);

    int impar[vezes], par[vezes];

    for(i = 0; i < vezes; i++) {
        par[i] = 0;
        impar[i] = 0;
    }

    for(i = 0; i < vezes; i++) {
        scanf("%i", &numero);
        if(numero % 2 == 0) {
            par[iPar] = numero;
            iPar++;
        } else {
            impar[iImpar] = numero;
            iImpar++;
        }
    }

    int parPositive[iPar], imparPositive[iImpar];

    for(i = 0; i < iPar; i++) {
        parPositive[i] = par[i];
    }

    for(i = 0; i < iImpar; i++) {
        imparPositive[i] = impar[i];
    }

    quickSort(parPositive, 0, iPar - 1);
    quickSort(imparPositive, 0, iImpar - 1);

    for(i = 0; i < iPar; i++) {
        printf("%i\n", parPositive[i]);
    }

    for(i = 0; i < iImpar; i++) {
        printf("%i\n", imparPositive[iImpar - i - 1]);
    }

    return 0;
}
