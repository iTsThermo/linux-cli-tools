#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        printf("Too many arguments, only provide a path to an arguement");
        return;
    }
    if (argc == 0)
    {
        printf("No arguements passed in, please provide a path to a file");
    }
    if (length(argv[1]) > 100)
    {
        printf("Path too large, must be under 100 characters");
    }

    FILE *fptr;

    fptr = fopen(argv[1], "r");

    if (fptr == NULL)
    {
        printf("Error Opening File");
        fclose(fptr);
    }

    char *file_contents = (char *)malloc(1024);
    int file_size = 1024;

    while (fgets(file_contents, file_size, fptr))
    {
        printf("%s", file_contents);
    }

    printf("hello");
    return 1;
}