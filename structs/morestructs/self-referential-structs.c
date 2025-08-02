#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next; // Pointer to the next node in the list
};

int main(void)
{
    struct node *head;

    // Hackishly set up a linked list (11) -> (22) -> (33)

    head = malloc(sizeof(struct node));
    head->data = 11;
    head->next = malloc(sizeof(struct node));
    head->next->data = 22;
    head->next->next = malloc(sizeof(struct node));
    head->next->next->data = 33;
    head->next->next->next = NULL; // End of the list

    // Traverse it

    for (struct node *curr = head; curr != NULL; curr = curr->next)
    {
        printf("Node data: %d\n", curr->data);
    }
}

struct len_string *len_string_from_c_string(char *s)
{
    int len = strlen(s);
    // Allocate "len" more bytes than we'd normally need
    struct len_string *ls = malloc(sizeof *ls + len);
    ls->length = len;
    // Copy the string into those extra bytes
    memcpy(ls->data, s, len);
    return ls;
}