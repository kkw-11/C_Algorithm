#include<cstdio>
#include <cstdlib>
#include<list>
using namespace std;

list<int> table[10];
int HashFunction(int key) {

	int addr = key % 10;
	return addr;
}
void PushHash(int key) {
	int addr = HashFunction(key);
	table[addr].push_back(key);
}
bool FindHash(int key) {

	return false;
}
void PrintHash() {

}
int main() {

	PushHash(10);
	PushHash(57);
	PushHash(65);
	PushHash(59);
	PushHash(32);

	PrintHash();
	system("pause");

	return 0;
}

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
//
//	for (list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter) {
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
//	list<int>::iterator endIter = lt.end();
//
//	for (; iter!= endIter; ++iter) {
//		printf("%d\n", *iter);
//
//	}
//
//
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