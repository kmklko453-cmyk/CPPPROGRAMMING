#include <iostream>

# define FORCEINLINE __forceinline

//용량/속도.
//인라인 함수는 용량을 포기하고 속도를 챙김.
//인라인 함수 -> 속도 때문.
//매크로(Macro)
//#define Square(x) ( (x) * (x) )

inline int Square(int x)
{
	return x * x;
}

int main()
{
	int number = Square(10);

}