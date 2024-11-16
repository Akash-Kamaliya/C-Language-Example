#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 256

void merge_alternate_lines(const char *file1, const char *file2, const char *output_file)
{
    FILE *f1, *f2, *outfile;
    char line1[MAX_LINE_LENGTH];
    char line2[MAX_LINE_LENGTH];
    f1 = fopen(file1, "r");
    f2 = fopen(file2, "r");
    if (f1 == NULL || f2 == NULL)
    {
        perror("Error opening input files");
        exit(EXIT_FAILURE);
    }
    outfile = fopen(output_file, "w");
    if (outfile == NULL)
    {
        perror("Error opening output file");
        fclose(f1);
        fclose(f2);
        exit(EXIT_FAILURE);
    }
    while (fgets(line1, sizeof(line1), f1) != NULL || fgets(line2, sizeof(line2), f2) != NULL)
    {
        if (line1[0] != '\0')
        {
            fputs(line1, outfile);
        }
        if (line2[0] != '\0')
        {
            fputs(line2, outfile);
        }
        line1[0] = '\0';
        line2[0] = '\0';
    }
    fclose(f1);
    fclose(f2);
    fclose(outfile);
}
int main()
{
    const char *file1 = "file1.txt";
    const char *file2 = "file2.txt";
    const char *output_file = "output.txt";
    merge_alternate_lines(file1, file2, output_file);
    printf("Merged alternate lines from '%s' and '%s' into '%s'.\n", file1, file2, output_file);
    return 0;
}
