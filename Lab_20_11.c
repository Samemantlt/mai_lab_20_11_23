#include <stdlib.h>
#include <stdio.h>
#include <math.h>


#define SWAP(a, b) do { typeof(a) temp = a; a = b; b = temp; } while (0)


typedef long long number;


typedef struct {
    number* numbers;
    int sideSize;
} Matrix;


Matrix readFromFile(FILE* file) {
    number* numbers = calloc(8 * 8, sizeof(number));

    int i = 0;
    for (; i < 8 * 8; i++) {
        if (feof(file))
            break;

        number num;
        fscanf_s(file, "%lli", &num);
        numbers[i] = num;
    }


    int size = (int) sqrt((double) i);

    Matrix result = {numbers, size};

    return result;
}

int pythonLikeMod(int n, int M) {
    return ((n % M) + M) % M;
}

void cycleMoveVerticalSingle(Matrix matrix) {
    for (int x = 0; x < matrix.sideSize; x++) {
        number c = matrix.numbers[x];

        for (int y = 0; y < matrix.sideSize; y++) {
            int yUse = pythonLikeMod(y + 1, matrix.sideSize);

            number* a = &matrix.numbers[x + yUse * matrix.sideSize];
            number tmp = *a;
            *a = c;
            c = tmp;
        }
    }
}

void cycleMoveVertical(Matrix matrix, int value) {
    int moves = pythonLikeMod(value, matrix.sideSize);
    for (int i = 0; i < moves; ++i) {
        cycleMoveVerticalSingle(matrix);
    }
}

void print_matrix(Matrix matrix) {
    for (int y = 0; y < matrix.sideSize; y++) {
        for (int x = 0; x < matrix.sideSize; x++) {
            printf_s("%lli ", matrix.numbers[x + y * matrix.sideSize]);
        }
        printf_s("\n");
    }
}

int main(int argc, char** args) {
    FILE* file;
    file = fopen(args[1], "r");
    if (errno != 0) {
        printf("Error: %i", errno);
    }

    Matrix matrix = readFromFile(file);
    cycleMoveVertical(matrix, 115);

    print_matrix(matrix);
}
