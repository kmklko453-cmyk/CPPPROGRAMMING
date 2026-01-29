#include <iostream>
#include <functional>

//typedef int (*Adder)(int a, int b);
using Adder = int (*)(int a, int b);
using ClassAdder = int (Operator::*)(int a, int b);

//using Adder = std::function<int(int, int)>

//반환형이 int이고, 파라미터를 안받는함수

int Function(int a, int b, ClassAdder adder)
//int Function(int a, int b,std::function<int(int,int)> adder)
{
	return adder(a, b);
}

class Operator
{
public:
	int Add(int a, int b)
	{
		return a + b;
	}
};

int Add(int a, int b)

{
	return a + b;
}
int main()
{
	//함수 포인터 선언 
	/*int (*FunctionPointer)();
	FunctionPointer = Function;*/

	//함수 포인터를 통한 간접 호출
	Operator oper;

	ClassAdder adder = &Operator::Add;
	std::cout << Function(10,20,(oper.*Adder)() << "\n";

	std::cin.get();

}