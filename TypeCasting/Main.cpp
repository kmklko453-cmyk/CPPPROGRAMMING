#include <iostream>

void PrintString(char* string)
{
	std::cout << string << "\n";
}

class A
{
public:
	virtual void Test()
	{

	};

private:

};
class B : public A
{};


int main()
{
	const char* name = "ronnie";
	PrintString(const_cast<char*>(name));

	int number = 10;
	float floatNumber = static_cast<float>(number); //(float)number

	A* a = new A();
	B* b = static_cast<B*>(a); // 연관되어 있지 않으면 안됨.
	//if (b)
	//{
	//	std::cout << "b is not null\n";
	//}
	//B* b2 = reinterpret_cast<B*>(a); //연관되어 있지 않아도 됨 (위험함)/ 잘 알고 써야함.
	//if (b2)
	//{
	//	std::cout << "b2 is not null\n";
	//}
	//B* b3 = dynamic_cast<B*>(a);  //유일하게 실행중 타입 검사함 
	//if (b3)
	//{
	//	std::cout << "b3 is not null\n";
	//}

	//주소값 비교
	/*if (a == b)
	{

	}*/

	const type_info& aInfo = typeid(a);
	const type_info& bInfo = typeid(b);
	if (aInfo == bInfo)
	{
		std::cout << "Same\n";
	}
	//std::cout << "Type of a is" << aInfo.name() << "\n";
	
	delete a;

	std::cin.get();
}