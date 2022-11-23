//Q.1 Accept string from user and print using dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
	char* str = NULL;
	char ch;
	int size = 1;
	int i = 0;

	str = (char*)malloc(sizeof(char));

	*str = '\0';
 	printf("Enter the character\n");
	do
	{
		scanf_s("%c", &ch);
		if (ch != '\n')
		{
			size++;
			str = (char*)realloc(str, size * sizeof(char));
			*(str + i) = ch;
			*(str + i + 1) = '\0';
			i++;
		}
	
	} while (ch != '\n');
	printf(" string : %s", str);
	_getch();
}