void clearInputBuffer(char* string, int sizeOfAlloc)
{
	int length = strlen(string);
	if (length < sizeOfAlloc)
		string[length] = '\0';
	else
		while (getchar() != '\n');
}
