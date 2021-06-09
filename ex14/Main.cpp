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
			if (strcmp(value.name, list[i].name) < 0)//strcmp �� �Ű������� ũ�� -1 ��ȯ
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
		printf("�̸�, ��ȭ��ȣ �Է�:\n");
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
		printf("ã�� �̸� �Է�:");
		scanf_s("%s", name, 20);

		for (int i = 0; i < perSize; ++i) {
			if (strcmp(name, perArray[i].name) == 0) { //strcmp�� �� ���ڿ��� ������ 0 ��ȯ
				printf("[%d] : name:%s, phone:%s\n", i,
					perArray[i].name, perArray[i].phone);
			}
		}

	}
	void RemovePerson() {
		char name[20];
		printf("���� �̸� �Է�:");
		scanf_s("%s", name, 20);

		for (int i = 0; i < perSize; ++i) {
			if (strcmp(name, perArray[i].name) == 0) { //strcmp�� �� ���ڿ��� ������ 0 ��ȯ
				for (int j = i; j < perSize - 1; ++j)
					perArray[j] = perArray[j + 1];
				--perSize;
			}
		}
	}
	void SortPerson() {

		Sort(perArray, perSize);

	}
	PersonArray(int cap = 100) { //������ �ʱ�ȭ�� ���� �ڵ� ȣ��, Ŭ������ �̸��� �����ϰ� ������� // �������ϸ� 100��  �����ϸ� ������ ������ŭ

		perArray = new Person[cap];
		perSize = 0;
		perCapacity = cap;

	}
	~PersonArray() { //�Ҹ��� main�Լ� ����� �ڵ� ȣ��
		delete[] perArray;
	}
};

/////////////////////////////////////////////
void Menu() {


	printf("\n\n=====================\n");
	printf("1. ��ȭ��ȣ ���\n");
	printf("2. ��ȭ��ȣ ���\n");
	printf("3. ��ȭ��ȣ �˻�\n");
	printf("4. ��ȭ��ȣ ����\n");
	printf("5. ��ȭ��ȣ ����\n");
	printf("0. ���α׷� ����\n");
	printf("=====================\n\n");
}
int main() {
	bool bRun = true;
	PersonArray pArray(10000);

	while (bRun) {

		Menu();
		switch (_getch()) { //_getch() �����Ʃ��� �����Լ�
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
//			if (strcmp(value.name, list[i].name) < 0)//strcmp �� �Ű������� ũ�� -1 ��ȯ
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
//		printf("�̸�, ��ȭ��ȣ �Է�:\n");
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
//		printf("ã�� �̸� �Է�:");
//		scanf_s("%s", name, 20);
//
//		for (int i = 0; i < perSize; ++i) {
//			if (strcmp(name, perArray[i].name) == 0) { //strcmp�� �� ���ڿ��� ������ 0 ��ȯ
//				printf("[%d] : name:%s, phone:%s\n", i,
//					perArray[i].name, perArray[i].phone);
//			}
//		}
//
//	}
//	void RemovePerson() {
//		char name[20];
//		printf("���� �̸� �Է�:");
//		scanf_s("%s", name, 20);
//
//		for (int i = 0; i < perSize; ++i) {
//			if (strcmp(name, perArray[i].name) == 0) { //strcmp�� �� ���ڿ��� ������ 0 ��ȯ
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
//	PersonArray(int cap=100) { //������ �ʱ�ȭ�� ���� �ڵ� ȣ��, Ŭ������ �̸��� �����ϰ� ������� // �������ϸ� 100��  �����ϸ� ������ ������ŭ
//
//		perArray = new Person[cap];
//		perSize = 0;
//		perCapacity = cap;
//
//	}
//	~PersonArray() { //�Ҹ��� main�Լ� ����� �ڵ� ȣ��
//		delete[] perArray;
//	}
//};
//
///////////////////////////////////////////////
//void Menu() {
//
//
//	printf("\n\n=====================\n");
//	printf("1. ��ȭ��ȣ ���\n");
//	printf("2. ��ȭ��ȣ ���\n");
//	printf("3. ��ȭ��ȣ �˻�\n");
//	printf("4. ��ȭ��ȣ ����\n");
//	printf("5. ��ȭ��ȣ ����\n");
//	printf("0. ���α׷� ����\n");
//	printf("=====================\n\n");
//}
//int main() {
//
//	PersonArray pArray(10000);
//
//	while (1) {
//
//		Menu();
//		switch (_getch()) { //_getch() �����Ʃ��� �����Լ�
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
//			if (strcmp(value.name, list[i].name) < 0)//strcmp �� �Ű������� ũ�� -1 ��ȯ
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
//		printf("�̸�, ��ȭ��ȣ �Է�:\n");
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
//		printf("ã�� �̸� �Է�:");
//		scanf_s("%s", name, 20);
//
//		for (int i = 0; i < perSize; ++i) {
//			if (strcmp(name,perArray[i].name) == 0) { //strcmp�� �� ���ڿ��� ������ 0 ��ȯ
//				printf("[%d] : name:%s, phone:%s\n", i,
//					perArray[i].name, perArray[i].phone);
//			}
//		}
//
//	}
//	void RemovePerson() {
//		char name[20];
//		printf("���� �̸� �Է�:");
//		scanf_s("%s", name, 20);
//
//		for (int i = 0; i < perSize; ++i) {
//			if (strcmp(name, perArray[i].name) == 0) { //strcmp�� �� ���ڿ��� ������ 0 ��ȯ
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
//	printf("1. ��ȭ��ȣ ���\n");
//	printf("2. ��ȭ��ȣ ���\n");
//	printf("3. ��ȭ��ȣ �˻�\n");
//	printf("4. ��ȭ��ȣ ����\n");
//	printf("5. ��ȭ��ȣ ����\n");
//	printf("0. ���α׷� ����\n");
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
//		switch (_getch()) { //_getch() �����Ʃ��� �����Լ�
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
�Ʒ� �ڵ�� C��� ���� ���� ������� �ϼ��� ��ȭ��ȣ�� ���ø����̼�
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
//			if (strcmp(value.name, list[i].name) < 0)//strcmp �� �Ű������� ũ�� -1 ��ȯ
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
//	printf("�̸�, ��ȭ��ȣ �Է�:\n");
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
//	printf("ã�� �̸� �Է�:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < pArray.perSize; ++i) {
//		if (strcmp(name, pArray.perArray[i].name) == 0) { //strcmp�� �� ���ڿ��� ������ 0 ��ȯ
//			printf("[%d] : name:%s, phone:%s\n", i,
//				pArray.perArray[i].name, pArray.perArray[i].phone);
//		}
//	}
//
//}
//void RemovePerson(PersonArray& pArray) {
//	char name[20];
//	printf("���� �̸� �Է�:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < pArray.perSize; ++i) {
//		if (strcmp(name, pArray.perArray[i].name) == 0) { //strcmp�� �� ���ڿ��� ������ 0 ��ȯ
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
//	printf("1. ��ȭ��ȣ ���\n");
//	printf("2. ��ȭ��ȣ ���\n");
//	printf("3. ��ȭ��ȣ �˻�\n");
//	printf("4. ��ȭ��ȣ ����\n");
//	printf("5. ��ȭ��ȣ ����\n");
//	printf("0. ���α׷� ����\n");
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
//		switch (_getch()) { //_getch() �����Ʃ��� �����Լ�
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
//			if (strcmp(value.name, list[i].name) < 0)//strcmp �� �Ű������� ũ�� -1 ��ȯ
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
//	printf("�̸�, ��ȭ��ȣ �Է�:\n");
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
//	printf("ã�� �̸� �Է�:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < pArray.perSize; ++i) {
//		if (strcmp(name, pArray.perArray[i].name) == 0) { //strcmp�� �� ���ڿ��� ������ 0 ��ȯ
//			printf("[%d] : name:%s, phone:%s\n", i,
//				pArray.perArray[i].name, pArray.perArray[i].phone);
//		}
//	}
//
//}
//void RemovePerson(PersonArray& pArray) {
//	char name[20];
//	printf("���� �̸� �Է�:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < pArray.perSize; ++i) {
//		if (strcmp(name, pArray.perArray[i].name) == 0) { //strcmp�� �� ���ڿ��� ������ 0 ��ȯ
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
//	printf("1. ��ȭ��ȣ ���\n");
//	printf("2. ��ȭ��ȣ ���\n");
//	printf("3. ��ȭ��ȣ �˻�\n");
//	printf("4. ��ȭ��ȣ ����\n");
//	printf("5. ��ȭ��ȣ ����\n");
//	printf("0. ���α׷� ����\n");
//	printf("=====================\n\n");
//}
//int main() {
//	PersonArray pArray;
//	InitPerson(pArray);
//
//	while (1) {
//
//		Menu();
//		switch (_getch()) { //_getch() �����Ʃ��� �����Լ�
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
//			if (strcmp(value.name, list[i].name) < 0)//strcmp �� �Ű������� ũ�� -1 ��ȯ
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
//	printf("�̸�, ��ȭ��ȣ �Է�:\n");
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
//	printf("ã�� �̸� �Է�:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < pArray.perSize; ++i) {
//		if (strcmp(name, pArray.perArray[i].name) == 0) { //strcmp�� �� ���ڿ��� ������ 0 ��ȯ
//			printf("[%d] : name:%s, phone:%s\n", i,
//				pArray.perArray[i].name, pArray.perArray[i].phone);
//		}
//	}
//
//}
//void RemovePerson(PersonArray& pArray) {
//	char name[20];
//	printf("���� �̸� �Է�:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < pArray.perSize; ++i) {
//		if (strcmp(name, pArray.perArray[i].name) == 0) { //strcmp�� �� ���ڿ��� ������ 0 ��ȯ
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
//	printf("1. ��ȭ��ȣ ���\n");
//	printf("2. ��ȭ��ȣ ���\n");
//	printf("3. ��ȭ��ȣ �˻�\n");
//	printf("4. ��ȭ��ȣ ����\n");
//	printf("5. ��ȭ��ȣ ����\n");
//	printf("0. ���α׷� ����\n");
//	printf("=====================\n\n");
//}
//int main() {
//	PersonArray pArray = {0};
//
//	while (1) {
//
//		Menu();
//		switch (_getch()) { //_getch() �����Ʃ��� �����Լ�
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
//			if (strcmp(value.name, list[i].name) < 0 )//strcmp �� �Ű������� ũ�� -1 ��ȯ
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
//	printf("�̸�, ��ȭ��ȣ �Է�:\n");
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
//	printf("ã�� �̸� �Է�:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < perSize; ++i) {
//		if (strcmp(name, perArray[i].name) == 0) { //strcmp�� �� ���ڿ��� ������ 0 ��ȯ
//			printf("[%d] : name:%s, phone:%s\n", i,
//				perArray[i].name, perArray[i].phone);
//		}
//	}
//
//}
//void RemovePerson(Person perArray[], int& perSize) {
//	char name[20];
//	printf("���� �̸� �Է�:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < perSize; ++i) {
//		if (strcmp(name, perArray[i].name) == 0) { //strcmp�� �� ���ڿ��� ������ 0 ��ȯ
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
//	printf("1. ��ȭ��ȣ ���\n");
//	printf("2. ��ȭ��ȣ ���\n");
//	printf("3. ��ȭ��ȣ �˻�\n");
//	printf("4. ��ȭ��ȣ ����\n");
//	printf("5. ��ȭ��ȣ ����\n");
//	printf("0. ���α׷� ����\n");
//	printf("=====================\n\n");
//}
//int main() {
//	Person perArray[100];
//	int perSize = 0;
//	while (1) {
//
//		Menu();
//		switch (_getch()) { //_getch() �����Ʃ��� �����Լ�
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
//	printf("�̸�, ��ȭ��ȣ �Է�:\n");
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
//	printf("ã�� �̸� �Է�:");
//	scanf_s("%s", name,20);
//
//	for (int i = 0; i < perSize; ++i) {
//		if (strcmp(name, perArray[i].name) == 0) { //strcmp�� �� ���ڿ��� ������ 0 ��ȯ
//			printf("[%d] : name:%s, phone:%s\n", i, 
//				perArray[i].name, perArray[i].phone);
//		}
//	}
//
//}
//void RemovePerson(Person perArray[], int& perSize) {
//	char name[20];
//	printf("���� �̸� �Է�:");
//	scanf_s("%s", name, 20);
//
//	for (int i = 0; i < perSize; ++i) {
//		if (strcmp(name, perArray[i].name) == 0) { //strcmp�� �� ���ڿ��� ������ 0 ��ȯ
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
//	printf("1. ��ȭ��ȣ ���\n");
//	printf("2. ��ȭ��ȣ ���\n");
//	printf("3. ��ȭ��ȣ �˻�\n");
//	printf("4. ��ȭ��ȣ ����\n");
//	printf("5. ��ȭ��ȣ ����\n");
//	printf("0. ���α׷� ����\n");
//	printf("=====================\n\n");
//}
//int main() {
//	Person perArray[100];
//	int perSize = 0;
//	while (1) {
//
//		Menu();
//		switch (_getch()) { //_getch() �����Ʃ��� �����Լ�
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
//	printf("�̸�, ��ȭ��ȣ �Է�:\n");
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
//	printf("�̸�, ��ȭ��ȣ �Է�:\n");
//	scanf_s("%s", perArray[perSize].name, 20);
//	scanf_s("%s", perArray[perSize].phone, 20);
//	++perSize;
//	
//	printf("�̸�, ��ȭ��ȣ �Է�:\n");
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
//	{   {"ȫ�浿","010-1111-2222"},
//		{"�̸���","010-5678-2222"}  };
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
//	Person per = { "ȫ�浿","010-1111-2222" };
//	Person per2 = { "�̸���","010-5678-2222" };
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
//	char name[20] = "ȫ�浿";
//	char name2[20] = "�̸���";
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
//	printf("1. ��ȭ��ȣ ���\n");
//	printf("2. ��ȭ��ȣ ���\n");
//	printf("3. ��ȭ��ȣ �˻�\n");
//	printf("4. ��ȭ��ȣ ����\n");
//	printf("5. ��ȭ��ȣ ����\n");
//	printf("0. ���α׷� ����\n");
//	printf("=====================\n\n");
//}
//int main() {
//	while (1) {
//
//		Menu();
//		switch (_getch()) { //_getch() �����Ʃ��� �����Լ�
//		case '1':
//			printf("��ȭ��ȣ ���!\n");
//			break;
//		case '2':
//			printf("��ȭ��ȣ ���!\n");
//			break;
//		case '3':
//			printf("��ȭ��ȣ �˻�!\n");
//			break;
//		case '4':
//			printf("��ȭ��ȣ ����!\n");
//			break;
//		case '5':
//			printf("��ȭ��ȣ ����!\n");
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
//	printf("1. ��ȭ��ȣ ���\n");
//	printf("2. ��ȭ��ȣ ���\n");
//	printf("3. ��ȭ��ȣ �˻�\n");
//	printf("4. ��ȭ��ȣ ����\n");
//	printf("5. ��ȭ��ȣ ����\n");
//	printf("0. ���α׷� ����\n");
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
//	printf("1. ��ȭ��ȣ ���\n");
//	printf("2. ��ȭ��ȣ ���\n");
//	printf("3. ��ȭ��ȣ �˻�\n");
//	printf("4. ��ȭ��ȣ ����\n");
//	printf("5. ��ȭ��ȣ ����\n");
//	printf("0. ���α׷� ����\n");
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
//	printf("1. ��ȭ��ȣ ���\n");
//	printf("2. ��ȭ��ȣ ���\n");
//	printf("3. ��ȭ��ȣ �˻�\n");
//	printf("4. ��ȭ��ȣ ����\n");
//	printf("5. ��ȭ��ȣ ����\n");
//	printf("0. ���α׷� ����\n");
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
//	printf("1. ��ȭ��ȣ ���\n");
//	printf("2. ��ȭ��ȣ ���\n");
//	printf("3. ��ȭ��ȣ �˻�\n");
//	printf("4. ��ȭ��ȣ ����\n");
//	printf("5. ��ȭ��ȣ ����\n");
//	printf("0. ���α׷� ����\n");
//
//
//	system("pause"); 
//}