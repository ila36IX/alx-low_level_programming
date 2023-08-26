# Singly linked lists
![](https://media.tenor.com/fAuO9yYP9PIAAAAd/bob-odenkirk-saul-goodman.gif)
## What What on Earth is linked list?
**Linked List**: It's a data structure where elements, called nodes, are connected in a linear sequence. Each node contains data and a reference (usually a pointer) to the next node, forming a chain-like structure.

## What is node
Here's a simple example of node syntax in C
```
struct Node {
    int data;          // Data stored in the node
    struct Node* next; // Pointer to the next node
};
```
A node is a basic building block. It consists of two parts: 
- **data :** Stores the actual information you want to store
- **Reference :**(often a pointer) points to the next node in the linked list.

## Initialize a singly linked list
1. Start with a pointer to the head of the list, which initially should be set to `NULL` to indicate an empty list. 
```
struct Node* head = NULL;
struct Node* second = NULL;
struct Node* third = NULL;
```
2. Add nodes to the list as necessary using dynamic memory allocation (usually malloc)
```
head = malloc(sizeof(struct Node));
second = malloc(sizeof(struct Node));
third = malloc(sizeof(struct Node));
```
3. Linking them together using the next pointers
```
head->data = 1;
head->next = second;

second->data = 2;
second->next = third;

third->data = 3;
third->next = NULL; // Indicate the end of the list
```
## Print linked list
```
void printLinkedList(struct Node* head) {
    struct Node* current = head;

    while (current != NULL) {
        printf("%d \n ", current->data);
        current = current->next;
    }
}
```
## Arrays vs Linked lists
![](https://media.geeksforgeeks.org/wp-content/uploads/20220525085238/Screenshot20220525085154.png)
