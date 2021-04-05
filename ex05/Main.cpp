#include <stdio.h>
#include <stdlib.h>

void Print(int n) {

	//+는 트리로 말하면 깊어지면서 출력
	//재귀함수 쌓아갈때 출력
	printf("+%d\n", n);
	if (n > 0) {
		Print(n - 1);
		Print(n - 1);
	}
	//-는 거꾸로 빠져나올 때
	printf("-%d\n", n);

}

int main() {

	Print(3);
	system("pause");

	return 0;
}


//#include <stdio.h>
//#include <stdlib.h>
//
//void Print(int n) {
//
//	//+는 트리로 말하면 깊어지면서
//	//재귀함수 쌓아갈때 출력
//	printf("+%d\n", n);
//	if (n > 0) {
//		Print(n - 1);
//		Print(n - 1);
//	}
//	//-는 거꾸로 빠져나올 때
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
//	//+는 트리로 말하면 깊어지면서
//	//재귀함수 쌓아갈때 출력
//	printf("+%d\n", n);
//	if (n > 0) {
//		Print(n - 1);
//		Print(n - 1);
//	}
//	//-는 거꾸로 빠져나올 때
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
//	//+는 트리로 말하면 깊어지면서
//	//재귀함수 쌓아갈때 출력
//	printf("+%d\n", n);
//	if (n > 0) {
//		Print(n - 1);
//	}
//	//-는 거꾸로 빠져나올 때
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