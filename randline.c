#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 1000
#define MAX_LINE_LENGTH 256

int main(int argc, char** argv)
{
	srand(time(NULL));

	if (argc < 2)
	{
		printf("Usage: randline [FILE]\n");
		return 0;
	}

	char *lines[MAX_LINES];

	int line_count = 0;

	char buffer[MAX_LINE_LENGTH];

	FILE *filePointer;

	filePointer = fopen(argv[1], "r");

	if (filePointer == NULL)
	{
		printf("File could not be opened.");
		return 1;
	}

	while (fgets(buffer, MAX_LINE_LENGTH, filePointer) != NULL && line_count < MAX_LINES)
	{
		lines[line_count] = malloc(strlen(buffer) + 1);

		if (lines[line_count] == NULL)
		{
			printf("malloc error");
			return 1;
		}

		strcpy(lines[line_count], buffer);
		
		line_count++;
	}

	fclose(filePointer);

	int randNum = rand() % (line_count + 1);

	for (int i = 0; i < line_count; i++)
	{
		if (i == randNum)
		{
			printf("%s", lines[i]);
		}

		free(lines[i]);
	}

	return 0;
}
