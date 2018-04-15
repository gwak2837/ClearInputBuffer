// Available with ASCII
// Get string from user(stdio), save in pointer to char, and clear input buffer.

void clearInputBuffer(char* string, int sizeOfAlloc)
{
	int length = strlen(string);
	if (length < sizeOfAlloc)
		string[length] = '\0';
	else
		while (getchar() != '\n');
}

//-------------------Example-------------------

#define EQUATION_SIZE 10 // Length of string

int main()
{
	char* equation = (char*)malloc(EQUATION_SIZE);
	fgets(equation, EQUATION_SIZE, stdin);
	clearInputBuffer(equation, EQUATION_SIZE);
  
	return 0;
}
