#include <stdio.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{
	const char *fileFrom;
	const char *fileTo;
	FILE *sourceFile;
	FILE *destinationFile;
	char buffer[BUFFER_SIZE];
	size_t bytesRead;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		return (97);
	}

	fileFrom = argv[1];
	fileTo = argv[2];

	sourceFile = fopen(fileFrom, "rb");
	if (sourceFile == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", fileFrom);
		return (98);
	}

	destinationFile = fopen(fileTo, "wb");
	if (destinationFile == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", fileTo);
		fclose(sourceFile);
		return (99);
	}

	while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0)
	{
		size_t bytesWritten = fwrite(buffer, 1, bytesRead, destinationFile);
		if (bytesWritten != bytesRead)
		{
			fprintf(stderr, "Error: Can't write to %s\n", fileTo);
			fclose(sourceFile);
			fclose(destinationFile);
			return (99);
		}
	}

	if (fclose(sourceFile) != 0)
	{
		fprintf(stderr, "Error: Can't close source file\n");
		return (100);
	}

	if (fclose(destinationFile) != 0)
	{
		fprintf(stderr, "Error: Can't close destination file\n");
		return (100);
	}

	return (0);
}

