#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
	int point = 0;
	char s[100];

	scanf("%s", s);

	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == '(')
			point++;
		else
		{
			point--;
			if (point < 0)
				break;
		}
	}

	if (point == 0)
		printf("O");
	else
		printf("X");

	system("pause");

	return 0;
}