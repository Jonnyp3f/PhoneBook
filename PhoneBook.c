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
//TODO: Fix menu so user can choose which attribute of the Node Data cacan be searched for, deleted for 
//TODO: implement sorting algorithm so other functions can work optimallyi

//program onlys takes formmatted input so far -- need add validation later

int main(){
    
    int selection = -1;


    BinaryTree bt;
    bt.root = NULL;
    bt.type = 1;   //used to see how binary tree is sorted (i.e. 1= lname, 2 = fname etc)

	char fname[30];
	char lname[30];
	char phoneNumber[30];
    
    char buffer[100]; //used to store user input and then formatted later
    
    do {
        printf("====================================\n");
        printf("Welcome To the Phone Book\n");
        printf("Press 1 to add a Contact\n");
        printf("Press 2 to find a contact by name\n");
        printf("Press 3 to sort contacts and display them\n");
        printf("Press 4 to delete a contact\n");
        printf("Press 5 to save your changes\n");
        printf("Press 6 to load from file\n");
        printf("Press 0 to exit this application\n");
        printf("===================================\n");
       
        printf("\nEnter your selection: ");
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer,"%d", &selection);
      
        if (selection > -1 && selection < 7){ 
            switch(selection){
                case 1: 
                    
                    
                    printf("Enter first name: ");
                    fgets(fname, 29, stdin); 
                    printf("Enter last name: ");
                    fgets(lname, 29, stdin);
                    printf("Enter phone number: ");
                    fgets(phoneNumber, 29, stdin);
        
                    bt.root = add(fname, lname, phoneNumber, bt.root);
                    break;
                case 2:
                    printf("Enter last name to search for: ");
                    fgets(lname, 29, stdin);
            
                    TreeNodePtr searchNode = retrieve(lname, bt.root);
                    
                    if (searchNode == NULL)
                        printf("Contact was not found.\n");
                    else {
                        printf("Contact was found.\n");
                        printf("\nFirst name: %sLast Name: %sPhone Number: %s", searchNode->data.fname, searchNode->data.lname, searchNode->data.phoneNumber);
                        break;
                    }
                case 3:
                    //TODO sort
                    break;
                case 4: 
                    //TODO delete
                    break;
                case 5:
                    //TODO save
                    break;
                case 6: 
                    //TODO load
                    break;
            }
            printf("\n");
        } else {
            printf("Selection must be between 0 and 6\n");
        }
    }while(selection != 0);
        
    printf("Phone book is closed.\n");    
    return 0;
} 
