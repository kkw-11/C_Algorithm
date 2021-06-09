#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <conio.h>
struct Person {

	char name[20];
	char phone[20];

};

void Swap(Person& a, Person& b) {
	Person t = a;
	a = b;
	b = t;
}

void Sort(Person list[], int size) {

	for (int idx = 1; idx < size; ++idx)
	{

		Person value = list[idx];

		int i;
		for (i = idx - 1; 0 <= i; --i) {
			if (strcmp(value.name, list[i].name) < 0)//strcmp 뒤 매개변수가 크면 -1 반환
				list[i + 1] = list[i];
			else
				break;
		}
		list[i + 1] = value;

	}

}
class PersonArray {
	Person* perArray;
	int perSize;
	int perCapacity;

public:
	void AddPerson() {
		printf("이름, 전화번호 입력:\n");
		scanf_s("%s", perArray[perSize].name, 20);
		scanf_s("%s", perArray[perSize].phone, 20);
		++perSize;
	}
	void PrintPerson() {
		for (int i = 0; i < perSize; ++i) {
			printf("[%d]: name:%s, phone:%s\n", i, perArray[i].name, perArray[i].phone);
		}
	}
	void SearchPerson() {
		char name[20];
		printf("찾는 이름 입력:");
		scanf_s("%s", name, 20);

		for (int i = 0; i < perSize; ++i) {
			if (strcmp(name, perArray[i].name) == 0) { //strcmp는 두 문자열이 같으면 0 반환
				printf("[%d] : name:%s, phone:%s\n", i,
					perArray[i].name, perArray[i].phone);
			}
		}

	}
	void RemovePerson() {
		char name[20];
		printf("삭제 이름 입력:");
		scanf_s("%s", name, 20);

		for (int i = 0; i < perSize; ++i) {
			if (strcmp(name, perArray[i].name) == 0) { //strcmp는 두 문자열이 같으면 0 반환
				for (int j = i; j < perSize - 1; ++j)
					perArray[j] = perArray[j + 1];
				--perSize;
			}
		}
	}
	void SortPerson() {

		Sort(perArray, perSize);

	}
	PersonArray(int cap = 100) { //생성자 초기화를 위해 자동 호출, 클래스의 이름과 동일하게 만들어줌 // 지정안하면 100개  지정하면 지정한 개수만큼

		perArray = new Person[cap];
		perSize = 0;
		perCapacity = cap;

	}
	~PersonArray() { //소멸자 main함수 종료시 자동 호출
		delete[] perArray;
	}
};

/////////////////////////////////////////////
void Menu() {


	printf("\n\n=====================\n");
	printf("1. 전화번호 등록\n");
	printf("2. 전화번호 출력\n");
	printf("3. 전화번호 검색\n");
	printf("4. 전화번호 삭제\n");
	printf("5. 전화번호 정렬\n");
	printf("0. 프로그램 종료\n");
	printf("=====================\n\n");
}
int main() {
	bool bRun = true;
	PersonArray pArray(10000);

	while (bRun) {

		Menu();
		switch (_getch()) { //_getch() 비쥬얼스튜디오 내장함수
		case '1':
			pArray.AddPerson();
			break;
		case '2':
			pArray.PrintPerson();
			break;
		case '3':
			pArray.SearchPerson();
			break;
		case '4':
			pArray.RemovePerson();
			break;
		case '5':
			pArray.SortPerson();
			break;
		case '0':
			bRun = false;
			break;
		}
	}

	system("pause");
}


//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <conio.h>
//struct Person {
//
//	char name[20];
//	char phone[20];
//
//};
//
//void Swap(Person& a, Person& b) {
//	Person t = a;
//	a = b;
//	b = t;
//}
//
//void Sort(Person list[], int size) {
//
//	for (int idx = 1; idx < size; ++idx)
//	{
//
//		Person value = list[idx];
//
//		int i;
//		for (i = idx - 1; 0 <= i; --i) {
//			if (strcmp(value.name, list[i].name) < 0)//strcmp 뒤 매개변수가 크면 -1 반환
//				list[i + 1] = list[i];
//			else
//				break;
//		}
//		list[i + 1] = value;
//
//	}
//
//}
//class PersonArray {
//	Person* perArray;
//	int perSize;
//	int perCapacity;
//
//public:
//	void AddPerson() {
//		printf("이름, 전화번호 입력:\n");
//		scanf_s("%s", perArray[perSize].name, 20);
//		scanf_s("%s", perArray[perSize].phone, 20);
//		++perSize;
//	}
//	void PrintPerson() {
//		for (int i = 0; i < perSize; ++i) {
//			printf("[%d]: name:%s, phone:%s\n", i, perArray[i].name, perArray[i].phone);
//		}
//	}
//	void SearchPerson() {
//		char name[20];
//		printf("찾는 이름 입력:");
//		scanf_s("%s", name, 20);
//
//		for (int i = 0; i < perSize; ++i) {
//			if (strcmp(name, perArray[i].name) == 0) { //strcmp는 두 문자열이 같으면 0 반환
//				printf("[%d] : name:%s, phone:%s\n", i,
//					perArray[i].name, perArray[i].phone);
//			}
//		}
//
//	}
//	void RemovePerson() {
//		char name[20];
//		printf("삭제 이름 입력:");
//		scanf_s("%s", name, 20);
//
//		for (int i = 0; i < perSize; ++i) {
//			if (strcmp(name, perArray[i].name) == 0) { //strcmp는 두 문자열이 같으면 0 반환
//				for (int j = i; j < perSize - 1; ++j)
//					perArray[j] = perArray[j + 1];
//				--perSize;
//			}
//		}
//	}
//	void SortPerson() {
//
//		Sort(perArray, perSize);
//
//	}
//	PersonArray(int cap=100) { //생성자 초기화를 위해 자동 호출, 클래스의 이름과 동일하게 만들어줌 // 지정안하면 100개  지정하면 지정한 개수만큼
//
//		perArray = new Person[cap];
//		perSize = 0;
//		perCapacity = cap;
//
//	}
//	~PersonArray() { //소멸자 main함수 종료시 자동 호출
//		delete[] perArray;
//	}
//};
//
///////////////////////////////////////////////
//void Menu() {
//
//
//	printf("\n\n=====================\n");
//	printf("1. 전화번호 등록\n");
//	printf("2. 전화번호 출력\n");
//	printf("3. 전화번호 검색\n");
//	printf("4. 전화번호 삭제\n");
//	printf("5. 전화번호 정렬\n");
//	printf("0. 프로그램 종료\n");
//	printf("=====================\n\n");
//}
//int main() {
//
//	PersonArray pArray(10000);
//
//	while (1) {
//
//		Menu();
//		switch (_getch()) { //_getch() 비쥬얼스튜디오 내장함수
//		case '1':
//			pArray.AddPerson();
//			break;
//		case '2':
//			pArray.PrintPerson();
//			break;
//		case '3':
//			pArray.SearchPerson();
//			break;
//		case '4':
//			pArray.RemovePerson();
//			break;
//		case '5':
//			pArray.SortPerson();
//			break;
//		case '0':
//			return 0;
//			break;
//		}
//	}
//
//	system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <conio.h>
//struct Person {
//
//	char name[20];
//	char phone[20];
//
//};
//
//void Swap(Person& a, Person& b) {
//	Person t = a;
//	a = b;
//	b = t;
//}
//
//void Sort(Person list[], int size) {
//
//	for (int idx = 1; idx < size; ++idx)
//	{
//
//		Person value = list[idx];
//
//		int i;
//		for (i = idx - 1; 0 <= i; --i) {
//			if (strcmp(value.name, list[i].name) < 0)//strcmp 뒤 매개변수가 크면 -1 반환
//				list[i + 1] = list[i];
//			else
//				break;
//		}
//		list[i + 1] = value;
//
//	}
//
//}
//struct PersonArray {
//	Person* perArray;
//	int perSize;
//	int perCapacity;
//
//	void AddPerson() {
//		printf("이름, 전화번호 입력:\n");
//		scanf_s("%s", perArray[perSize].name, 20);
//		scanf_s("%s", perArray[perSize].phone, 20);
//		++perSize;
//	}
//	void PrintPerson() {
//		for (int i = 0; i < perSize; ++i) {
//			printf("[%d]: name:%s, phone:%s\n", i,perArray[i].name, perArray[i].phone);
//		}
//	}
//	void SearchPerson() {
//		char name[20];
//		printf("찾는 이름 입력:");
//		scanf_s("%s", name, 20);
//
//		for (int i = 0; i < perSize; ++i) {
//			if (strcmp(name,perArray[i].name) == 0) { //strcmp는 두 문자열이 같으면 0 반환
//				printf("[%d] : name:%s, phone:%s\n", i,
//					perArray[i].name, perArray[i].phone);
//			}
//		}
//
//	}
//	void RemovePerson() {
//		char name[20];
//		printf("삭제 이름 입력:");
//		scanf_s("%s", name, 20);
//
//		for (int i = 0; i < perSize; ++i) {
//			if (strcmp(name, perArray[i].name) == 0) { //strcmp는 두 문자열이 같으면 0 반환
//				for (int j = i; j < perSize - 1; ++j)
//					perArray[j] = perArray[j + 1];
//				--perSize;
//			}
//		}
//	}
//	void SortPerson() {
//
//		Sort(perArray, perSize);
//
//	}
//	void InitPerson(int cap) {
//
//		perArray = new Person[cap];
//		perSize = 0;
//		perCapacity = cap;
//
//	}
//	void UninitPerson() {
//		delete[] perArray;
//	}
//};
//
///////////////////////////////////////////////
//void Menu() {
//
//
//	printf("\n\n=====================\n");
//	printf("1. 전화번호 등록\n");
//	printf("2. 전화번호 출력\n");
//	printf("3. 전화번호 검색\n");
//	printf("4. 전화번호 삭제\n");
//	printf("5. 전화번호 정렬\n");
//	printf("0. 프로그램 종료\n");
//	printf("=====================\n\n");
//}
//int main() {
//
//	PersonArray pArray;
//	pArray.InitPerson(100);
//
//	while (1) {
//
//		Menu();
//		switch (_getch()) { //_getch() 비쥬얼스튜디오 내장함수
//		case '1':
//			pArray.AddPerson();
//			break;
//		case '2':
//			pArray.PrintPerson();
//			break;
//		case '3':
//			pArray.SearchPerson();
//			break;
//		case '4':
//			pArray.RemovePerson();
//			break;
//		case '5':
//			pArray.SortPerson();
//			break;
//		case '0':
//			return 0;
//			break;
//		}
//	}
//
//	pArray.UninitPerson();
//	system("pause");
//}

////////////////////////////////////////////
/*
아래 코드는 C언어 절차 지향 방식으로 완성한 전화번호부 어플리케이션
*/

//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <conio.h>
//struct Person {
//
//	char name[20];
//	char phone[20];
//
//};
//struct PersonArray {
//	Person* perArray;
//	int perSize;
//	int perCapacity;
//};
//
//void Swap(Person& a, Person& b) {
//	Person t = a;
//	a = b;
//	b = t;
//}
//
//void Sort(Person list[], int size) {
//
//	for (int idx = 1; idx < size; ++idx)
//	{
//
//		Person value = list[idx];
//
//		int i;
//		for (i = idx - 1; 0 <= i; --i) {
//			if (strcmp(value.name, list[i].name) < 0)//strcmp 뒤 매개변수가 크면 -1 반환
//				list[i + 1] = list[i];
//			else
//				break;
//		}
//		list[i + 1] = value;
//
//	}
//
//}
//void AddPerson(PersonArray& pArray) {
//	printf("이름, 전화번호 입력:\n");
//	scanf_s("%s", pArray.perArray[pArray.perSize].name, 20);
//	scanf_s("%s", pArray.perArray[pArray.perSize].phone, 20);
//	++pArray.perSize;
//}
//void PrintPerson(PersonArray& pArray) {
//	for (int i = 0; i < pArray.perSize; ++i) {
//		printf("[%d]: name:%s, phone:%s\n", i, pArray.perArray[i].name, pArray.perArray[i].phone);
//	}
//}
//void SearchPerson(PersonArray& pArray) {
//	char name[20];
//	printf("찾는 이름 입력:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < pArray.perSize; ++i) {
//		if (strcmp(name, pArray.perArray[i].name) == 0) { //strcmp는 두 문자열이 같으면 0 반환
//			printf("[%d] : name:%s, phone:%s\n", i,
//				pArray.perArray[i].name, pArray.perArray[i].phone);
//		}
//	}
//
//}
//void RemovePerson(PersonArray& pArray) {
//	char name[20];
//	printf("삭제 이름 입력:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < pArray.perSize; ++i) {
//		if (strcmp(name, pArray.perArray[i].name) == 0) { //strcmp는 두 문자열이 같으면 0 반환
//			for (int j = i; j < pArray.perSize - 1; ++j)
//				pArray.perArray[j] = pArray.perArray[j + 1];
//			--pArray.perSize;
//		}
//	}
//}
//void SortPerson(PersonArray& pArray) {
//
//	Sort(pArray.perArray, pArray.perSize);
//
//}
//void InitPerson(PersonArray& pArray, int cap) {
//
//	pArray.perArray = new Person[cap];
//	pArray.perSize = 0;
//	pArray.perCapacity = cap;
//
//}
//void UninitPerson(PersonArray& pArray) {
//	delete[] pArray.perArray;
//}
///////////////////////////////////////////////
//void Menu() {
//
//
//	printf("\n\n=====================\n");
//	printf("1. 전화번호 등록\n");
//	printf("2. 전화번호 출력\n");
//	printf("3. 전화번호 검색\n");
//	printf("4. 전화번호 삭제\n");
//	printf("5. 전화번호 정렬\n");
//	printf("0. 프로그램 종료\n");
//	printf("=====================\n\n");
//}
//int main() {
//	
//	PersonArray pArray;
//	InitPerson(pArray,100);
//
//	while (1) {
//
//		Menu();
//		switch (_getch()) { //_getch() 비쥬얼스튜디오 내장함수
//		case '1':
//			AddPerson(pArray);
//			break;
//		case '2':
//			PrintPerson(pArray);
//			break;
//		case '3':
//			SearchPerson(pArray);
//			break;
//		case '4':
//			RemovePerson(pArray);
//			break;
//		case '5':
//			SortPerson(pArray);
//			break;
//		case '0':
//			return 0;
//			break;
//		}
//	}
//
//	UninitPerson(pArray);
//	system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <conio.h>
//struct Person {
//
//	char name[20];
//	char phone[20];
//
//};
//struct PersonArray {
//	Person perArray[100];
//	int perSize;
//};
//void Swap(Person& a, Person& b) {
//	Person t = a;
//	a = b;
//	b = t;
//}
//
//void Sort(Person list[], int size) {
//
//	for (int idx = 1; idx < size; ++idx)
//	{
//
//		Person value = list[idx];
//
//		int i;
//		for (i = idx - 1; 0 <= i; --i) {
//			if (strcmp(value.name, list[i].name) < 0)//strcmp 뒤 매개변수가 크면 -1 반환
//				list[i + 1] = list[i];
//			else
//				break;
//		}
//		list[i + 1] = value;
//
//	}
//
//}
//void AddPerson(PersonArray& pArray) {
//	printf("이름, 전화번호 입력:\n");
//	scanf_s("%s", pArray.perArray[pArray.perSize].name, 20);
//	scanf_s("%s", pArray.perArray[pArray.perSize].phone, 20);
//	++pArray.perSize;
//}
//void PrintPerson(PersonArray& pArray) {
//	for (int i = 0; i < pArray.perSize; ++i) {
//		printf("[%d]: name:%s, phone:%s\n", i, pArray.perArray[i].name, pArray.perArray[i].phone);
//	}
//}
//void SearchPerson(PersonArray& pArray) {
//	char name[20];
//	printf("찾는 이름 입력:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < pArray.perSize; ++i) {
//		if (strcmp(name, pArray.perArray[i].name) == 0) { //strcmp는 두 문자열이 같으면 0 반환
//			printf("[%d] : name:%s, phone:%s\n", i,
//				pArray.perArray[i].name, pArray.perArray[i].phone);
//		}
//	}
//
//}
//void RemovePerson(PersonArray& pArray) {
//	char name[20];
//	printf("삭제 이름 입력:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < pArray.perSize; ++i) {
//		if (strcmp(name, pArray.perArray[i].name) == 0) { //strcmp는 두 문자열이 같으면 0 반환
//			for (int j = i; j < pArray.perSize - 1; ++j)
//				pArray.perArray[j] = pArray.perArray[j + 1];
//			--pArray.perSize;
//		}
//	}
//}
//void SortPerson(PersonArray& pArray) {
//
//	Sort(pArray.perArray, pArray.perSize);
//
//}
//void InitPerson(PersonArray& pArray) {
//	pArray.perSize = 0;
//}
//void UninitPerson(PersonArray& pArray) {
//
//}
///////////////////////////////////////////////
//void Menu() {
//
//
//	printf("\n\n=====================\n");
//	printf("1. 전화번호 등록\n");
//	printf("2. 전화번호 출력\n");
//	printf("3. 전화번호 검색\n");
//	printf("4. 전화번호 삭제\n");
//	printf("5. 전화번호 정렬\n");
//	printf("0. 프로그램 종료\n");
//	printf("=====================\n\n");
//}
//int main() {
//	PersonArray pArray;
//	InitPerson(pArray);
//
//	while (1) {
//
//		Menu();
//		switch (_getch()) { //_getch() 비쥬얼스튜디오 내장함수
//		case '1':
//			AddPerson(pArray);
//			break;
//		case '2':
//			PrintPerson(pArray);
//			break;
//		case '3':
//			SearchPerson(pArray);
//			break;
//		case '4':
//			RemovePerson(pArray);
//			break;
//		case '5':
//			SortPerson(pArray);
//			break;
//		case '0':
//			return 0;
//			break;
//		}
//
//	}
//	UninitPerson(pArray);
//	system("pause");
//}



//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <conio.h>
//struct Person {
//
//	char name[20];
//	char phone[20];
//
//};
//struct PersonArray {
//	Person perArray[100];
//	int perSize;
//};
//void Swap(Person& a, Person& b) {
//	Person t = a;
//	a = b;
//	b = t;
//}
//
//void Sort(Person list[], int size) {
//
//	for (int idx = 1; idx < size; ++idx)
//	{
//
//		Person value = list[idx];
//
//		int i;
//		for (i = idx - 1; 0 <= i; --i) {
//			if (strcmp(value.name, list[i].name) < 0)//strcmp 뒤 매개변수가 크면 -1 반환
//				list[i + 1] = list[i];
//			else
//				break;
//		}
//		list[i + 1] = value;
//
//	}
//
//}
//void AddPerson(PersonArray& pArray) {
//	printf("이름, 전화번호 입력:\n");
//	scanf_s("%s", pArray.perArray[pArray.perSize].name, 20);
//	scanf_s("%s", pArray.perArray[pArray.perSize].phone, 20);
//	++pArray.perSize;
//}
//void PrintPerson(PersonArray& pArray) {
//	for (int i = 0; i < pArray.perSize; ++i) {
//		printf("[%d]: name:%s, phone:%s\n", i, pArray.perArray[i].name, pArray.perArray[i].phone);
//	}
//}
//void SearchPerson(PersonArray& pArray) {
//	char name[20];
//	printf("찾는 이름 입력:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < pArray.perSize; ++i) {
//		if (strcmp(name, pArray.perArray[i].name) == 0) { //strcmp는 두 문자열이 같으면 0 반환
//			printf("[%d] : name:%s, phone:%s\n", i,
//				pArray.perArray[i].name, pArray.perArray[i].phone);
//		}
//	}
//
//}
//void RemovePerson(PersonArray& pArray) {
//	char name[20];
//	printf("삭제 이름 입력:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < pArray.perSize; ++i) {
//		if (strcmp(name, pArray.perArray[i].name) == 0) { //strcmp는 두 문자열이 같으면 0 반환
//			for (int j = i; j < pArray.perSize - 1; ++j)
//				pArray.perArray[j] = pArray.perArray[j + 1];
//			--pArray.perSize;
//		}
//	}
//}
//void SortPerson(PersonArray& pArray) {
//
//	Sort(pArray.perArray, pArray.perSize);
//
//}
//
///////////////////////////////////////////////
//void Menu() {
//
//
//	printf("\n\n=====================\n");
//	printf("1. 전화번호 등록\n");
//	printf("2. 전화번호 출력\n");
//	printf("3. 전화번호 검색\n");
//	printf("4. 전화번호 삭제\n");
//	printf("5. 전화번호 정렬\n");
//	printf("0. 프로그램 종료\n");
//	printf("=====================\n\n");
//}
//int main() {
//	PersonArray pArray = {0};
//
//	while (1) {
//
//		Menu();
//		switch (_getch()) { //_getch() 비쥬얼스튜디오 내장함수
//		case '1':
//			AddPerson(pArray);
//			break;
//		case '2':
//			PrintPerson(pArray);
//			break;
//		case '3':
//			SearchPerson(pArray);
//			break;
//		case '4':
//			RemovePerson(pArray);
//			break;
//		case '5':
//			SortPerson(pArray);
//			break;
//		case '0':
//			return 0;
//			break;
//		}
//
//	}
//	system("pause");
//}
//


//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <conio.h>
//struct Person {
//
//	char name[20];
//	char phone[20];
//
//};
//
//void Swap(Person& a, Person& b) {
//	Person t = a;
//	a = b;
//	b = t;
//}
//
//void Sort(Person list[], int size) {
//
//	for (int idx = 1; idx < size; ++idx)
//	{
//
//		Person value = list[idx];
//
//		int i;
//		for (i = idx - 1; 0 <= i; --i) {
//			if (strcmp(value.name, list[i].name) < 0 )//strcmp 뒤 매개변수가 크면 -1 반환
//				list[i + 1] = list[i];
//			else
//				break;
//		}
//		list[i + 1] = value;
//
//	}
//
//}
//void AddPerson(Person perArray[], int& perSize) {
//	printf("이름, 전화번호 입력:\n");
//	scanf_s("%s", perArray[perSize].name, 20);
//	scanf_s("%s", perArray[perSize].phone, 20);
//	++perSize;
//}
//void PrintPerson(Person perArray[], int perSize) {
//	for (int i = 0; i < perSize; ++i) {
//		printf("[%d]: name:%s, phone:%s\n", i, perArray[i].name, perArray[i].phone);
//	}
//}
//void SearchPerson(Person perArray[], int perSize) {
//	char name[20];
//	printf("찾는 이름 입력:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < perSize; ++i) {
//		if (strcmp(name, perArray[i].name) == 0) { //strcmp는 두 문자열이 같으면 0 반환
//			printf("[%d] : name:%s, phone:%s\n", i,
//				perArray[i].name, perArray[i].phone);
//		}
//	}
//
//}
//void RemovePerson(Person perArray[], int& perSize) {
//	char name[20];
//	printf("삭제 이름 입력:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < perSize; ++i) {
//		if (strcmp(name, perArray[i].name) == 0) { //strcmp는 두 문자열이 같으면 0 반환
//			for (int j = i; j < perSize - 1; ++j)
//				perArray[j] = perArray[j + 1];
//			--perSize;
//		}
//	}
//}
//void SortPerson(Person perArray[], int perSize) {
//
//	Sort(perArray, perSize);
//
//}
//
///////////////////////////////////////////////
//void Menu() {
//
//	printf("\n\n=====================\n");
//	printf("1. 전화번호 등록\n");
//	printf("2. 전화번호 출력\n");
//	printf("3. 전화번호 검색\n");
//	printf("4. 전화번호 삭제\n");
//	printf("5. 전화번호 정렬\n");
//	printf("0. 프로그램 종료\n");
//	printf("=====================\n\n");
//}
//int main() {
//	Person perArray[100];
//	int perSize = 0;
//	while (1) {
//
//		Menu();
//		switch (_getch()) { //_getch() 비쥬얼스튜디오 내장함수
//		case '1':
//			AddPerson(perArray, perSize);
//			break;
//		case '2':
//			PrintPerson(perArray, perSize);
//			break;
//		case '3':
//			SearchPerson(perArray, perSize);
//			break;
//		case '4':
//			RemovePerson(perArray, perSize);
//			break;
//		case '5':
//			SortPerson(perArray, perSize);
//			break;
//		case '0':
//			return 0;
//			break;
//		}
//
//	}
//	system("pause");
//}
//


//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <conio.h>
//struct Person {
//
//	char name[20];
//	char phone[20];
//
//};
//void AddPerson(Person perArray[], int& perSize) {
//	printf("이름, 전화번호 입력:\n");
//	scanf_s("%s", perArray[perSize].name, 20);
//	scanf_s("%s", perArray[perSize].phone, 20);
//	++perSize;
//}
//void PrintPerson(Person perArray[], int perSize) {
//	for (int i = 0; i < perSize; ++i) {
//		printf("[%d]: name:%s, phone:%s\n", i, perArray[i].name, perArray[i].phone);
//	}
//}
//void SearchPerson(Person perArray[], int perSize) {
//	char name[20];
//	printf("찾는 이름 입력:");
//	scanf_s("%s", name,20);
//
//	for (int i = 0; i < perSize; ++i) {
//		if (strcmp(name, perArray[i].name) == 0) { //strcmp는 두 문자열이 같으면 0 반환
//			printf("[%d] : name:%s, phone:%s\n", i, 
//				perArray[i].name, perArray[i].phone);
//		}
//	}
//
//}
//void RemovePerson(Person perArray[], int& perSize) {
//	char name[20];
//	printf("삭제 이름 입력:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < perSize; ++i) {
//		if (strcmp(name, perArray[i].name) == 0) { //strcmp는 두 문자열이 같으면 0 반환
//			for (int j = i; j < perSize-1; ++j)
//				perArray[j] = perArray[j + 1];
//			--perSize;
//		}
//	}
//}
//void SortPerson(Person perArray[], int perSize) {
//
//
//}
//
///// /////////////////////////////////////////
//void Menu() {
//
//	printf("\n\n=====================\n");
//	printf("1. 전화번호 등록\n");
//	printf("2. 전화번호 출력\n");
//	printf("3. 전화번호 검색\n");
//	printf("4. 전화번호 삭제\n");
//	printf("5. 전화번호 정렬\n");
//	printf("0. 프로그램 종료\n");
//	printf("=====================\n\n");
//}
//int main() {
//	Person perArray[100];
//	int perSize = 0;
//	while (1) {
//
//		Menu();
//		switch (_getch()) { //_getch() 비쥬얼스튜디오 내장함수
//		case '1':
//			AddPerson(perArray, perSize);
//			break;
//		case '2':
//			PrintPerson(perArray, perSize);
//			break;
//		case '3':
//			SearchPerson(perArray, perSize);
//			break;
//		case '4':
//			RemovePerson(perArray, perSize);
//			break;
//		case '5':
//			SortPerson(perArray, perSize);
//			break;
//		case '0':
//			return 0;
//			break;
//		}
//
//	}
//	system("pause");
//}
//

//#include <cstdio>
//#include <cstdlib>
//#include <conio.h>
//struct Person {
//
//	char name[20];
//	char phone[20];
//
//};
//void AddPerson(Person perArray[], int& perSize) {
//	printf("이름, 전화번호 입력:\n");
//	scanf_s("%s", perArray[perSize].name, 20);
//	scanf_s("%s", perArray[perSize].phone, 20);
//	++perSize;
//}
//void PrintPerson(Person perArray[], int perSize) {
//	for (int i = 0; i < perSize; ++i) {
//		printf("[%d]: name:%s, phone:%s\n", i,perArray[i].name, perArray[i].phone);
//	}
//}
//int main() {
//
//	Person perArray[100];
//	int perSize = 0;
//
//	AddPerson(perArray, perSize);
//	AddPerson(perArray, perSize);
//
//
//	PrintPerson(perArray, perSize);
//
//	system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//#include <conio.h>
//struct Person {
//
//	char name[20];
//	char phone[20];
//
//};
//
//int main() {
//
//	Person perArray[100];
//	int perSize = 0; 
//	
//	printf("이름, 전화번호 입력:\n");
//	scanf_s("%s", perArray[perSize].name, 20);
//	scanf_s("%s", perArray[perSize].phone, 20);
//	++perSize;
//	
//	printf("이름, 전화번호 입력:\n");
//	scanf_s("%s", perArray[perSize].name, 20);
//	scanf_s("%s", perArray[perSize].phone, 20);
//	++perSize;
//
//	for (int i = 0; i < perSize; ++i) {
//		printf("name:%s, phone:%s\n", perArray[i].name, perArray[i].phone);
//	}
//
//	system("pause");
//}


//#include <cstdio>
//#include <cstdlib>
//#include <conio.h>
//struct Person {
//
//	char name[20];
//	char phone[20];
//
//};
//
//int main() {
//
//	Person perArray[100] = 
//	{   {"홍길동","010-1111-2222"},
//		{"이몽룡","010-5678-2222"}  };
//
//	printf("%s %s\n", perArray[0].name, perArray[0].phone);
//	printf("%s %s\n", perArray[1].name, perArray[1].phone);
//
//	system("pause");
//}


//#include <cstdio>
//#include <cstdlib>
//#include <conio.h>
//struct Person {
//
//	char name[20];
//	char phone[20];
//
//};
//
//int main() {
//
//	Person per = { "홍길동","010-1111-2222" };
//	Person per2 = { "이몽룡","010-5678-2222" };
//
//	printf("%s %s\n", per.name, per.phone);
//	printf("%s %s\n", per2.name, per2.phone);
//	
//	system("pause");
//}


//#include <cstdio>
//#include <cstdlib>
//#include <conio.h>
//
//int main() {
//	
//	char name[20] = "홍길동";
//	char name2[20] = "이몽룡";
//	char phone[20] = "010-1111,2222";
//	char phone2[20] = "010-5678,2222";
//
//	printf("%s %s\n", name, phone);
//	printf("%s %s\n", name2, phone2);
//	system("pause");
//}


//#include <cstdio>
//#include <cstdlib>
//#include <conio.h>
//void Menu() {
//
//	printf("\n");
//	printf("1. 전화번호 등록\n");
//	printf("2. 전화번호 출력\n");
//	printf("3. 전화번호 검색\n");
//	printf("4. 전화번호 삭제\n");
//	printf("5. 전화번호 정렬\n");
//	printf("0. 프로그램 종료\n");
//	printf("=====================\n\n");
//}
//int main() {
//	while (1) {
//
//		Menu();
//		switch (_getch()) { //_getch() 비쥬얼스튜디오 내장함수
//		case '1':
//			printf("전화번호 등록!\n");
//			break;
//		case '2':
//			printf("전화번호 출력!\n");
//			break;
//		case '3':
//			printf("전화번호 검색!\n");
//			break;
//		case '4':
//			printf("전화번호 삭제!\n");
//			break;
//		case '5':
//			printf("전화번호 정렬!\n");
//			break;
//		case '0':
//			return 0;
//			break;
//		}
//
//	}
//	system("pause");
//}


//#include <cstdio>
//#include <cstdlib>
//void Menu() {
//
//	printf("1. 전화번호 등록\n");
//	printf("2. 전화번호 출력\n");
//	printf("3. 전화번호 검색\n");
//	printf("4. 전화번호 삭제\n");
//	printf("5. 전화번호 정렬\n");
//	printf("0. 프로그램 종료\n");
//
//}
//int main() {
//	while (1) {
//
//		Menu();
//		switch (getchar()) {
//		case '1':
//			break;
//		case '2':
//			break;
//		case '3':
//			break;
//		case '4':
//			break;
//		case '5':
//			break;
//		case '0':
//			return 0;
//			break;
//		}
//		getchar();
//
//	} 
//	system("pause");
//}


//#include <cstdio>
//#include <cstdlib>
//void Menu() {
//
//	printf("1. 전화번호 등록\n");
//	printf("2. 전화번호 출력\n");
//	printf("3. 전화번호 검색\n");
//	printf("4. 전화번호 삭제\n");
//	printf("5. 전화번호 정렬\n");
//	printf("0. 프로그램 종료\n");
//
//}
//int main() {
//	while (1) {
//
//		Menu();
//		switch (getchar()) {
//		case '1':
//			break;
//		case '2':
//			break;
//		case '3':
//			break;
//		case '4':
//			break;
//		case '5':
//			break;
//		case '0':
//			return 0;
//			break;
//		}
//	}
//
//	system("pause");
//}
//#include <cstdio>
//#include <cstdlib>
//void Menu() {
//
//	printf("1. 전화번호 등록\n");
//	printf("2. 전화번호 출력\n");
//	printf("3. 전화번호 검색\n");
//	printf("4. 전화번호 삭제\n");
//	printf("5. 전화번호 정렬\n");
//	printf("0. 프로그램 종료\n");
//
//}
//int main() {
//	while (1) {
//
//		Menu();
//		switch (getchar()) {
//		case '1':
//			break;
//		case '2':
//			break;
//		case '3':
//			break;
//		case '4':
//			break;
//		case '5':
//			break;
//		case '0':
//			return 0;
//			break;
//		}
//	}
//
//	system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//
//int main() {
//	printf("1. 전화번호 등록\n");
//	printf("2. 전화번호 출력\n");
//	printf("3. 전화번호 검색\n");
//	printf("4. 전화번호 삭제\n");
//	printf("5. 전화번호 정렬\n");
//	printf("0. 프로그램 종료\n");
//
//
//	system("pause"); 
//}