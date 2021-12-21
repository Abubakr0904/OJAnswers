#include <stdio.h>

int main()
{
    FILE* input = fopen("input.txt", "r");
    FILE* output = fopen("input.txt", "w");
    int n = 0;
    fscanf(input, "%d", n);
    char names[100][100];
    fprintf(output, "");

    return 0;
}