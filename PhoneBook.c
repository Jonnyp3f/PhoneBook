#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// define a structure for the data
typedef struct{
	char fname[30];
	char lname[30];
	char phoneNumber[30];
}NodeData;

#include "phonebooktree.h"

int main()
{	
	printf("%s\n"," Welcome To the Phone Book");
	printf("%s\n"," press 1 to add a Contact" );
	printf("%s\n"," press 2 to find a contact by name");
	printf("%s\n"," press 3 to sort contacts and display them");
	printf("%s\n"," press 4 to delete a contact");
	printf("%s\n"," press 5 to save your changes");
	printf("%s\n"," press 0 to exit this application");
		 
	//1 to add 2 to retrieve 3 to sort 4 to delete 5 to save 0 to exit
    while (1)
    {
	int selection=-1;
	scanf("%d", &selection);

	if(selection == 1)
	{
	printf("a contatct is added here");
		//do somthing
	}
	else if (selection == 2)
	{
		printf("somthing");
		//do somthing
	}
	else if (selection == 3)
	{
		//do somthing
	}
	else if (selection == 4)
	{

	}
	else if (selection == 5)
	{

	}
	else if (selection == 0)
	{
	return 0;

	}

	}

