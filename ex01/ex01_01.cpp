#include <cstdio>

int Sum1_10()
{
	int sum = 0;
	for (int i = 1; i <= 10; ++i) {
		sum += i;
	}
	return sum;
}

int Sum(int first, int last)
{
	int sum = 0;
	for (int i = first; i <= last; ++i) {
		sum += i;
	}
	return sum;
}

void main() {
	int sum = 0;

	sum = Sum(1,10);
	printf("sum = %d\n", sum);
	printf("sum = %d\n", Sum(5,10));
	printf("sum = %d\n", Sum(10,20));

	getchar();
}

//#include <cstdio>
//
//int Sum()
//{
//	int sum = 0;
//	for (int i = 1; i <= 10; ++i) {
//		sum += i;
//	}
//	return sum;
//}
//
//void main() {
//	int sum = 0;
//
//	sum = Sum();
//	printf("sum = %d\n", sum);
//	printf("sum = %d\n", Sum());
//	printf("sum = %d\n", Sum());
//
//	getchar();
//}


//#include <cstdio>
//void main() {
//	int sum = 0;
//	for (int i = 1; i <= 10; ++i) {
//		sum += i;
//	}
//	printf("sum = %d\n", sum);
//
//
//	getchar();
//}

//#include <cstdio>
//void main() {
//	for (int i = 1; i <= 10; ++i) {
//		printf("%d\n", i);
//	}
//
//	getchar();
//}

//#include <cstdio>
//void main() {
//	int n = 10;
//	printf("%d\n", n);
//	getchar();
//}