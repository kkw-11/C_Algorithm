#include<cstdio> 
#include <cstdlib>
#include<list>
using namespace std;

struct Hash {
	list<int>* table;
	int tableSize;
	int (*pHashFunction)(int, int);

};
int HashFunction(int key, int tableSize) {

	int addr = key % (tableSize);//잘 작성! 효율적인 해쉬 구조
	return addr;
}
void PushHash(Hash* ph, int key) {
	int addr = (ph->pHashFunction)(key, ph->tableSize);
	ph->table[addr].push_back(key);
}
bool FindHash(Hash* ph, int key) {

	int addr = (ph->pHashFunction)(key, ph->tableSize);
	for (list<int>::iterator iter = ph->table[addr].begin(); iter != ph->table[addr].end(); ++iter)
		if (*iter == key)
			return true;
	return false;
}
void PopHash(Hash* ph, int key) {
	int addr = (ph->pHashFunction)(key, ph->tableSize);
	for (list<int>::iterator iter = ph->table[addr].begin(); iter != ph->table[addr].end(); ++iter) {
		if (*iter == key) {
			ph->table[addr].erase(iter);
			break;

		}
	}
}

void PrintHash(Hash* ph) {
	for (int i = 0; i < ph->tableSize; ++i) {
		printf("[%d]: ", i);
		for (list<int>::iterator iter = ph->table[i].begin(); iter != ph->table[i].end(); ++iter)
			printf("%d ", *iter);
		printf("\n");

	}
}
void InitHash(Hash* ph, int tableSize, int (*phf)(int, int) = 0) {
	if (phf == 0)
		ph->pHashFunction = HashFunction;
	else
		ph->pHashFunction = phf;
	ph->tableSize = tableSize;
	ph->table = new list<int>[tableSize];

}
void UninitHash(Hash* ph) {
	delete[] ph->table;
}

////////////////////////////////////////////////////
int MyHF(int key, int tableSize) {

	return (key >> 3) % tableSize;

}
int main() {

	Hash h;
	//InitHash(&h, 10, MyHF);
	InitHash(&h, 10);

	PushHash(&h, 10);
	PushHash(&h, 50);
	PushHash(&h, 60);
	PushHash(&h, 90);
	PushHash(&h, 32);
	PushHash(&h, 197);

	PrintHash(&h);


	UninitHash(&h);
	system("pause");

	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
// 아래코드는 리패토링전 스터디 코드


//#include<cstdio>
//#include <cstdlib>
//#include<list>
//using namespace std;
//
//struct Hash {
//	list<int>* table;
//	int tableSize;
//};
//int HashFunction(int key, int tableSize) {
//
//	int addr = key % (tableSize);//잘 작성! 효율적인 해쉬 구조
//	return addr;
//}
//void PushHash(Hash* ph, int key) {
//	int addr = HashFunction(key, ph->tableSize);
//	ph->table[addr].push_back(key);
//}
//bool FindHash(Hash* ph, int key) {
//
//	int addr = HashFunction(key, ph->tableSize);
//	for (list<int>::iterator iter = ph->table[addr].begin(); iter != ph->table[addr].end(); ++iter)
//		if (*iter == key)
//			return true;
//	return false;
//}
//void PopHash(Hash* ph, int key) {
//	int addr = HashFunction(key, ph->tableSize);
//	for (list<int>::iterator iter = ph->table[addr].begin();iter != ph->table[addr].end();++iter) {
//		if (*iter == key) {
//			ph->table[addr].erase(iter);
//			break;
//
//		}
//
//	}
//}
//
//void PrintHash(Hash* ph) {
//	for (int i = 0; i < ph->tableSize; ++i) {
//		printf("[%d]: ", i);
//		for (list<int>::iterator iter = ph->table[i].begin(); iter != ph->table[i].end(); ++iter)
//			printf("%d ", *iter);
//		printf("\n");
//
//	}
//}
//void InitHash(Hash* ph, int tableSize) {
//	ph->tableSize = tableSize;
//	ph->table = new list<int>[tableSize];
//
//}
//void UninitHash(Hash* ph) {
//	delete[] ph->table;
//}
//int main() {
//
//	Hash h;
//	InitHash(&h, 10);
//	PushHash(&h, 10);
//	PushHash(&h, 57);
//	PushHash(&h, 65);
//	PushHash(&h, 59);
//	PushHash(&h, 32);
//	PushHash(&h, 197);
//
//	PrintHash(&h);
//
//	PopHash(&h, 65);
//	PrintHash(&h);
//
//	UninitHash(&h);
//	system("pause");
//
//	return 0;
//}


//#include<cstdio>
//#include <cstdlib>
//#include<list>
//using namespace std;
//
//int main() {
//
//	list<int> lt;
//
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//
//	list<int>::iterator iter = lt.begin();
//		
//	++iter;
//	++iter;
//
//	lt.erase(iter);
//	for (list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter) {
//		printf("%d\n", *iter);
//	}
//
//	system("pause");
//	return 0;
//}

//#include<cstdio>
//#include <cstdlib>
//#include<list>
//using namespace std;
//
//struct Hash {
//	list<int>* table;
//	int tableSize;
//};
//int HashFunction(int key, int tableSize) {
//
//	int addr = key % (tableSize);//잘 작성! 효율적인 해쉬 구조
//	return addr;
//}
//void PushHash(Hash* ph, int key) {
//	int addr = HashFunction(key, ph->tableSize);
//	ph->table[addr].push_back(key);
//}
//bool FindHash(Hash* ph, int key) {
//
//	int addr = HashFunction(key, ph->tableSize);
//	for (list<int>::iterator iter = ph->table[addr].begin(); iter != ph->table[addr].end(); ++iter)
//		if (*iter == key)
//			return true;
//	return false;
//}
//void PopHash(Hash* ph, int key) {
//	int addr = HashFunction(key, ph->tableSize);
//
//}
//
//void PrintHash(Hash* ph) {
//	for (int i = 0; i < ph->tableSize; ++i) {
//		printf("[%d]: ", i);
//		for (list<int>::iterator iter = ph->table[i].begin(); iter != ph->table[i].end(); ++iter)
//			printf("%d ", *iter);
//		printf("\n");
//
//	}
//}
//void InitHash(Hash* ph, int tableSize) {
//	ph->tableSize = tableSize;
//	ph->table = new list<int>[tableSize];
//
//}
//void UninitHash(Hash* ph) {
//	delete[] ph->table;
//}
//int main() {
//
//	Hash h;
//	InitHash(&h, 10);
//	PushHash(&h, 10);
//	PushHash(&h, 57);
//	PushHash(&h, 65);
//	PushHash(&h, 59);
//	PushHash(&h, 32);
//	PushHash(&h, 197);
//
//	PrintHash(&h);
//
//	PopHash(&h, 65);
//	UninitHash(&h);
//	system("pause");
//
//	return 0;
//}

//#include<cstdio>
//#include <cstdlib>
//#include<list>
//using namespace std;
//
//struct Hash {
//	list<int>* table;
//	int tableSize;
//};
//int HashFunction(int key, int tableSize) {
//
//	int addr = key % (tableSize);//잘 작성! 효율적인 해쉬 구조
//	return addr;
//}
//void PushHash(Hash* ph, int key) {
//	int addr = HashFunction(key,ph->tableSize);
//	ph->table[addr].push_back(key);
//}
//bool FindHash(Hash* ph, int key) {
//
//	int addr = HashFunction(key,ph->tableSize);
//	for (list<int>::iterator iter = ph->table[addr].begin(); iter != ph->table[addr].end(); ++iter)
//		if (*iter == key)
//			return true;
//	return false;
//}
//void PrintHash(Hash* ph) {
//	for (int i = 0; i < ph->tableSize; ++i) {
//		printf("[%d]: ", i);
//		for (list<int>::iterator iter = ph->table[i].begin(); iter != ph->table[i].end(); ++iter)
//			printf("%d ", *iter);
//		printf("\n");
//
//	}
//}
//void InitHash(Hash* ph,int tableSize) {
//	ph->tableSize = tableSize;
//	ph->table = new list<int>[tableSize];
//
//}
//void UninitHash(Hash* ph) {
//	delete[] ph->table;
//}
//int main() {
//
//	Hash h;
//	InitHash(&h,100);
//	PushHash(&h, 10);
//	PushHash(&h, 57);
//	PushHash(&h, 65);
//	PushHash(&h, 59);
//	PushHash(&h, 32);
//	PushHash(&h, 197);
//
//	PrintHash(&h);
//
//	if (FindHash(&h, 100))
//		printf("존재!\n");
//	else
//		printf("없음!\n");
//	
//	UninitHash(&h);
//	system("pause");
//
//	return 0;
//}

//#include<cstdio>
//#include <cstdlib>
//#include<list>
//using namespace std;
//
//struct Hash {
//	list<int> table[10];
//
//};
//int HashFunction(int key) {
//
//	int addr = key % 10;//잘 작성! 효율적인 해쉬 구조
//	return addr;
//}
//void PushHash(Hash* ph, int key) {
//	int addr = HashFunction(key);
//	ph->table[addr].push_back(key);
//}
//bool FindHash(Hash* ph, int key) {
//
//	int addr = HashFunction(key);
//	for (list<int>::iterator iter = ph->table[addr].begin(); iter != ph->table[addr].end(); ++iter)
//		if (*iter == key)
//			return true;
//	return false;
//}
//void PrintHash(Hash* ph) {
//	for (int i = 0; i < 10; ++i) {
//		printf("[%d]: ", i);
//		for (list<int>::iterator iter = ph->table[i].begin(); iter != ph->table[i].end(); ++iter)
//			printf("%d ", *iter);
//		printf("\n");
//
//	}
//}
//
//int main() {
//
//	Hash h;
//	PushHash(&h,10);
//	PushHash(&h, 57);
//	PushHash(&h, 65);
//	PushHash(&h, 59);
//	PushHash(&h, 32);
//	PushHash(&h, 197);
//
//	PrintHash(&h);
//
//	if (FindHash(&h, 100))
//		printf("존재!\n");
//	else
//		printf("없음!\n");
//	system("pause");
//
//	return 0;
//}

//#include<cstdio>
//#include <cstdlib>
//#include<list>
//using namespace std;
//
//list<int> table[10];
//int HashFunction(int key) {
//
//	int addr = key % 10;//잘 작성! 효율적인 해쉬 구조
//	return addr;
//}
//void PushHash(int key) {
//	int addr = HashFunction(key);
//	table[addr].push_back(key);
//}
//bool FindHash(int key) {
//
//	int addr = HashFunction(key);
//	for (list<int>::iterator iter = table[addr].begin(); iter != table[addr].end(); ++iter)
//		if (*iter == key)
//			return true;
//	return false;
//}
//void PrintHash() {
//	for (int i = 0; i < 10; ++i) {
//		printf("[%d]: ", i);
//		for (list<int>::iterator iter = table[i].begin(); iter != table[i].end(); ++iter)
//			printf("%d ", *iter);
//		printf("\n");
//
//	}
//}
//
//int main() {
//
//	PushHash(10);
//	PushHash(57);
//	PushHash(65);
//	PushHash(59);
//	PushHash(32);
//	PushHash(197);
//
//	PrintHash();
//
//	if (FindHash(100))
//		printf("존재!\n");
//	else
//		printf("없음!\n");
//	system("pause");
//
//	return 0;
//}

//#include<cstdio>
//#include <cstdlib>
//#include<list>
//using namespace std;
//
//int main() {
//
//	list<int> lt;
//
//	lt.push_back(10);
//	lt.push_front(100);
//	lt.push_back(20);
//	lt.push_back(30);
//
//	for (list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter) {
//		printf("%d\n", *iter);
//
//	}
//
//	system("pause");
//	return 0;
//}


//#include<cstdio>
//#include <cstdlib>
//#include<list>
//using namespace std;
//
//int main() {
//
//	list<int> lt;
//
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//
//	list<int>::iterator iter = lt.begin();
//	list<int>::iterator endIter = lt.end();
//
//	for (; iter!= endIter; ++iter) {
//		printf("%d\n", *iter);
//
//	}
//
//	system("pause");
//
//	return 0;
//}


//#include<cstdio>
//#include <cstdlib>
//#include<list>
//using namespace std;
//
//int main() {
//
//	list<int> lt;
//
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//
//	list<int>::iterator iter = lt.begin();
//
//	printf("%d\n", *iter);
//
//	++iter;
//	printf("%d\n", *iter);
//	++iter;
//	printf("%d\n", *iter);
//
//	system("pause");
//
//	return 0;
//}

//#include<cstdio>
//#include <cstdlib>
//
//int main() {
//
//	system("pause");
//	return 0;
//}
