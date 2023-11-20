#include <stdlib.h>
#include <stdio.h>


#define SWAP(a, b) do { typeof(a) temp = a; a = b; b = temp; } while (0)


typedef long long number;


typedef struct {
	number* numbers;
	int sideSize;
} Matrix;


Matrix readFromFile(FILE* file) {
	number* numbers = malloc(8 * 8);

	int i = 0;
	for (; i < 8 * 8; i++)
	{
		number num;
		fscanf_s(file, "%lli", &num);
	}

	Matrix result = { numbers, sqrt(i)};

	return result;
}

int pythonLikeMod(int n, int M) {
	return ((n % M) + M) % M;
}

void cycleMoveVertical(Matrix matrix, int value) {
	for (size_t x = 0; x < matrix.sideSize; x++)
	{
		for (size_t y = 0; y < matrix.sideSize; y++)
		{
			number* a = &matrix.numbers[x + y * matrix.sideSize];
			number* b = &matrix.numbers[x + pythonLikeMod(y + value, matrix.sideSize) * matrix.sideSize];
			number c = *a;

		}
	}
}

int main(int argc, char** args)
{
	FILE* file;
	file = fopen(args[0], "r");
	if (errno != 0) {
		printf("Error: %i", errno);
	}

	Matrix matrix = readFromFile(file);
}
