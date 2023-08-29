## Inserting a node at the beginning of a linked list
1. Declare a head pointer and make it as `NULL`.
```
listint_t *new_head = NULL;
```
2. Create a new `node` with the given data.
```
new_head = malloc(sizeof(listint_t));

if (new_head == NULL)
    return (NULL);
new_head->n = n;
```
3. Make the new `node` points to the head node
```
new_head->next = *head;
```
4. Finally, make the new `node` as the head node.
```
*head = new_head;
```
### The 4th step... but why ?
For updating the pointer to the head of the linked list `*head` to point to the newly created node `new_head`... but why? Okey let's break down:

1. `*head` is a pointer to a pointer (yeah! I know .. just read it again) to the head of the linked list. It's passed by reference to the function, which means that if you modify what `*head` points to inside the function, it will affect the original pointer to the head of the list outside the function (See the file `2-add_nodeint.c`).
2. `new_head` is a pointer to a `listint_t` structure, which represents a **node** in the linked list. This structure typically has two members: n, which holds the data for the node, and next, which points to the next node in the list.
3. `*head = new_head;` sets the original pointer to the head of the list (`*head` by dereferencing) to point to the newly created node `new_head`. This effectively makes `new_head` the new head of the list, and the old head of the list becomes the second element in the list, linked to `new_head`.
