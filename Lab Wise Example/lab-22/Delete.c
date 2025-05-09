#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

void processFile(const char *inputFile, const char *outputFile)
{
    FILE *inFile = fopen(inputFile, "r");
    FILE *outFile = fopen(outputFile, "w");
    if (inFile == NULL || outFile == NULL)
    {
        printf("Error opening files.\n");
        exit(1);
    }
    char line[MAX_LINE_LENGTH];
    int lineCount = 0;
    while (fgets(line, sizeof(line), inFile))
    {
        if (line[0] != '\n' && line[0] != '\r')
        {
            lineCount++;
            fputs(line, outFile);
            if (lineCount == 3)
            {
                fputs("\n", outFile);
            }
        }
    }
    fclose(inFile);
    fclose(outFile);
    printf("File processed successfully.\n");
    printf("%d",lineCount);
}

int main()
{
    const char *inputFile = "input.txt";
    const char *outputFile = "output.txt";
    processFile(inputFile, outputFile);
    return 0;
}