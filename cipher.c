#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char text[20],a;
	printf("Enter string");
	scanf("%s",text);
	
	for(int i=0;i<strlen(text);i++)
{
		if(text[i]<='w')
		{
		a=text[i];
		printf("%c",a+3);
		}
		else
		{
		if(text[i]=='x') printf("a");
		if(text[i]=='y') printf("b");
		if(text[i]=='z') printf("c");
		}
}
}
