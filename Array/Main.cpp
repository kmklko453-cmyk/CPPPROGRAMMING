#include <iostream>

//배열을 함수에 전달
void PrintArray(int* array, int length)
{
	//size_t size = sizeof(array); <- 언리얼에서 사이즈 추정 금지
	for (int ix = 0; ix < length; ix++)
	{
		std::cout << array[ix] << " \n";
	}
}

int main()
{
	//배열 선언
	//int array[10] = {};
	int array[10];
	memset(array, 0, sizeof(int) * 10);

	//0부터 시작 마지막은 크기 - 1
	array[0] = 1;
	array[3] = 10;
	array[9] = 100;

	//Out-Of-Index(Range)
	//array[10] = 1000; 컴파일러가 막아줌
	//array[-1] = 1000;

	//배열의 이름은 주소 (포인터)
	int* arrayPointer = array;
	//arrayPointer[1] = 20;
	*(arrayPointer + 1) = 20;

	//배열 원소를 천제 읽기 (순회)
	//range-based loop
	// foreach
	//for (const int& item : array)
	//{
	//	std::cout << item << "\n";
	//}

	PrintArray(array, 10);
	/*for (int ix = 0; ix < 10; ix++)
	{
		std::cout << array[ix] << "\n";
	}*/

	//배열 동적 할당
	int* dynamicArray = new int[10];
	memset(dynamicArray, 1, sizeof(int) * 10);
	for (int ix = 0; ix < 10; ix++)
	{
		dynamicArray[ix] = ix + 1;
	}

	//해제
	delete[] dynamicArray;

	std::cin.get();
}