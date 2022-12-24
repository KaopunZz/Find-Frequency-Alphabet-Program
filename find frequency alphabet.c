#include <stdio.h> //find frequency alphabet program
#include <string.h>
int main()
{
	char alp;
	char str[80];
	int i,count=0;
	printf("Test Data :\n");
	printf("Input the string : ");
	gets(str);
	printf("Input the character to find frequency: ");
	scanf("%c",&alp);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i] == alp)
		count++;
	}
	printf("%d",count);
	return 0;
}
