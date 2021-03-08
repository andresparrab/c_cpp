#include <stdio.h>  //printf
#include <stdlib.h> // malloc, free

// Create type treenode
typedef struct treenode
{
    int value;              // this is the data
    struct treenode *left;  // this point to itself but name of the pointer is right
    struct treenode *right; // this point to itself but name of the pointer is left

} treenode;

// Function for creatin a node
treenode *createnode(int value)                  // this create a pointer function called createnode that
{                                                // holds the MEM ADRESS of the function itself
    treenode *result = malloc(sizeof(treenode)); // allocate space in the heap mem for a treenode
    if (result != NULL)
    {
        result->left = NULL;   //set the pointer to Null
        result->right = NULL;  //set the pointer to Null
        result->value = value; //set the pointer to Null
    }
    return result;
}

// this creates a function called printTree that prints the whole tree
void printTree(treenode *root)
{
    if (root == 0)
    {
        printf("---<empty>---\n");
        return;
    }
    // printing in preorder data, print the data of the node first
    // followed by the left subtree and then follow by the right suttree
    printf("value = %d\n", root->value);
    printf("left\n");
    // This swill alwayl look to the left untils is null; if null then jump out of the function
    // and continue with the next line after the function.
    printTree(root->left); // here we send the new notree pointer that is n1->left = n2; //11
    printf("right\n");
    printTree(root->right); // here we send the new notree pointer that is n1->left = n2;  //11
    printf("done\n");
}

int main()
{
    //Create separate treenodes, not connected
    treenode *n1 = createnode(10); // create a new treenode pointer with the value of 10
    treenode *n2 = createnode(11); // create a new treenode pointer with the value of 11
    treenode *n3 = createnode(12); // create a new treenode pointer with the value of 12
    treenode *n4 = createnode(13); // create a new treenode pointer with the value of 12
    treenode *n5 = createnode(14); // create a new treenode pointer with the value of 13
    treenode *n6 = createnode(15); // create a new treenode pointer with the value of 14

    // To connect the nodes we have to choose our root, in this case n1
    n1->left = n2;  //11
    n1->right = n3; //12
    n3->left = n4;  //13
    n3->right = n5; //14
    n2->right = n6; //15

    printTree(n1);
    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);
    free(n6);

    return 0;
}