#include <cstdio>
#include <cstdlib>
struct Node {

	int data;
	Node* link;
};
Node* AllocNode(int data) {

	Node* p = new Node;
	p->data = data;
	p->link = NULL;

	return p;
}
void AddNode(Node*& head, int data) {
	if (head == NULL)
		head = AllocNode(data);
	else {
		Node* tail;
		for (tail = head; tail->link != NULL; tail = tail->link)
			;
		tail->link = AllocNode(data);
	}
}
void PrintNode(Node* head) {
	for (Node* p = head; p != NULL; p = p->link)
		printf("%d\n", p->data);
}
int main() {

	Node* head = NULL;
	AddNode(head, 10);
	AddNode(head, 20);
	AddNode(head, 30);
	AddNode(head, 40);
	AddNode(head, 50);

	PrintNode(head);

	system("pause");
}

//#include <cstdio>
//#include <cstdlib>
//struct Node {
//
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data) {
//
//	Node* p = new Node;
//	p->data = data;
//	p->link = NULL;
//
//	return p;
//}
//void AddNode(Node*& head, int data) {
//	if (head ==NULL)
//	head = AllocNode(data);
//	else {
//		Node* tail;
//		for (tail = head; tail->link != NULL; tail = tail->link)
//			;
//		tail->link = AllocNode(data);
//	}
//}
//void PrintNode(Node* head) {
//	for (Node* p = head; p != NULL; p = p->link)
//		printf("%d\n",p->data);
//}
//int main() {
//	Node* head = NULL;
//	AddNode(head, 10);
//	AddNode(head, 20);
//	AddNode(head, 30);
//	AddNode(head, 40);
//	AddNode(head, 50);
//	PrintNode(head);
//	system("pause");
//}