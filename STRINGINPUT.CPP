#include<stdio.h>
#include<conio.h>
void main()
{
	char c[10];
	clrscr();
	printf("Enter name=");
	scanf("%s",&c);//gets(c);
	switch(c)
	{
		case "umair":
			printf("\nUMAIR");
			break;
		case "mudassar":
			print("\nMUDASSAR");
			break;
		default:
			print("wrong name");
	}
	getch();
}