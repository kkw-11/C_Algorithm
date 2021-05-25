#include <cstdio>
#include <cstdlib>

template <typename T>
class Array
{
private:
    T* arr;
    int size;
    int capacity;
public:
    void Add(const T& data)
    {
        arr[size++] = data;
    }
    int Size()const
    {
        return size;
    }
    const T& At(int idx)const
    {
        return arr[idx];
    }
    void Remove(int idx)
    {
        for (int i = idx; i < size - 1; ++i)
            arr[i] = arr[i + 1];
        --size;
    }
    Array(int cap) // 생성자
    {
        size = 0;
        capacity = cap;
        arr = new T[cap];
    }
    ~Array()// 소멸자
    {
        delete[] arr;
    }
};
int main()
{
    Array<double> arr(100);

    arr.Add(1.1);
    arr.Add(2.34);
    arr.Add(3.5678);

    for (int i = 0; i < arr.Size(); ++i)
        printf("%g\n", arr.At(i));
    system("pause");
}
///////////////////////////////////////////////////////////////////////////////////////
// 아래코드는 리패토링전 스터디 코드


//#include <cstdio>
//#include <cstdlib>
//
//template <typename T>
//class Array
//{
//private:
//    T* arr;
//    int size;
//    int capacity;
//public:
//    void Add(T data)
//    {
//        arr[size++] = data;
//    }
//    int Size()
//    {
//        return size;
//    }
//    T At(int idx)
//    {
//        return arr[idx];
//    }
//    void Remove(int idx)
//    {
//        for (int i = idx; i < size - 1; ++i)
//            arr[i] = arr[i + 1];
//        --size;
//    }
//    Array(int cap) // 생성자
//    {
//        size = 0;
//        capacity = cap;
//        arr = new T[cap];
//    }
//    ~Array()// 소멸자
//    {
//        delete[] arr;
//    }
//};
//int main()
//{
//    Array<double> arr(100);
//
//    arr.Add(1.1);
//    arr.Add(2.34);
//    arr.Add(3.5678);
//
//    for (int i = 0; i < arr.Size(); ++i)
//        printf("%g\n", arr.At(i));
//    system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//
//class Array
//{
//private:
//    int* arr;
//    int size;
//    int capacity;
//public:
//    void Add(int data)
//    {
//        arr[size++] = data;
//    }
//    int Size()
//    {
//        return size;
//    }
//    int At(int idx)
//    {
//        return arr[idx];
//    }
//    void Remove(int idx)
//    {
//        for (int i = idx; i < size - 1; ++i)
//            arr[i] = arr[i + 1];
//        --size;
//    }
//    Array(int cap) // 생성자
//    {
//        size = 0;
//        capacity = cap;
//        arr = new int[cap];
//    }
//    ~Array()// 소멸자
//    {
//        delete[] arr;
//    }
//};
//int main()
//{
//    Array arr(100);
//
//    arr.Add(10);
//    arr.Add(20);
//    arr.Add(30);
//
//    arr.Remove(1);
//    for (int i = 0; i < arr.Size(); ++i)
//        printf("%d\n", arr.At(i));
//    system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//
//class Array
//{
//private:
//    int* arr;
//    int size;
//    int capacity;
//public:
//    void AddArray(int data)
//    {
//        arr[size++] = data;
//    }
//    int SizeArray()
//    {
//        return size;
//    }
//    int AtArray(int idx)
//    {
//        return arr[idx];
//    }
//    void RemoveArray(int idx)
//    {
//        for (int i = idx; i < size - 1; ++i)
//            arr[i] = arr[i + 1];
//        --size;
//    }
//    Array(int cap) // 생성자
//    {
//        size = 0;
//        capacity = cap;
//        arr = new int[cap];
//        printf("Array()\n");
//    }
//    ~Array()// 소멸자
//    {
//        delete[] arr;
//        printf("~Array()\n");
//    }
//};
//int main()
//{
//    {
//        Array arr(100);
//
//        arr.AddArray(10);
//        arr.AddArray(20);
//        arr.AddArray(30);
//
//        arr.RemoveArray(1);
//        for (int i = 0; i < arr.SizeArray(); ++i)
//            printf("%d\n", arr.AtArray(i));
//    }
//    system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//
//class Array
//{
//private:
//    int* arr;
//    int size;
//    int capacity;
//public:
//    void AddArray(int data)
//    {
//        arr[size++] = data;
//    }
//    int SizeArray()
//    {
//        return size;
//    }
//    int AtArray(int idx)
//    {
//        return arr[idx];
//    }
//    void RemoveArray(int idx)
//    {
//        for (int i = idx; i < size - 1; ++i)
//            arr[i] = arr[i + 1];
//        --size;
//    }
//    void InitArray(int cap)
//    {
//        size = 0;
//        capacity = cap;
//        arr = new int[cap];
//    }
//    void UninitArray()
//    {
//        delete[] arr;
//    }
//};
//int main()
//{
//    Array arr;
//
//    arr.InitArray(100);
//
//    arr.AddArray(10);
//    arr.AddArray(20);
//    arr.AddArray(30);
//
//    arr.RemoveArray(1);
//    for (int i = 0; i < arr.SizeArray(); ++i)
//        printf("%d\n", arr.AtArray(i));
//
//    arr.UninitArray();
//    system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//
//struct Array
//{
//    int* arr;
//    int size;
//    int capacity;
//    void AddArray(int data)
//    {
//        arr[size++] = data;
//    }
//    int SizeArray()
//    {
//        return size;
//    }
//    int AtArray(int idx)
//    {
//        return arr[idx];
//    }
//    void RemoveArray(int idx)
//    {
//        for (int i = idx; i < size - 1; ++i)
//            arr[i] = arr[i + 1];
//        --size;
//    }
//    void InitArray(int cap)
//    {
//        size = 0;
//        capacity = cap;
//        arr = new int[cap];
//    }
//    void UninitArray()
//    {
//        delete[] arr;
//    }
//};
//int main()
//{
//    Array arr;
//
//    arr.InitArray(100);
//
//    arr.AddArray(10);
//    arr.AddArray(20);
//    arr.AddArray(30);
//
//    arr.RemoveArray(1);
//    for (int i = 0; i < arr.SizeArray(); ++i)
//        printf("%d\n", arr.AtArray(i));
//
//    arr.UninitArray();
//    system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//
//struct Array
//{
//    int* arr;
//    int size;
//    int capacity;
//};
//void AddArray(Array& ar, int data)
//{
//    ar.arr[ar.size++] = data;
//}
//int SizeArray(Array& ar)
//{
//    return ar.size;
//}
//int AtArray(Array& ar, int idx)
//{
//    return ar.arr[idx];
//}
//void RemoveArray(Array& ar, int idx)
//{
//    for (int i = idx; i < ar.size - 1; ++i)
//        ar.arr[i] = ar.arr[i + 1];
//    --ar.size;
//}
//void InitArray(Array& ar, int cap)
//{
//    ar.size = 0;
//    ar.capacity = cap;
//    ar.arr = new int[cap];
//}
//void UninitArray(Array& ar)
//{
//    delete[] ar.arr;
//}
//int main()
//{
//    Array arr;
//
//    InitArray(arr, 100);
//
//    AddArray(arr, 10);
//    AddArray(arr, 20);
//    AddArray(arr, 30);
//
//    RemoveArray(arr, 1);
//    for (int i = 0; i < SizeArray(arr); ++i)
//        printf("%d\n", AtArray(arr, i));
//
//    UninitArray(arr);
//    system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//
//struct Array
//{
//    int* arr;
//    int size;
//};
//void AddArray(Array& ar, int data)
//{
//    ar.arr[ar.size++] = data;
//}
//int SizeArray(Array& ar)
//{
//    return ar.size;
//}
//int AtArray(Array& ar, int idx)
//{
//    return ar.arr[idx];
//}
//void RemoveArray(Array& ar, int idx)
//{
//    for (int i = idx; i < ar.size - 1; ++i)
//        ar.arr[i] = ar.arr[i + 1];
//    --ar.size;
//}
//void InitArray(Array& ar, int cap)
//{
//    ar.size = 0;
//    ar.arr = new int[cap];
//}
//void UninitArray(Array& ar)
//{
//    delete[] ar.arr;
//}
//int main()
//{
//    Array arr;
//
//    InitArray(arr, 100);
//
//    AddArray(arr, 10);
//    AddArray(arr, 20);
//    AddArray(arr, 30);
//
//    RemoveArray(arr, 1);
//    for (int i = 0; i < SizeArray(arr); ++i)
//        printf("%d\n", AtArray(arr, i));
//
//    UninitArray(arr);
//    system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//
//struct Array
//{
//    int* arr;
//    int size;
//};
//void AddArray(Array& ar, int data)
//{
//    ar.arr[ar.size++] = data;
//}
//int SizeArray(Array& ar)
//{
//    return ar.size;
//}
//int AtArray(Array& ar, int idx)
//{
//    return ar.arr[idx];
//}
//void InitArray(Array& ar, int cap)
//{
//    ar.size = 0;
//    ar.arr = new int[cap];
//}
//void UninitArray(Array& ar)
//{
//    delete[] ar.arr;
//}
//int main()
//{
//    Array arr;
//
//    InitArray(arr, 100);
//
//    AddArray(arr, 10);
//    AddArray(arr, 20);
//    AddArray(arr, 30);
//
//    for (int i = 0; i < SizeArray(arr); ++i)
//        printf("%d\n", AtArray(arr, i));
//
//    UninitArray(arr);
//    system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//
//struct Array
//{
//    int* arr;
//    int size;
//};
//void AddArray(Array& ar, int data)
//{
//    ar.arr[ar.size++] = data;
//}
//void PrintArray(Array& ar)
//{
//    for (int i = 0; i < ar.size; ++i)
//        printf("%d\n", ar.arr[i]);
//}
//void InitArray(Array& ar, int cap)
//{
//    ar.size = 0;
//    ar.arr = new int[cap];
//}
//void UninitArray(Array& ar)
//{
//    delete[] ar.arr;
//}
//int main()
//{
//    Array arr;
//
//    InitArray(arr,100);
//
//    AddArray(arr, 10);
//    AddArray(arr, 20);
//    AddArray(arr, 30);
//
//    PrintArray(arr);
//
//    UninitArray(arr);
//    system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//
//struct Array
//{
//    int arr[5];
//    int size;
//};
//void AddArray(Array& ar, int data)
//{
//    ar.arr[ar.size++] = data;
//}
//void PrintArray(Array& ar)
//{
//    for (int i = 0; i < ar.size; ++i)
//        printf("%d\n", ar.arr[i]);
//}
//void InitArray(Array& arr)
//{
//    arr.size = 0;
//}
//void UninitArray(Array& arr)
//{
//    //?
//}
//int main()
//{
//    Array arr;
//
//    InitArray(arr);
//
//    AddArray(arr, 10);
//    AddArray(arr, 20);
//    AddArray(arr, 30);
//
//    PrintArray(arr);
//
//    UninitArray(arr);
//    system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//
//struct Array
//{
//    int arr[5];
//    int size;
//};
//void AddArray(Array& ar, int data)
//{
//    ar.arr[ar.size++] = data;
//}
//void PrintArray(Array& ar)
//{
//    for (int i = 0; i < ar.size; ++i)
//        printf("%d\n", ar.arr[i]);
//}
//int main()
//{
//    Array arr = { 0 };
//
//    AddArray(arr, 10);
//    AddArray(arr, 20);
//    AddArray(arr, 30);
//
//    PrintArray(arr);
//
//    system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//
//void AddArray(int* arr, int& size, int data)
//{
//    arr[size++] = data;
//}
//void PrintArray(int* arr, int size)
//{
//    for (int i = 0; i < size; ++i)
//        printf("%d\n", arr[i]);
//}
//int main()
//{
//    int arr[5] = { 0 };
//    int size = 0;
//
//    AddArray(arr, size, 10);
//    AddArray(arr, size, 20);
//    AddArray(arr, size, 30);
//
//    PrintArray(arr, size);
//
//    system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//
//int main()
//{
//    int arr[5] = { 0 };
//    int size = 0;
//
//    arr[size++] = 10;
//    arr[size++] = 20;
//    arr[size++] = 30;
//
//    for (int i = 0; i < size; ++i)
//        printf("%d\n", arr[i]);
//
//    system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//
//int main()
//{
//    int* arr = new int[5];
//
//    int n = 10;
//    arr = &n;
//
//    for (int i = 0; i < 5; ++i)
//        arr[i] = 10 * (i + 1);
//    for (int i = 0; i < 5; ++i)
//        printf("%d\n", arr[i]);
//
//    delete[] arr;
//    system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//
//int main()
//{
//    int* arr = new int[5];
//    
//    for (int i = 0; i < 5; ++i)
//        arr[i] = 10 * (i + 1);
//    for (int i = 0; i < 5; ++i)
//        printf("%d\n", arr[i]);
//
//    delete[] arr;
//    system("pause");
//}

//#include <cstdio>
//#include <cstdlib>
//void ArrayTest()
//{
//    int arr[5] = { 10,20,30,40,50 };
//    for (int i = 0; i < 5; ++i)
//        printf("%d\n", arr[i]);
//}
//int main()
//{
//    ArrayTest();
//    ArrayTest();
//    ArrayTest();
//
//    system("pause");
//}
