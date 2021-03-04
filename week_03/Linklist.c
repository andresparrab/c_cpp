#include <stdio.h>
// To be able to have a pointer inside struct that points to itself
// it needs to have the name after struct in the typedef
typedef struct node
{
    // here is the DATA, we can have how many vars as we want
    int val;
    // here we make a pointer of type node with name next
    // this will point to the next element of type node
    struct node *next;
} node_t;

void printList(node_t *head)
{
    node_t *current = head;
    while (current != NULL)
    {
        printf("%d\n", current->val);
        current = current->next;
    }
}

void addToList(node_t *head, node_t *lastNode)
{
    node_t *current = head;
    while (current->next != NULL)
    {
        // printf("%d\n", current->val);
        current = current->next;
    }
    current->next = lastNode;
}
int main()
{
    node_t head;
    node_t mySecondNode;
    node_t myThirdNode;
    node_t myFourthNode = {.val = 4, .next = NULL};
    head.val = 1;
    mySecondNode.val = 2;
    myThirdNode.val = 3;
    head.next = NULL;
    mySecondNode.next = NULL;
    myThirdNode.next = NULL;

    head.next = &mySecondNode;
    mySecondNode.next = &myThirdNode;

    printf("before ADD: \n");
    printList(&head);
    printf("After ADD: \n");
    addToList(&head, &myFourthNode);
    printList(&head);

    return 0;
}