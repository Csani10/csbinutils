#include <stdio.h>
#include <string.h>
#include <dirent.h>

int main(int argc, char** argv)
{
	if (argc < 2)
	{
		printf("Usage: lc [FILE]\n");
		return 0;
	}

	FILE *filePointer;

	filePointer = fopen(argv[1], "r");

	if (filePointer == NULL)
	{
		printf("File could not be read.\n");
		return 1;
	}

	int lines = 0;
	
	char buffer[100];
	
	while (fgets(buffer, 100, filePointer))
	{
		lines += 1;
		//printf("%s", buffer);
	}
	
	printf("Length: %d\n", lines);

	fclose(filePointer);
	
	return 0;
}
