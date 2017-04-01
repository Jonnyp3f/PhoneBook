#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// define a structure for the data
typedef struct{
	char[30] fname;
	char[30] lname;
	char[16] phoneNumber;
}NodeData;

// define the treenode
typedef struct treeNode{
	NodeData data;
	struct treeNode *left,*right;
}TreeNode,*TreeNodePtr;

// define the BinaryTree 
typedef struct{
	TreeNodePtr root;
}BinaryTree;


BinaryTree add(root)
{
	 char[30] fname;
	 char[30] lname;
	 char [16] phoneNumber;

	TreeNodePtr p = (TreeNodePtr) malloc(sizeof(TreeNode));
	p.fname -> fname;
	p.lname -> lname;
	p.left -> NULL;
	p.right -> NULL;
	if (p == NULL){
		return p;
	}
	if(phoneNum> p.phoneNumber)
	{
		p.left add(p.left
	}



}
/*
Algorithm add(R, fname, lname, phonenumber)	
	Input Binary Tree root R and strings fname, lname, phone number
	Output Binary Tree with phone entry containing the strings added
	node <--- allocating memory for node	
	node->lname <--- lname	
	node->num <--- phonenumber	
	node->left <--- NULL	
	node->right <--- NULL	
	if R = NULL then	
		return node
	if str < phone number member of R
		left member of R <--- add(left member of R, str)		
	else
		right member of R <--- add(right member of R, str)	
	return R

*/


/*
Algorithm delete(R, str)
	Input Binary tree root R and a string str
	Output Binary tree root with node containing str deleted
	if root = NULL then
		return NULL
	endif
	if str < num member of pointer R then
		delete(left member of pointer R, str)
	elseif str > num member of pointer R then
		delete(right member of pointer R, str)
	else
		if left member of pointer R = NULL AND right member of pointer R = NULL then  
			free(root)
			return NULL
		elseif left member of pointer R = NULL then   
			temp <-- pointer R
			R <-- right member of pointer 
			free(temp)
		elseif right member of pointer R = NULL then 
			temp <-- pointer R
			R <-- left member of pointer 
			free(temp)
		else
			max <-- NULL
			temp <--- left member of pointer R
			while  right member of temp != NULL
				temp <--- right member of temp
			endwhile
			max <-- temp
			name member of R <-- name member of max
			phone number member of max <-- phone number of max
			delete(left member of R, string member of max)
		endif
	endif
return R
*/

/*Algorithm write(txt, R)
	Input A text file txt to write to and binary tree root R
	Output Text file containing binary tree contents
	
	fp <--- open txt file for writing
	if fp = NULL then
		PRINT file does not exist
		EXIT
	
	PostOrderTraversalWrite(fp, R)
	close(fp)
	return;
	
Algorithm PostOrderTraversalWrite(fp, R)
	Input A text file stream fp and binary tree R
	Output Text file containing binary tree contents
	if R = NULL
		return;
			
	PostOrderTraversalWrite(fp, left member of R)
	PostOrderTraversalWrite(fp, right member of R)
	fprintf(fp, "%s %s %s", fname member of R, lname member of R, num member of here)
*/

/*

Algorithm load(txt, R)
	Input txt file address to load data from and binary tree root R
	Output Binary Tree R with data loaded from File fp
	
	fp <--- open txt file to read
	if fp = NULL then
		PRINT file does not exist
	EXIT
	
	tmpfname <-- a char array
	tmplname <--- a char array
	tmpnum <--- a char array
	
	buffer <--- a char array
	
	while not EOF 
		node <--- allocate memory for node
		node->fname <--- tmpfname
		node->lname <--- tmplname
		node->num <--- tmpphonenumber
		node->left <--- NULL
		node->right <--- NULL
		R <--- add(root member of R, node)
		
	return R
*/

/*
Algorithm sort(R, val)
	Input  Binary tree root R and integer val indicating type of attribute to sort
	Output Sorted Binary tree R and display its contents
	
	newR <-- a new empty Binary Tree root
	if (type of attribute member of R != val)
		getSortedTree(R, newR)
	InOrderTraversal(newR)
	return newR
	
Algorithm InOrderTraversal(R)
	Input Binary Tree R
	Output Displaying contents of Binary Tree R
		if R = NULL
			return;
			
		InOrderTraversal(fp, left member of R)
		InOrderTraversal(fp, right member of R)
		printf("%s %s %s", fname member of R, lname member of R, num member of here)	
*/
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
return 0;
}
