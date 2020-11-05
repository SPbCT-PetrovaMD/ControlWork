#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	FILE* fp1;
	char ch1;
	if ((fp1 = fopen("Eng.txt", "r")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}
	while ((ch1 = fgetc(fp1)) != EOF) {
		printf("%c", ch1);
		printf(" ");
	}
	fclose(fp1);
	
	printf("\n-----------------------------------------\n");

	FILE* fp2;
	char ch2;
	if ((fp2 = fopen("Ru.txt", "r")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}
	while ((ch2 = fgetc(fp2)) != EOF) {
		printf("%c", ch2);
		printf(" ");
	}
	fclose(fp2);

	printf("\n");

	return 0;
}
