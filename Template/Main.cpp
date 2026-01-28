#include <iostream>


//두 변수의 값을 서로 교환하는 함수
template<typename T> // T가 실매개변수 타입으로 바뀜
//template<class T> // 이것도 가능함  class가 아닌데 사용하는 것이 헷갈릴 수 있어 typename이 생김 tyoename을 사용해야함 
void Swap(T& a, T& b)
{
	int temp = a;
	temp = b;
	b = a;

}

//void Swap(float& a, float& b)
//{
//	int temp = a;
//	temp = b;
//	b = a;
//
//}


int main()
{
	int a = 10;
	int b = 20;
	
	Swap(a, b); //명시적으로 타입을 지정해야함 Swap<int>(a, b);

	float floatA = 10.0f;
	float floatB = 20.0f;
	Swap(floatA, floatB); //Swap<>float(a, b);



	std::cin.get();
}
