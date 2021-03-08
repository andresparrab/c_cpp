#include <stdio.h>
#include <stdlib.h>

//YOU MUST USE THIS STRUCT WITHOUT CHANGES TO THE STRUCTURE
typedef struct nod
{
    int value;
    struct nod *left;
    struct nod *right;

} node;

// YOU CAN WRITE ADDITIONAL FUNCTIONS HERE * /
// void insertOriginal(int key, node **leaf)
// {

//     if (*leaf == 0)
//     {
//         *leaf = (node *)malloc(sizeof(node));
//         (*leaf)->value = key;
//         /* initialize the children to null */
//         (*leaf)->left = 0;
//         (*leaf)->right = 0;
//     }
//     else if (key < (*leaf)->value)
//     {
//         insert(key, &(*leaf)->left);
//     }
//     else if (key > (*leaf)->value)
//     {
//         insert(key, &(*leaf)->right);
//     }
// }

node *createnode(int *intArray)

{
    node *result = malloc(sizeof(node)); // dynamic allow mem for struct

    for (int i = 1; i < intArray[0]; i++)
    {
        printf("%d,", intArray[i]);
        if (result != NULL)
        {
            result->left = NULL;
            result->right = NULL;
            result->value = intArray[i];

            return result;
        }
    }
}

// WORKING TEST
// void createnode(int *intArray)
// {
//     for (int i = 1; i < intArray[0]; i++)
//     {
//         printf("%d", intArray[i]);
//     }
// }

// YOU CAN WRITE ADDITIONAL FUNCTIONS HERE * /
// void insert(int key)
// {
//     node *leaf;

//     if (leaf == 0)
//     {
//         leaf = (node *)malloc(sizeof(node));
//         (leaf)->value = key;
//         /* initialize the children to null */
//         (leaf)->left = 0;
//         (leaf)->right = 0;
//     }
//     else if (key < (leaf)->value)
//     {
//         insert(key, (leaf)->left);
//     }
//     else if (key > (leaf)->value)
//     {
//         insert(key, (leaf)->right);
//     }
// }
// This is the given struct node

// node *makeTree(int myArray[])
// {
//     node *root = myArray[1];

//     for (int i = 1; i < (myArray[0] - 1); i++)
//     {
//         insert(myArray[i], &root);
//     }

//     return root;
// }

int main()
{
    //myArray[0] is the size of the array, in this case 10
    // myArray[1] is the root of the tree
    int myArray[] = {10, 8, 3, 1, 6, 4, 7, 10, 14, 13};
    //makeTree(myArray);
    createnode(myArray);
    return 0;
}

// RESULT
// 8
// 3
// 1
// 6
// 4
// 7s
// 10
// 14
// 13

// en otroligt förenklad pseudo-version…
// skapa root (värdet finns ju i arrayn…)
// loopa igenom “resten” av arrayn.
// skapa en ny nod om den inte finns i root.
// finns den så skuttar du vidare och gör kollen vart den ska “placeras” (right / left).
// skapa en ny nod (rekursivt anrop) och peka right / left på den.