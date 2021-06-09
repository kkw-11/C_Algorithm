#include <cstdio>
#include <cstdlib>
#include <cstring>
void PrintArray(int** arr, int row, int col) {
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
}

int Substring(const char* str1, const char* str2) {

	int row = strlen(str1) + 1;
	int col = strlen(str2) + 1;

	int** arr = new int* [row];

	for (int i = 0; i < row; ++i) {
		arr[i] = new int[col];
	}

	//arr[0] = new int[col];
	//arr[1] = new int[col];
	//arr[2] = new int[col];
	//arr[3] = new int[col];
	//arr[4] = new int[col];
	//arr[5] = new int[col];
	//arr[6] = new int[col];

	/////////////////////////////////
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			arr[i][j] = 0;
		}
	}
	for (int i = 1; i < row; ++i) {
		for (int j = 1; j < col; ++j) {
			
			if (str1[i - 1] == str2[j - 1])
				arr[i][j] = arr[i - 1][j - 1] + 1;
			else
				arr[i][j] = 0;
		}
	}

	PrintArray(arr, row, col);
	int retValue =0;
	for (int i = 1; i < row; ++i) {
		for (int j = 1; j < col; ++j) {

			if (retValue < arr[i][j])
				retValue = arr[i][j];
		}
	}

	
	/////////////////////////////////

	for (int i = 0; i < row; ++i) {
		delete[] arr[i];
	}
	delete[] arr;

	return retValue;
}
int main() {


	//printf("max: %d\n", Max(10, 20));
	printf("Substring:%d\n", Substring("FINISH", "FISH"));
	system("pause");

	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
// 아래코드는 리패토링전 스터디 코드


//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//void PrintArray(int** arr, int row, int col) {
//	for (int i = 0; i < row; ++i) {
//		for (int j = 0; j < col; ++j) {
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int Max(int a, int b) {
//
//	return a > b ? a : b;
//}
//int Subsequence(const char* str1, const char* str2) {
//
//	int row = strlen(str1) + 1;
//	int col = strlen(str2) + 1;
//
//	int** arr = new int* [row];
//
//	for (int i = 0; i < row; ++i) {
//		arr[i] = new int[col];
//	}
//	//arr[0] = new int[col];
//	//arr[1] = new int[col];
//	//arr[2] = new int[col];
//	//arr[3] = new int[col];
//	//arr[4] = new int[col];
//	//arr[5] = new int[col];
//	//arr[6] = new int[col];
//
//	/////////////////////////////////
//	for (int i = 0; i < row; ++i) {
//		for (int j = 0; j < col; ++j) {
//			arr[i][j] = 0;
//		}
//	}
//	for (int i = 1; i < row; ++i) {
//		for (int j = 1; j < col; ++j) {
//			if (str1[i-1] == str2[j-1])
//				arr[i][j] = arr[i - 1][j - 1] + 1;
//			else
//				arr[i][j] = Max(arr[i - 1][j], arr[i][j - 1]);
//		}
//	}
//
//
//
//
//	PrintArray(arr, row, col);
//	int retValue = arr[row - 1][col - 1];
//	/////////////////////////////////
//
//	for (int i = 0; i < row; ++i) {
//		delete[] arr[i];
//	}
//	delete[] arr;
//
//	return retValue;
//}
//int main() {
//
//
//	//printf("max: %d\n", Max(10, 20));
//	printf("Subsequence:%d\n", Subsequence("FINISH", "FISH"));
//	printf("Subsequence:%d\n", Subsequence("ACAYKP", "CAPCAK"));
//	system("pause");
//
//	return 0;
//}

//#include <cstdio>
//#include <cstdlib>
//int Fibonacci(int n,int c1, int c2) {
//
//	int* arr = new int[n + 1];
//
//	arr[0] = c1;
//	arr[1] = c2;
//	for (int i = 2; i <= n; ++i) {
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	int retValue = arr[n];
//
//	delete[] arr;
//
//	return retValue;
//}
//int main() {
//
//
//	printf("fibonacci:%d\n", Fibonacci(4,1,2));
//
//	system("pause");
//	return 0;
//}

//#include <cstdio>
//#include <cstdlib>
//int Fibonacci(int n) {
//
//	int* arr = new int[n + 1];
//
//	arr[0] = 1;
//	arr[1] = 2;
//	for (int i = 2; i <= n; ++i) {
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	int retValue = arr[n];
//
//	delete[] arr;
//
//	return retValue;
//}
//int main() {
//
//
//	printf("fibonacci:%d\n", Fibonacci(4));
//
//	system("pause");
//	return 0;
//}
