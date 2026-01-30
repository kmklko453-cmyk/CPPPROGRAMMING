//#include <iostream>
//#include <functional>
//
////typedef int (*Adder)(int a, int b);
//using Adder = int (*)(int a, int b);
//using ClassAdder = int (Operator::*)(int a, int b);
//
////using Adder = std::function<int(int, int)>
//
////반환형이 int이고, 파라미터를 안받는함수
//
//int Function(int a, int b, ClassAdder adder)
////int Function(int a, int b,std::function<int(int,int)> adder)
//{
//	return adder(a, b);
//}
//
//class Operator
//{
//public:
//	int Add(int a, int b)
//	{
//		return a + b;
//	}
//};
//
//int Add(int a, int b)
//
//{
//	return a + b;
//}
//int main()
//{
//	//함수 포인터 선언 
//	/*int (*FunctionPointer)();
//	FunctionPointer = Function;*/
//
//	//함수 포인터를 통한 간접 호출
//	Operator oper;
//
//	ClassAdder adder = &Operator::Add;
//	std::cout << Function(10,20,(oper.*Adder)() << "\n";
//
//	std::cin.get();
//
//}


#include <iostream>
#include <vector>
#include <algorithm>

//Functor (함수 객체)
class Less
{
public:
	// 호출 연산자 오버로딩
	bool operator()(int a, int b)
	{
		return a < b;
	}
};

//Functor (함수 객체)
class Greater
{
public:
	// 호출 연산자 오버로딩
	bool operator()(int a, int b)
	{
		return a > b;
	}

private:
	//상태도 추가로 관리 가능 
};

int main()
{
	std::vector<int> array = { 1,2,3,4,5,6,7,8,9,10 };

	//함수 객체 생성
	//Less less;
	//Greater greater;

	//정렬
	//std::sort(array.begin(), array.end(), greater);
	auto greater = [](int a, int b)->bool {return a > b; };

	int number1 = 10;
	int number2 = 5;
	greater(number1, number2);

	std::sort(array.begin(), array.end(), [](int a, int b)->bool {return a > b; });

	int sum = 0;
	//auto test = []() {};
	std::for_each(array.begin(), array.end(), [&sum](int item)->void {sum += item; });

	std::cout << "Sum = " << sum << "\n";

	//출력
	for (const auto& item : array)
	{
		std::cout << item << " ";
	}
	std::cout << "\n";


	
}