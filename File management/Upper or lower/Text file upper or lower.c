#include <stdio.h>
#include <string.h>

int main()
{

	FILE *fptr = fopen("Test1.txt", "r");
	FILE *fptr2 = fopen("Text1.txt", "w");
	char ch;
	while ((ch = fgetc(fptr)) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch + 32;
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			ch = ch - 32;
		}
		fputc(ch, fptr2);
	}
	fclose(fptr);
	fclose(fptr2);

	return 0;
}