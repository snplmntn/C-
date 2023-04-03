//try database
#include<conio.h>
#include<iostream>
#include<stdio.h>


int main(int argc, char *argv[])
{
	
	FILE *pFile;
	char name[30], choice;
	int score,a;
	
	//Open the file
	pFile = fopen("abc.txt", "w");
	
	if (pFile !=NULL)
	{
		while(choice!='n'){
			
			printf("Name: ");
			scanf("%s", &name);
			printf("Score: ");
			scanf("%d", &score);
			
			//store this into database
			
			printf("Are there any students left [y/n]: ");
			scanf("%c", &choice);
		}
		
	}
	else
	{
		printf("Couldn't Open the file");
	}
}