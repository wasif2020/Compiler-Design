#include<stdio.h>
#include<string.h>
void isComment(char line[], int n)
{
if (line[0] == '/' && line[1] == '/' && line[2] != '/')
{
printf("It is a single-line comment");
return;
}
if (line[n- 2] == '*' && line[n- 1] == '/' && line[0] == '/' && line[1] == '*')
{
printf("It is a multi-line comment");
return;
}
printf("It is not a comment");
}
int main()
{
char line[50];
gets(line);
int n;
for (n = 0; line[n] != '\0'; ++n);
isComment(line, n);
return 0;
}
