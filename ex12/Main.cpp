#include <cstdio>
#include <cstdlib>

struct Fruit {
	const char* name;
	int price;
	int size;

};

void PrintFruits(Fruit fruits[], int countFruits) {
	for (int i = 0; i < countFruits; ++i) {
		printf("%s, %d, %d \n", fruits[i].name, fruits[i].price, fruits[i].size);
	}
}
int ChooseFruits(Fruit fruits[], int countFruits, int size) {
	int maxIndex = -1;
	//백팩사이즈보다 작은 초기 인덱스값 찾기
	for (maxIndex = 0; maxIndex < countFruits; ++maxIndex) {
		if (fruits[maxIndex].size <= size)
			break;
	}
	//위 문장에서 break가 실행 되지 않았다면
	if (maxIndex == countFruits) return -1;

	for (int i = maxIndex + 1; i < countFruits; ++i) {
		if (fruits[i].size <= size && fruits[maxIndex].price < fruits[i].price)
			maxIndex = i;
	}
	return maxIndex;
}
void RemoveFruits(Fruit fruits[], int& countFruits, int idx) {
	for (int i = idx; i < countFruits - 1; ++i) {
		fruits[i] = fruits[i + 1];
	}
	--countFruits;
}
void Greedy(Fruit fruits[], int  countFruits, int& backpackSize) {
	while (1) {
		int idx = ChooseFruits(fruits, countFruits, backpackSize);
		if (idx >= 0) {
			backpackSize -= fruits[idx].size;
			printf("%s, %d, %d \n", fruits[idx].name, fruits[idx].price, fruits[idx].size);
			RemoveFruits(fruits, countFruits, idx);
			/*printf("before:%d\n", backpackSize);
			printf("idx:%d,size:%d\n",idx, fruits[idx].size);*/
			//printf("after:%d\n", backpackSize);
		}
		else
			break;


	}
}

int main() {
	Fruit fruits[4] = { {"배",2500,5 }, {"바나나",1500,3},{"사과",1500,2},{"딸기",2000,1} };
	int countFruits = 4;

	int backpackSize = 6;

	Greedy(fruits, countFruits, backpackSize);
	printf("남은 백팩의 크기: %d\n", backpackSize);


	return 0;
}

//#include <cstdio>
//#include <cstdlib>
//
//struct Fruit {
//	const char* name;
//	int price;
//	int size;
//
//};
//
//void PrintFruits(Fruit fruits[], int countFruits) {
//	for (int i = 0; i < countFruits; ++i) {
//		printf("%s, %d, %d \n", fruits[i].name, fruits[i].price, fruits[i].size);
//	}
//}
//int ChooseFruits(Fruit fruits[], int countFruits, int size) {
//	int maxIndex = -1;
//	//백팩사이즈보다 작은 초기 인덱스값 찾기
//	for (maxIndex = 0; maxIndex < countFruits; ++maxIndex) {
//		if (fruits[maxIndex].size <= size)
//			break;
//	}
//	//위 문장에서 break가 실행 되지 않았다면
//	if (maxIndex == countFruits) return -1;
//
//	for (int i = maxIndex + 1; i < countFruits; ++i) {
//		if (fruits[i].size <= size && fruits[maxIndex].price < fruits[i].price)
//			maxIndex = i;
//	}
//	return maxIndex;
//}
//void RemoveFruits(Fruit fruits[], int& countFruits, int idx) {
//	for (int i = idx; i < countFruits - 1; ++i) {
//		fruits[i] = fruits[i + 1];
//	}
//	--countFruits;
//}
//
//int main() {
//	Fruit fruits[4] = { {"배",2500,4 }, {"바나나",1500,3},{"사과",1500,2},{"딸기",2000,1} };
//	int countFruits = 4;
//
//	int backpackSize = 6;
//
//	while (1) {
//		int idx = ChooseFruits(fruits, countFruits, backpackSize);
//		if (idx >= 0) {
//			backpackSize -= fruits[idx].size;
//			printf("%s, %d, %d \n", fruits[idx].name, fruits[idx].price, fruits[idx].size);
//			RemoveFruits(fruits, countFruits, idx);
//			/*printf("before:%d\n", backpackSize);
//			printf("idx:%d,size:%d\n",idx, fruits[idx].size);*/
//			//printf("after:%d\n", backpackSize);
//		}
//		else
//			break;
//
//
//	}
//	printf("남은 백팩의 크기: %d\n", backpackSize);
//
//
//	return 0;
//}


//#include <cstdio>
//#include <cstdlib>
//
//struct Fruit {
//	const char* name;
//	int price;
//	int size;
//
//};
//
//void PrintFruits(Fruit fruits[], int countFruits) {
//	for (int i = 0; i < countFruits; ++i) {
//		printf("%s, %d, %d \n", fruits[i].name, fruits[i].price, fruits[i].size);
//	}
//}
//int ChooseFruits(Fruit fruits[], int countFruits, int size) {
//	int maxIndex = -1;
//	//백팩사이즈보다 작은 초기 인덱스값 찾기
//	for (maxIndex = 0; maxIndex < countFruits; ++maxIndex) {
//		if (fruits[maxIndex].size <= size)
//			break;
//	}
//	//위 문장에서 break가 실행 되지 않았다면
//	if (maxIndex == countFruits) return -1;
//
//	for (int i = maxIndex + 1; i < countFruits; ++i) {
//		if (fruits[i].size <= size && fruits[maxIndex].price < fruits[i].price)
//			maxIndex = i;
//	}
//	return maxIndex;
//}
//void RemoveFruits(Fruit fruits[], int& countFruits, int idx) {
//	for (int i = idx; i < countFruits - 1; ++i) {
//		fruits[i] = fruits[i + 1];
//	}
//	--countFruits;
//}
//
//int main() {
//	Fruit fruits[4] = { {"배",2500,5 }, {"바나나",1500,3},{"사과",1500,2},{"딸기",2000,1} };
//	int countFruits = 4;
//
//	int backpackSize = 6;
//	int idx = ChooseFruits(fruits, countFruits, backpackSize);
//	if (idx >= 0) {
//		backpackSize -= fruits[idx].size;
//		printf("%s, %d, %d \n", fruits[idx].name, fruits[idx].price, fruits[idx].size);
//		RemoveFruits(fruits, countFruits, idx);
//	}
//
//	idx = ChooseFruits(fruits, countFruits, backpackSize);
//	if (idx >= 0) {
//		printf("%s, %d, %d \n", fruits[idx].name, fruits[idx].price, fruits[idx].size);
//		RemoveFruits(fruits, countFruits, idx);
//		backpackSize -= fruits[idx].size;
//	}
//
//
//
//
//	return 0;
//}


//#include <cstdio>
//#include <cstdlib>
//
//struct Fruit {
//	const char* name;
//	int price;
//	int size;
//
//};
//
//void PrintFruits(Fruit fruits[], int countFruits) {
//	for (int i = 0; i < countFruits; ++i) {
//		printf("%s, %d, %d \n", fruits[i].name, fruits[i].price, fruits[i].size);
//	}
//}
//int ChooseFruits(Fruit fruits[], int countFruits, int size) {
//	int maxIndex = -1;
//	//백팩사이즈보다 작은 초기 인덱스값 찾기
//	for (maxIndex = 0; maxIndex < countFruits; ++maxIndex) {
//		if (fruits[maxIndex].size <= size)
//			break;
//	}
//	if (maxIndex == countFruits) return -1;
//
//	for (int i = maxIndex + 1; i < countFruits; ++i) {
//		if (fruits[i].size <= size && fruits[maxIndex].price < fruits[i].price)
//			maxIndex = i;
//	}
//	return maxIndex;
//}
//void RemoveFruits(Fruit fruits[], int& countFruits, int idx) {
//	for (int i = idx; i < countFruits - 1; ++i) {
//		fruits[i] = fruits[i + 1];
//	}
//	--countFruits;
//}
//
//int main() {
//	Fruit fruits[4] = { {"배",2500,5 }, {"바나나",1500,3},{"사과",1500,2},{"딸기",2000,1} };
//
//	//int backpackSize = 5;
//
//
//
//	//int idx = ChooseFruits(fruits, 4, backpackSize);
//	//if (idx >= 0)
//	//	printf("%s, %d, %d \n", fruits[idx].name, fruits[idx].price, fruits[idx].size);
//	//else
//	//	printf("원소 없음");
//	//PrintFruits(fruits, 4);
//
//	int countFruits = 4;
//	RemoveFruits(fruits, countFruits, 1);
//	PrintFruits(fruits, countFruits);
//
//
//	return 0;
//}

//#include <cstdio>
//#include <cstdlib>
//
//struct Fruit {
//	const char* name;
//	int price;
//	int size;
//
//};
//
//void PrintFruits(Fruit fruits[], int countFruits) {
//	for (int i = 0; i < countFruits; ++i) {
//		printf("%s, %d, %d \n", fruits[i].name, fruits[i].price, fruits[i].size);
//	}
//}
//int ChooseFruits(Fruit fruits[], int countFruits) {
//	int maxIndex = 0;
//	for (int i = maxIndex + 1; i < countFruits; ++i) {
//		if (fruits[maxIndex].price < fruits[i].price)
//			maxIndex = i;
//	}
//	return maxIndex;
//}
//
//int main() {
//	Fruit fruits[4] = { {"배",2500,5 }, {"바나나",1500,3},{"사과",1500,2},{"딸기",2000,1} };
//
//	int backpackSize = 6;
//
//	int idx = ChooseFruits(fruits, 4);
//	if (idx >= 0)
//		printf("%s, %d, %d \n", fruits[idx].name, fruits[idx].price, fruits[idx].size);
//
//	PrintFruits(fruits, 4);
//
//
//	return 0;
//}

//#include <cstdio>
//#include <cstdlib>
//
//struct Fruit {
//	const char* name;
//	int price;
//	int size;
//
//};
//
//void PrintFruits(Fruit fruits[],int countFruits) {
//	for (int i = 0; i < countFruits; ++i) {
//		printf("%s, %d, %d \n", fruits[i].name, fruits[i].price, fruits[i].size);
//	}
//}
//int main() {
//	Fruit fruits[4] = { {"배",2500,5 }, {"바나나",1500,3},{"사과",1500,2},{"딸기",2000,1} };
//
//	PrintFruits(fruits, 4);
//
//
//	return 0;
//}

//#include <cstdio>
//#include <cstdlib>
//void Refund(int moneyType[], int ch, int countMoneyType[]) {
//
//	int change = ch;
//
//	for (int i = 0; i < 5; ++i) {
//
//		int count = 0;
//		for (count = 0; change / moneyType[i]; ++count) {
//			change -= moneyType[i];
//		}
//		countMoneyType[i] = count;
//	}
//
//
//}
//int main() {
//
//	int moneyType[5] = { 500,100,50,10,1 };
//	int countMoneyType[5] = { 0, };
//	int money = 0;
//	printf("입력:" );
//	scanf_s("%d", &money);
//
//	int change = 1000 - money;//330
//	Refund(moneyType, change, countMoneyType);
//
//	for (int i = 0; i < 5; ++i) {
//		printf("%d원:%d\n", moneyType[i], countMoneyType[i]);
//	}
//	int cmpChange = 0;
//	for (int i = 0; i < 5; ++i) {
//		cmpChange += moneyType[i] * countMoneyType[i];
//	}
//	printf("%d = %d\n", change, cmpChange);
//	system("pause");
//	return 0;
//}

//#include <cstdio>
//#include <cstdlib>
//void Refund(int moneyType[], int ch, int countMoneyType[]) {
//
//	int change = ch;
//
//	for (int i = 0; i < 5; ++i) {
//
//		int count = 0;
//		for (count = 0; change / moneyType[i]; ++count) {
//			change -= moneyType[i];
//		}
//		countMoneyType[i] = count;
//	}
//
//	
//}
//int main() {
//
//	int moneyType[5] = { 500,100,50,10,1 };
//	int countMoneyType[5] = { 0, };
//	int change = 670; //330
//
//	Refund(moneyType, change, countMoneyType);
//
//	for (int i = 0; i < 5; ++i) {
//		printf("%d원:%d\n", moneyType[i], countMoneyType[i]);
//	}
//	int cmpChange = 0;
//	for (int i = 0; i < 5; ++i) {
//		cmpChange += moneyType[i]*countMoneyType[i];
//	}
//	printf("%d = %d\n", change, cmpChange);
//	system("pause");
//	return 0;
//}


//#include <cstdio>
//#include <cstdlib>
//void Refund(int moneyType[], int ch, int countMoneyType[]) {
//
//	int change = ch;
//
//	for (int i = 0; i < 5; ++i) {
//		
//		int count = 0;
//		for (count = 0; change / moneyType[i]; ++count) {
//			change -= moneyType[i];
//		}
//		countMoneyType[i] = count;
//	}
//	
//	for (int i = 0; i < 5; ++i) {
//		printf("%d원:%d\n", moneyType[i], countMoneyType[i]);
//	}
//
//}
//int main() {
//
//	int moneyType[5] = { 500,100,50,10,1 };
//	int countMoneyType[5] = { 0, };
//	int change = 670; //330
//
//	Refund(moneyType, change, countMoneyType);
//
//
//	system("pause");
//	return 0;
//}

//#include <cstdio>
//#include <cstdlib>
//void Refund(int moneyType[], int ch, int countMoneyType[]) {
//
//	int change = ch;
//
//	for (int i = 0; i < 5; ++i) {
//		int count = 0;
//		while (change / moneyType[i]) {
//			++count;
//			printf("%d원: %d \n", moneyType[i], count);
//			change -= moneyType[i];
//			printf("남은 %d원\n", change);
//		}
//		countMoneyType[i] = count;
//
//	}
//	for (int i = 0; i < 5; ++i) {
//		printf("%d원:%d\n", moneyType[i], countMoneyType[i]);
//	}
//
//}
//int main() {
//
//	int moneyType[5] = { 500,100,50,10,1 };
//	int countMoneyType[5] = { 0, };
//	int change = 670; //330
//
//	Refund(moneyType, change, countMoneyType);
//
//
//	system("pause");
//	return 0;
//}

//#include <cstdio>
//#include <cstdlib>
//void Refund(int moneyType[], int ch) {
//
//	int change = ch;
//	int count= 0;
//	while (change / moneyType[0]) {
//		++count;
//		printf("%d원: %d \n", moneyType[0],count);
//		change -= moneyType[0];
//		printf("남은 %d원\n", change);
//	}
//
//	count = 0;
//	while (change / moneyType[1]) {
//		++count;
//		printf("%d원: %d \n", moneyType[1], count);
//		change -= moneyType[1];
//		printf("남은 %d원\n", change);
//	}
//
//	count = 0;
//	while (change / moneyType[2]) {
//		++count;
//		printf("%d원: %d \n", moneyType[2], count);
//		change -= moneyType[2];
//		printf("남은 %d원\n", change);
//	}
//
//	count = 0;
//	while (change / moneyType[3]) {
//		++count;
//		printf("%d원: %d \n", moneyType[3], count);
//		change -= moneyType[3];
//		printf("남은 %d원\n", change);
//	}
//
//
//	count = 0;
//	while (change / moneyType[4]) {
//		++count;
//		printf("%d원: %d \n", moneyType[4], count);
//		change -= moneyType[4];
//		printf("남은 %d원\n", change);
//	}
//
//
//
//	printf("%d\n", 400 / moneyType[0]);
//	if (change / moneyType[0]) {
//
//	}
//	else {
//
//
//	}
//}
//int main() {
//
//	int moneyType[5] = { 500,100,50,10,1 };
//	int change = 670; //330
//
//	Refund(moneyType, change);
//
//
//	system("pause");
//	return 0;
//}