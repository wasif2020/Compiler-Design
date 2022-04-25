#include <stido.h >
#include<string.h>
void isComment(char line[])
{
	if (line[0] == '/' && line[1] == '/'
		&& line[2] != '/') {

		printf( "It is a single-line comment");
		return;
	}

	if (line[line.size() - 2] == '*'
		&& line[line.size() - 1] == '/' && line[0] == '/' && line[1] == '*') {

		printf("It is a multi-line comment");
		return;
	}

	printf( "It is not a comment");
}
int main()
{
	char line[50];
              scanf("%s",line);
              isComment(line);
	return 0;
}
