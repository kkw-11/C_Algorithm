#include <cstdio>
#include <cstdlib>

struct Node {
	int data;
	Node* prev;
	Node* next;
};
class List {
private:
	Node* head;
	Node* tail;

	Node* AllocNode(int data) {

		Node* p = new Node;
		p->data = data;
		p->prev = p->next = NULL;

		return p;
	}

public:

	void AddList(int data) {
		Node* p = AllocNode(data);
		Node* ptail = tail->prev;
		ptail->next = p;
		p->prev = ptail;
		p->next = tail;
		tail->prev = p;
	}

	void PirntNextLst() {

		for (Node* p = head->next; p != tail; p = p->next)
			printf("%d\n", p->data);
	}

	void PrintPrevList() {
		for (Node* p = tail->prev; p != head; p = p->prev)
			printf("%d\n", p->data);

	}
	List() {
		head = AllocNode(0);
		tail = AllocNode(0);
		head->next = tail;
		tail->prev = head;

	}
	~List() {
		for (Node* p = head; p != NULL;) {
			Node* np = p->next;
			delete p;
			p = np;
		}
	}


};
int main() {

	List lt;


	lt.AddList(10);
	lt.AddList(20);
	lt.AddList(30);

	lt.PirntNextLst();

	lt.PrintPrevList();

	system("pause");
}

///////////////////////////////////////////////////////////////////////////////////////
// 아래코드는 리패토링전 스터디 코드


//#include <cstdio>
//#include <cstdlib>
//
//struct Node {
//	int data;
//	Node* prev;
//	Node* next;
//};
//struct List {
//private:
//	Node* head;
//	Node* tail;
//	
//	Node* AllocNode(int data) {
//
//		Node* p = new Node;
//		p->data = data;
//		p->prev = p->next = NULL;
//
//		return p;
//	}
//
//public:
//
//	void AddList(int data) {
//		Node* p = AllocNode(data);
//		Node* ptail = tail->prev;
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//
//	void PirntNextLst() {
//
//		for (Node* p = head->next; p != tail; p = p->next)
//			printf("%d\n", p->data);
//	}
//
//	void PrintPrevList() {
//		for (Node* p = tail->prev; p != head; p = p->prev)
//			printf("%d\n", p->data);
//
//	}
//	void InitList() {
//		head = AllocNode(0);
//		tail = AllocNode(0);
//		head->next = tail;
//		tail->prev = head;
//
//	}
//	void UninitList() {
//		for (Node* p = head; p != NULL;) {
//			Node* np = p->next;
//			delete p;
//			p = np;
//		}
//	}
//};
//int main() {
//
//	List lt;
//
//	lt.InitList();
//
//	lt.AddList(10);
//	lt.AddList(20);
//	lt.AddList(30);
//
//	lt.PirntNextLst();
//
//	lt.PrintPrevList();
//	lt.UninitList();
//
//	system("pause");
//}


//#include <cstdio>
//#include <cstdlib>
//
//struct Node {
//	int data;
//	Node* prev;
//	Node* next;
//};
//struct List {
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data) {
//
//	Node* p = new Node;
//	p->data = data;
//	p->prev = p->next = NULL;
//
//	return p;
//}
//void AddList(List& lt, int data) {
//	Node* p = AllocNode(data);
//	Node* ptail = lt.tail->prev;
//	ptail->next = p;
//	p->prev = ptail;
//	p->next = lt.tail;
//	lt.tail->prev = p;
//}
//
//void PirntNextLst(List& lt) {
//
//	for (Node* p = lt.head->next; p != lt.tail; p = p->next)
//		printf("%d\n", p->data);
//}
//
//void PrintPrevList(List& lt) {
//	for (Node* p = lt.tail->prev; p != lt.head; p = p->prev)
//		printf("%d\n", p->data);
//
//}
//void InitList(List& lt) {
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//
//}
//void UninitList(List& lt) {
//	for (Node* p = lt.head; p != NULL;) {
//		Node* np = p->next;
//		delete p;
//		p = np;
//	}
//}
//
//int main() {
//
//	List lt;
//
//	InitList(lt);
//
//
//	AddList(lt, 10);
//	AddList(lt, 20);
//	AddList(lt, 30);
//
//	PirntNextLst(lt);
//
//	PrintPrevList(lt);
//	UninitList(lt);
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
//struct List {
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data) {
//
//	Node* p = new Node;
//	p->data = data;
//	p->prev = p->next = NULL;
//
//	return p;
//}
//void AddNode(List& lt, int data) {
//	Node* p = AllocNode(data);
//	Node* ptail = lt.tail->prev;
//	ptail->next = p;
//	p->prev = ptail;
//	p->next = lt.tail;
//	lt.tail->prev = p;
//}
//
//void PirntNextLst(List& lt) {
//	printf("%d\n", lt.head->next->data);
//	printf("%d\n", lt.head->next->next->data);
//	printf("%d\n", lt.head->next->next->next->data);
//}
//
//void PrintPrevList(List& lt) {
//	printf("%d\n", lt.tail->prev->data);
//	printf("%d\n", lt.tail->prev->prev->data);
//	printf("%d\n", lt.tail->prev->prev->prev->data);
//}
//int main() {
//
//	List lt;
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//
//
//	AddNode(lt, 10);
//	AddNode(lt, 20);
//	AddNode(lt, 30);
//
//	PirntNextLst(lt);
//
//	PrintPrevList(lt);
//
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
//void AddNode(Node* head, Node* tail, int data) {
//	Node* p = AllocNode(data);
//	Node* ptail = tail->prev;
//	ptail->next = p;
//	p->prev = ptail;
//	p->next = tail;
//	tail->prev = p;
//}
//int main() {
//
//	Node* head = AllocNode(0);
//	Node* tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//
//
//	AddNode(head, tail, 10);
//	AddNode(head, tail, 20);
//	AddNode(head, tail, 30);
//
//	printf("%d\n", head->next->data);
//	printf("%d\n", head->next->next->data);
//	printf("%d\n", head->next->next->next->data);
//
//	printf("%d\n", tail->prev->data);
//	printf("%d\n", tail->prev->prev->data);
//	printf("%d\n", tail->prev->prev->prev->data);
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
//	Node* head = AllocNode(0);
//	Node* tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//
//
//	Node* p = AllocNode(10);
//	Node* ptail = tail->prev;
//	ptail->next = p;
//	p->prev = ptail;
//	p->next = tail;
//	tail->prev = p;
//
//
//	p = AllocNode(20);
//	ptail = tail->prev;
//	ptail->next = p;
//	p->prev = ptail;
//	p->next = tail;
//	tail->prev = p;
//
//	p = AllocNode(30);
//	ptail = tail->prev;
//	ptail->next = p;
//	p->prev = ptail;
//	p->next = tail;
//	tail->prev = p;
//
//	printf("%d\n", head->next->data);
//	printf("%d\n", head->next->next->data);
//	printf("%d\n", head->next->next->next->data);
//
//	printf("%d\n", tail->prev->data);
//	printf("%d\n", tail->prev->prev->data);
//	printf("%d\n", tail->prev->prev->prev->data);
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
