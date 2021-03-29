#include <cstdio>
#include <cstdlib>

int main() {

	int* arr = new int[5];
	
	for (int i = 0; i < 5; ++i) {
		arr[i] = 10 * (i + 1);
	}

	for (int i = 0; i < 5; ++i) {
		printf("%d\n", arr[i]);
	}

	delete[] arr;
	system("pause");
}


//#include <cstdio>
//#include <cstdlib>
//void ArrayTest(){
//	int arr[5] = { 10,20,30,40,50 };
//	for (int i = 0; i < 5; ++i) {
//		printf("%d\n", arr[i]);
//	}
//}
//int main() {
//
//	ArrayTest();
//	ArrayTest();
//	ArrayTest();
//
//
//	system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//int main() {
	//int arr[5] = { 10,20,30,40,50 };
	//for (int i = 0; i < 5; ++i) {
	//	printf("%d\n", arr[i]);
	//}
//	system("pause");
//}