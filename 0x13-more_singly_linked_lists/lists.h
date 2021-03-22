#ifndef LISTS_S
#define LISTS_S
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
	
} listint_t;
/*prints all the elements of a listint_t list*/
size_t print_listint(const listint_t *h);
/*counts the number of elements in a linked listint_t list*/
size_t listint_len(const listint_t *h);
/*adds a new node at the beginning of a listint_t list*/
listint_t *add_nodeint(listint_t **head, const int n);
/*adds a new node at the end of a listint_t list*/
listint_t *add_nodeint_end(listint_t **head, const int n);
/*frees a listint_t list*/
void free_listint(listint_t *head);
/*frees a listint_t list*/
void free_listint2(listint_t **head);
/*deletes the head node of a listint_t linked list*/
int pop_listint(listint_t **head);
/*returns the nth node of a listint_t linked list*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/*returns the sum of all the data (n) of a listint_t linked list*/
int sum_listint(listint_t *head);
/*inserts a new node at a given position*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/*deletes the node at index index of a listint_t linked list*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);
#endif
