#include <cstdio>
#include <cstdlib>
struct Node {
	int data;
	Node* prev;
	Node* next;
};

Node* AllocNode(int data) {

	Node* p = new Node;
	p->data = data;
	p->prev = p->next = NULL;

	return p;
}
int main() {

	Node* head = AllocNode(0);
	Node* tail = AllocNode(0);
	head->next =tail;
	tail->prev = head;


	Node* p = AllocNode(10);
	head = tail = p;

	p = AllocNode(20);
	tail->next = p;
	p->prev = tail;
	tail = p;

	p = AllocNode(30);
	tail->next = p;
	p->prev = tail;
	tail = p;

	printf("%d\n", head->data);
	printf("%d\n", head->next->data);
	printf("%d\n", head->next->next->data);

	printf("%d\n", tail->data);
	printf("%d\n", tail->prev->data);
	printf("%d\n", tail->prev->prev->data);

	system("pause");
}


//#include <cstdio>
//#include <cstdlib>
//struct Node {
//	int data;
//	Node* prev;
//	Node* next;
//};
//
//Node* AllocNode(int data) {
//
//	Node* p = new Node;
//	p->data = data;
//	p->prev = p->next = NULL;
//
//	return p;
//}
//int main() {
//
//	Node* head = NULL;
//	Node* tail = NULL;
//
//	Node* p = AllocNode(10);
//	head = tail = p;
//
//	p = AllocNode(20);
//	tail->next = p;
//	p->prev = tail;
//	tail = p;
//
//	p = AllocNode(30);
//	tail->next = p;
//	p->prev = tail;
//	tail = p;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->next->data);
//	printf("%d\n", head->next->next->data);
//
//	printf("%d\n", tail->data);
//	printf("%d\n", tail->prev->data);
//	printf("%d\n", tail->prev->prev->data);
//
//	system("pause");
//}


//#include <cstdio>
//#include <cstdlib>
//struct Node {
//	int data;
//	Node* prev;
//	Node* next;
//};
//
//Node* AllocNode(int data) {
//	
//	Node* p = new Node;
//	p->data = data;
//	p->prev = p->next = NULL;
//
//	return p;
//}
//int main() {
//
//	Node* head = NULL;
//	Node* tail = NULL;
//
//	Node* p = AllocNode(10);
//	head = tail = p;
//
//	p = AllocNode(20);
//	tail->next = p;
//	p->prev = tail;
//	tail = p;
//
//	p = AllocNode(30);
//	tail->next = p;
//	p->prev = tail;
//	tail = p;
//
//	printf("%d\n",head->data);
//	printf("%d\n",head->next->data);
//	printf("%d\n",head->next->next->data);
//		
//	printf("%d\n", tail->data);
//	printf("%d\n", tail->prev->data);
//	printf("%d\n", tail->prev->prev->data);
//
//	system("pause");
//}


//#include <cstdio>
//#include <cstdlib>
//struct Node {
//	int data;
//	Node* link;
//};
//Node* AllocNode(int data) {
//
//	Node* n = new Node;
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//
//int main() {
//
//	Node n1 = { 10, NULL };
//	Node n2 = { 20 ,NULL };
//	Node n3 = { 30, NULL };
//	Node n4 = { 40, NULL };
//	Node n5 = { 50, NULL };
//
//	Node* head = NULL;
//	head = AllocNode(10);
//	head->link = AllocNode(20);
//	head->link->link = AllocNode(30);
//	head->link->link->link = AllocNode(40);
//	head->link->link->link->link = AllocNode(50);
//
//
//	for (Node* p = head; p != NULL; p = p->link) {
//		printf("%d\n", p->data);
//	}
//
//	system("pause");
//}


//#include <cstdio>
//#include <cstdlib>
//struct Node {
//	int data;
//	Node* link;
//};
//
//int main() {
//
//	Node n1 = { 10, NULL };
//	Node n2 = { 20 ,NULL };
//	Node n3 = { 30, NULL };
//	Node n4 = { 40, NULL };
//	Node n5 = { 50, NULL };
//
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//	Node* head = &n1;
//
//	for (Node* p = head; p != NULL; p = p->link) {
//		printf("%d\n", p->data);
//	}
//
//	system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//struct Node {
//	int data;
//	Node* link;
//};
//
//int main() {
//
//	Node n1 = { 10, NULL };
//	Node n2 = { 20 ,NULL };
//	Node n3 = { 30, NULL };
//	Node n4 = { 40, NULL };
//	Node n5 = { 50, NULL };
//
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//
//	Node* p = &n1;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//
//	system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//struct Node {
//	int data;
//	Node* link;
//};
//
//int main() {
//
//	Node n1 = { 10, NULL };
//	Node n2 = { 20 ,NULL };
//	Node n3 = { 30, NULL };
//	Node n4 = { 40, NULL };
//	Node n5 = { 50, NULL };
//
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//	
//	Node* head = &n1;
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//	printf("%d\n", head->link->link->link->data);
//	printf("%d\n", head->link->link->link->link->data);
//
//	system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//struct Node {
//	int data;
//	Node* link;
//};
//
//int main() {
//
//	Node n1 = { 10, NULL };
//	Node n2 = { 20 ,NULL };
//	Node n3 = { 30, NULL };
//	Node n4 = { 40, NULL };
//	Node n5 = { 50, NULL };
//
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//
//
//	system("pause");
//}