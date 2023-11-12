#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Creating the struct
struct Student
{
    char name[50];
    char gender;
    struct Student *next;
};

// Function declarations
struct Student *insertNode(char *name, char gender, struct Student *list);
struct Student *sortList(struct Student *list);
void printList(struct Student *list);

int main()
{
    // Creating Initial Node Variables
    struct Student *head = NULL;
    // Call to functions
    head = insertNode("Cenk", 'M', head);
    head = insertNode("Ceyda", 'F', head);
    head = insertNode("Esra", 'F', head);
    head = insertNode("Okan", 'M', head);
    head = insertNode("Tugce", 'F', head);
    head = insertNode("Mehmet", 'M', head);
    head = insertNode("Ayse", 'F', head);
    head = insertNode("Merve", 'F', head);
    head = insertNode("Sedat", 'M', head);
    head = insertNode("Ahmet", 'M', head);

    // Call to sorting function
    printList(head);
    printf("\n");
    head = sortList(head);
    printList(head);

    return 0;
}

// Function to insert a node at the beginning of the list
struct Student *insertNode(char *name, char gender, struct Student *list)
{
    struct Student *s;
    // Allocate memory for node (malloc operation)
    s = malloc(sizeof(struct Student));
    if (s == NULL)
    {
        printf("Memory allocation failed.");
        exit(EXIT_FAILURE);
    }
    strcpy(s->name, name);
    s->gender = gender;
    s->next = list; // list is the start of the list
    list = s;

    return list;
}

// Sorting function
struct Student *sortList(struct Student *list)
{
    struct Student *maleList = NULL;
    struct Student *femaleList = NULL;

    // Separate male and female students
    while (list != NULL)
    {
        struct Student *temp = list;
        list = list->next;
        temp->next = NULL;

        if (temp->gender == 'F')
        {
            // Insert female student in alphabetical order
            if (femaleList == NULL || strcmp(temp->name, femaleList->name) < 0)
            {
                temp->next = femaleList;
                femaleList = temp;
            }
            else
            {
                struct Student *curr = femaleList;
                while (curr->next != NULL && strcmp(temp->name, curr->next->name) > 0)
                {
                    curr = curr->next;
                }
                temp->next = curr->next;
                curr->next = temp;
            }
        }
        else
        {
            // Insert male student in alphabetical order
            if (maleList == NULL || strcmp(temp->name, maleList->name) < 0)
            {
                temp->next = maleList;
                maleList = temp;
            }
            else
            {
                struct Student *curr = maleList;
                while (curr->next != NULL && strcmp(temp->name, curr->next->name) > 0)
                {
                    curr = curr->next;
                }
                temp->next = curr->next;
                curr->next = temp;
            }
        }
    }

    // Concatenate the two lists
    if (femaleList != NULL)
    {
        list = femaleList;
        while (femaleList->next != NULL)
        {
            femaleList = femaleList->next;
        }
        femaleList->next = maleList;
    }
    else
    {
        list = maleList;
    }

    return list;
}

// Printing function
void printList(struct Student *list)
{
    while (list != NULL)
    {
        printf("%s\t%c\n", list->name, list->gender);
        list = list->next;
    }
}
