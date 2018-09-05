#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList{

	int value;

	struct LinkedList * next;
} List;

List *list;

void insert_node(List *head, int el, int val){ //insert val after el number of elements

	if (el < 0)
		return;

	if (el == 0){
		List *ins = NULL;

		ins = malloc(sizeof(List));

		ins->value = val;

		if (head == NULL)
			head = ins;
		else
			ins->next = head;

		list = ins;

		return;
	}

	if (head == NULL)
		return;

	for (int i = 0; i < el - 1; i++){
		if (head == NULL)
			return;

		head = head->next;
	}

	List *ins = NULL;
	ins = malloc(sizeof(List));
	ins->value = val;

	ins->next = head->next;
	head->next = ins;
}

void print_list(List *head){ //prints list

	while (head != NULL){

		printf("%d ", head->value);
		head = head->next;
	}
}

void delete(List *head, int el){ //el is index of element to delete

	if (el < 0)
		return;

	if (head == NULL)
		return;

	if (el == 0){
		list = head->next;
		return;
	}

	for (int i = 0; i < el - 1; i++){
		if (head == NULL)
			return;

		head = head->next;
	}

	if (head == NULL)
		return;

	if (head->next != NULL)
		head->next = head->next->next;

}
int main(void) {

	list = NULL;

	insert_node(list, 0, 2);     //it is just an example of working of structure
	insert_node(list, 1, 1);
	insert_node(list, 2, 3);

	print_list(list);

	delete(list, 0);

	printf("\n");
	print_list(list);
}
