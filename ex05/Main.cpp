#include <stdio.h>
#include <stdlib.h>

void Fibonacci(int n, int& result) {

	if (n == 1)
		result = 1;
	else if (n == 2)
		result = 2;
	else {
		int f1, f2;
		Fibonacci(n - 1, f1);
		Fibonacci(n - 2, f2);
		result = f1 + f2;

	}

}

int main() {

	int fibo;

	Fibonacci(4, fibo);
	printf("%d\n", fibo);

	system("pause");

	return 0;
}


//#include <stdio.h>
//#include <stdlib.h>
//
//int Fibonacci(int n) {
//	
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//
//}
//
//int main() {
//
//	printf("%d\n", Fibonacci(5));
//
//	system("pause");
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void Factorial(int n, int& result) {
//
//	if (n == 1)
//		result = 1;
//	else {
//		Factorial(n - 1, result);
//		result = n * result;
//
//	}
//}
//
//int main() {
//
//	int fact = 0;
//	Factorial(5, fact);
//	printf("%d\n", fact);
//
//	system("pause");
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void Factorial(int n, int& result) {
//
//	if (n == 1)
//		result = 1;
//	else {
//		int nFact;
//		Factorial(n - 1,nFact);
//		result = n * nFact;
//
//	}
//}
//
//int main() {
//
//	int fact = 0;
//	Factorial(5, fact);
//	printf("%d\n", fact);
//
//	system("pause");
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void Factorial(int n, int& result) {
//
//	result = 100; //fact�� 100�� ���� �ƿ��Ķ���� �̿�
//}
//
//int main() {
//
//	int fact = 0;
//	Factorial(5, fact);
//	printf("%d\n", fact);
//
//	system("pause");
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int Factorial(int n) {
//
//	if (n == 1)
//		return 1;
//	else
//		return n * Factorial(n - 1);
//
//}
//
//int main() {
//
//	printf("%d\n", Factorial(5));
//
//	system("pause");
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void Print(int n) {
//
//	//+�� Ʈ���� ���ϸ� ������鼭
//	//����Լ� �׾ư��� ���
//	printf("+%d\n", n);
//	if (n > 0) {
//		Print(n - 1);
//		Print(n - 1);
//	}
//	//-�� �Ųٷ� �������� ��
//	printf("-%d\n", n);
//
//}
//
//int main() {
//
//	Print(3);
//	system("pause");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void Print(int n) {
//
//	//+�� Ʈ���� ���ϸ� ������鼭
//	//����Լ� �׾ư��� ���
//	printf("+%d\n", n);
//	if (n > 0) {
//		Print(n - 1);
//		Print(n - 1);
//	}
//	//-�� �Ųٷ� �������� ��
//	printf("-%d\n", n);
//
//}
//
//int main() {
//
//	Print(3);
//	system("pause");
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void Print(int n) {
//
//	//+�� Ʈ���� ���ϸ� ������鼭
//	//����Լ� �׾ư��� ���
//	printf("+%d\n", n);
//	if (n > 0) {
//		Print(n - 1);
//	}
//	//-�� �Ųٷ� �������� ��
//	printf("-%d\n", n);
//
//}
//
//int main() {
//
//	Print(3);
//	system("pause");
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void Print(int n) {
//
//	printf("%d\n", n);
//	if (n > 0) {
//		Print(n - 1);
//	}
//	printf("%d\n", n);
//	
//}
//
//int main() {
//
//	Print(3);
//	system("pause");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void Print(int n) {
//
//	printf("%d\n", n);
//	if (n > 0)
//		Print(n - 1);
//}
//
//int main() {
//
//	Print(3);
//	system("pause");
//
//	return 0;
//}

//
//#include <stdio.h>
//#include <stdlib.h>
//
//void Print(int n) {
//
//	printf("%d\n", n);
//	if (n > 0)
//		Print(n - 1);
//}
//
//int main() {
//
//	Print(3);
//	printf("K\n");
//	system("pause");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void Print(int n) {
//	
//	printf("%d\n", n);
//	Print(n);
//}
//
//int main() {
//
//	Print(3);
//	system("pause");
//
//	return 0;
//} 


//#include <stdio.h>
//#include <stdlib.h>
//void Print(int n) {
//	printf("%d\n", n);
//}
//
//int main() {
//
//
//	Print(3);
//	system("pause");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//
//
//	printf("Hello!\n");
//
//	system("pause");
//
//	return 0;
//}