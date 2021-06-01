#include <cstdio>
#include <cstdlib>
#include <queue>
#include <algorithm>
using namespace std;

void PrintList(int list[]) {
	int size = list[0];
	printf("size:%d   [", size);
	for (int i = 1; i <= size; ++i) {
		printf("%5d ", list[i]);
	}
	printf("]\n");
}
void Swap(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}

void Push_heap(int list[]) {
	int size = ++list[0];
	int child = size;
	int parent = child / 2;
	while (child > 1) {
		if (list[parent] < list[child])
			Swap(list[parent], list[child]);
		else
			break;
		child = parent;
		parent = child / 2;

	}

}
void Make_heap(int list[], int size) {
	for (int i = 0; i < size; ++i) {
		Push_heap(list);
	}
}
void Pop_heap(int list[]) {
	int size = --list[0];
	Swap(list[1], list[size + 1]);
	int parent = 1;
	int child = parent * 2;

	while (child <= size) {
		if (child < size && list[child] < list[child + 1])
			child = child + 1;

		if (list[parent] < list[child])
			Swap(list[parent], list[child]);
		else
			break;
		parent = child;
		child = parent * 2;

	}

}
void Sort_heap(int list[],int size) {
	for (int i = 0; i < size; ++i) {
		Pop_heap(list);
	}

	for (int i = 1; i < size; ++i)
		printf("%5d", list[i]);
	printf("\n");
}
int main() {
	int list[10] = { 0, 50,60,30,10,20,90,70,58 };
	//int list[10] = { 5, 60,50,30,10,20,90,70,58 };

	PrintList(list);
	Make_heap(list, 8);

	Sort_heap(list, 8);
	PrintList(list);

	for (int i = 1; i <= 8; ++i) {
		printf("%5d ", list[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}


//#include <cstdio>
//#include <cstdlib>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[]) {
//	int size = list[0];
//	printf("size:%d   [", size);
//	for (int i = 1; i <= size; ++i) {
//		printf("%5d ", list[i]);
//	}
//	printf("]\n");
//}
//void Swap(int& a, int& b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//
//void Push_heap(int list[]) {
//	int size = ++list[0];
//	int child = size;
//	int parent = child / 2;
//	while (child > 1) {
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//
//	}
//
//}
//void Make_heap(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		Push_heap(list);
//	}
//}
//void Pop_heap(int list[]) {
//	int size = --list[0];
//	Swap(list[1], list[size + 1]);
//	int parent = 1;
//	int child = parent * 2;
//	
//	while (child <= size) {
//		if (child < size && list[child] < list[child + 1])
//			child = child + 1;
//
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		parent = child;
//		child = parent * 2;
//
//	}
//
//}
//
//int main() {
//	int list[10] = { 0, 50,60,30,10,20,90,70,58 };
//	//int list[10] = { 5, 60,50,30,10,20,90,70,58 };
//
//	PrintList(list);
//	Make_heap(list, 8);
//
//	Pop_heap(list);
//	Pop_heap(list);
//	Pop_heap(list);
//	Pop_heap(list);
//	Pop_heap(list);
//	Pop_heap(list);
//	Pop_heap(list);
//	Pop_heap(list);
//	PrintList(list);
//
//	for (int i = 1; i <= 8; ++i) {
//		printf("%5d ", list[i]);
//	}
//	printf("\n");
//
//	system("pause");
//	return 0;
//}


//#include <cstdio>
//#include <cstdlib>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[]) {
//	int size = list[0];
//	printf("size:%d   [", size);
//	for (int i = 1; i <= size; ++i) {
//		printf("%5d ", list[i]);
//	}
//	printf("]\n");
//}
//void Swap(int& a, int& b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//
//void Push_heap(int list[]) {
//	int size = ++list[0];
//	int child = size;
//	int parent = child / 2;
//	while (child > 1) {
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//
//	}
//
//}
//void Make_heap(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		Push_heap(list);
//	}
//}
//void Pop_heap(int list[]) {
//	int size = --list[0];
//	Swap(list[1], list[size+1]);
//	int parent = 1; 
//	int child = parent * 2;
//	while (parent < size) {
//		if (list[child] < list[child + 1])
//			child = child + 1;
//		
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		parent = child;
//		child = parent * 2;
//
//	}
//
//}
//
//int main() {
//	int list[10] = { 0, 50,60,30,10,20,90,70,58 };
//	//int list[10] = { 5, 60,50,30,10,20,90,70,58 };
//
//	PrintList(list);
//	Make_heap(list, 8);
//	Pop_heap(list);
//	PrintList(list);
//
//	system("pause");
//	return 0;
//}


//#include <cstdio>
//#include <cstdlib>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[]) {
//	int size = list[0];
//	printf("size:%d   [", size);
//	for (int i = 1; i <= size; ++i) {
//		printf("%5d ", list[i]);
//	}
//	printf("]\n");
//}
//void Swap(int& a, int& b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//
//void Push_heap(int list[]) {
//	int size = ++list[0];
//	int child = size;
//	int parent = child / 2;
//	while (child > 1) {
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//
//	}
//
//}
//void Make_heap(int list[],int size) {
//	for (int i = 0; i < size; ++i) {
//		Push_heap(list);
//	}
//}
//int main() {
//	int list[10] = { 0, 50,60,30,10,20,90,70,58 };
//	//int list[10] = { 5, 60,50,30,10,20,90,70,58 };
//
//	PrintList(list);
//	Make_heap(list,8);
//	PrintList(list);
//
//	system("pause");
//	return 0;
//}

//#include <cstdio>
//#include <cstdlib>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[]) {
//	int size = list[0];
//	printf("size:%d   [", size);
//	for (int i = 1; i <= size; ++i) {
//		printf("%5d ", list[i]);
//	}
//	printf("]\n");
//}
//void Swap(int& a, int& b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//
//void Push_heap(int list[]) {
//	int size = ++list[0];
//	int child = size;
//	int parent = child / 2;
//	while (child > 1) {
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//
//	}
//
//}
//int main() {
//	int list[10] = { 0, 50,60,30,10,20,90,70,58 };
//	//int list[10] = { 5, 60,50,30,10,20,90,70,58 };
//
//	PrintList(list);
//	Push_heap(list);
//	Push_heap(list);
//	Push_heap(list);
//	Push_heap(list);
//	Push_heap(list);
//	Push_heap(list);
//	Push_heap(list);
//	Push_heap(list);
//	PrintList(list);
//
//	system("pause");
//	return 0;
//}

//#include <cstdio>
//#include <cstdlib>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[]) {
//	int size = list[0];
//	printf("size:%d   [", size);
//	for (int i = 1; i <= size; ++i) {
//		printf("%5d ", list[i]);
//	}
//	printf("]\n");
//}
//void Swap(int& a, int& b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//
//void Push_heap(int list[]) {
//	int size = ++list[0];
//	int child = size;
//	int parent = child / 2;
//	while (child >1) {
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2; 
//		
//	}
//
//}
//int main() {
//	//int list[10] = { 50,60,30,10,20,90,70,58 };
//	int list[10] = { 5, 60,50,30,10,20,90,70,58 };
//
//	PrintList(list);
//	Push_heap(list);
//	PrintList(list);
//
//	system("pause");
//	return 0;
//}

//#include <cstdio>
//#include <cstdlib>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[]) {
//	int size = list[0];
//	printf("size:%d   [", size);
//	for (int i = 1; i <= size; ++i) {
//		printf("%5d ", list[i]);
//	}
//	printf("]\n");
//}
//void Swap(int& a, int& b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//
//void Push_heap(int list[]) {
//	int size = ++list[0];
//	int child = size;
//	int parent = child / 2;
//	while (1) {
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//	}
//
//}
//int main() {
//	//int list[10] = { 50,60,30,10,20,90,70,58 };
//	int list[10] = { 5, 60,50,30,10,20,90,70,58 };
//
//	PrintList(list);
//	Push_heap(list);
//	PrintList(list);
//
//
//	system("pause");
//	return 0;
//}


//#include <cstdio>
//#include <cstdlib>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[]) {
//	int size = list[0];
//	printf("size:%d   [", size);
//	for (int i = 1; i <= size; ++i) {
//		printf("%5d ", list[i]);
//	}
//	printf("]\n");
//}
//
//int main() {
//	//int list[10] = { 50,60,30,10,20,90,70,58 };
//	int list[10] = { 5, 60,50,30,10,20,90,70,58 };
//
//	PrintList(list);
//
//	system("pause");
//	return 0;
//}


//#include <cstdio>
//#include <cstdlib>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d ", list[i]);
//	}
//	printf("\n");
//}
//class Priority_queue {
//	int list[10];
//	int size = 0;
//public:
//	Priority_queue() : size(0) {}
//	void push(int data) {
//		list[size++] = data;
//		push_heap(list, list + size);
//	}
//	int top() {
//
//		return list[0];
//	}
//	void pop() {
//		pop_heap(list, list + size);
//		--size;
//	}
//};
//
//int main() {
//
//	Priority_queue pq;
//	pq.push(50);
//	pq.push(60);
//	pq.push(30);
//	pq.push(10);
//	pq.push(20);
//	pq.push(90);
//	pq.push(70);
//	pq.push(58);
//
//	printf("%5d\n", pq.top());
//	pq.pop();
//	printf("%5d\n", pq.top());
//	pq.pop();
//	printf("%5d\n", pq.top());
//	pq.pop();
//	printf("%5d\n", pq.top());
//	pq.pop();
// 	printf("%5d\n", pq.top());
//	pq.pop();
//	printf("%5d\n", pq.top());
//	pq.pop();
//	printf("%5d\n", pq.top());
//	pq.pop();
//	printf("%5d\n", pq.top());
//	pq.pop();
//
//	system("pause");
//	return 0;
//}


//#include <cstdio>
//#include <cstdlib>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d ", list[i]);
//	}
//	printf("\n");
//}
//int main() {
//
//	//int list[10] = { 50,60,30,10,20,90,70,58 };
//	//int size = 8;
//	//PrintList(list, size);
//	//make_heap(list, list + size); //make_heap은 push_heap을 자료 개수만큼 수행 하게 만들어짐
//	//PrintList(list, size);
//	//sort_heap(list, list + size); //sort는 heap을 pop을 하다보면 sort가 됨 
//	//size = 0;
//	//PrintList(list, 8);
//
//	priority_queue<int> pq;
//	pq.push(50);
//	pq.push(60);
//	pq.push(30);
//	pq.push(10);
//	pq.push(20);
//	pq.push(90);
//	pq.push(70);
//	pq.push(58);
//
//	printf("%5d\n", pq.top());
//	pq.pop();
//	printf("%5d\n", pq.top());
//	pq.pop();
//	printf("%5d\n", pq.top());
//	pq.pop();
//
//
//	system("pause");
//	return 0;
//}

//#include <cstdio>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d ", list[i]);
//	}
//	printf("\n");
//}
//int main() {
//
//	int list[10] = { 50,60,30,10,20,90,70,58 };
//	int size = 8;
//	PrintList(list, size);
//	make_heap(list, list + size); //make_heap은 push_heap을 자료 개수만큼 수행 하게 만들어짐
//	PrintList(list, size);
//	sort_heap(list, list + size); //sort는 heap을 pop을 하다보면 sort가 됨 
//	size = 0;
//	PrintList(list, 8);
//
//
//	system("pause");
//	return 0;
//}


//#include <cstdio>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d ", list[i]);
//	}
//	printf("\n");
//}
//int main() {
//
//	int list[10] = { 50,60,30,10,20,90,70,58 };
//	int size = 8;
//	PrintList(list, size);
//	make_heap(list, list + size); //make_heap은 push_heap을 자료 개수만큼 수행 하게 만들어짐
//	PrintList(list, size);
//	pop_heap(list, list + size);
//	--size;
//
//	pop_heap(list, list + size);
//	--size;
//
//	pop_heap(list, list + size);
//	--size;
//
//	pop_heap(list, list + size);
//	--size;
//
//	pop_heap(list, list + size);
//	--size;
//
//	pop_heap(list, list + size);
//	--size;
//
//	pop_heap(list, list + size);
//	--size;
//
//	PrintList(list, 8);
//
//	system("pause");
//	return 0;
//}

//#include <cstdio>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d ", list[i]);
//	}
//	printf("\n");
//}
//int main() {
//
//	int list[10] = { 50,60,30,10,20,90,70,58 };
//	int size = 0;
//	PrintList(list, size);
//	//make_heap(list, list + size);
//	++size;
//	push_heap(list, list + size);
//	PrintList(list, size);
//
//	++size;
//	push_heap(list, list + size);
//	PrintList(list, size);
//
//	++size;
//	push_heap(list, list + size);
//	PrintList(list, size);
//
//	++size;
//	push_heap(list, list + size);
//	PrintList(list, size);
//
//	++size;
//	push_heap(list, list + size);
//	PrintList(list, size);
//
//	++size;
//	push_heap(list, list + size);
//	PrintList(list, size);
//
//	++size;
//	push_heap(list, list + size);
//	PrintList(list, size);
//
//	++size;
//	push_heap(list, list + size);
//	PrintList(list, size);
//
//
//	system("pause");
//	return 0;
//}


//#include <cstdio>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d ", list[i]);
//	}
//	printf("\n");
//}
//int main() {
//
//	int list[10] = { 50,60,30,10,20,90,70,58 };
//	int size = 8;
//	PrintList(list, size);
//	//make_heap(list, list + size);
//	push_heap(list, list+1);
//	PrintList(list, 1);
//	push_heap(list, list + 2);
//	PrintList(list, 2);
//	push_heap(list, list + 3);
//	PrintList(list, 3);
//	push_heap(list, list + 4);
//	PrintList(list, 4);
//	push_heap(list, list + 5);
//	PrintList(list, 5);
//	push_heap(list, list + 6);
//	PrintList(list, 6);
//	system("pause");
//	return 0;
//}


//#include <cstdio>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d ", list[i]);
//	}
//	printf("\n");
//}
//int main() {
//
//	int list[10] = { 50,60,30,10,20,90,70,58 };
//	int size = 8;
//	PrintList(list, size);
//	make_heap(list, list + size);
//	PrintList(list, size);
//	system("pause");
//	return 0;
//}
