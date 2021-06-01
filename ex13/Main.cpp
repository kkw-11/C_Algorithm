#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

void PrintList(int list[], int size) {
	for (int i = 0; i < size; ++i) {
		printf("%5d ", list[i]);
	}
	printf("\n");
}
int main() {

	int list[10] = { 50,60,30,10,20,90,70,58 };
	int size = 8;
	PrintList(list, size);
	make_heap(list, list + size);
	PrintList(list, size);
	system("pause");
	return 0;
}
