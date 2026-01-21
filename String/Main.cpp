#include <iostream>
//#include <string>


// 클래스 내부에서 문자열 다루기
class Player
{
	//public,private,protected
	//접근 제한자
	//접근 가능한 범위를 설정
public:
	//생성자
	//객체를 생성할 때 호출되는 특별한 함수
	//반환형이 없고 클래스 이름과 동일
	Player(const char* inName)
	{
		//문자열 복사
		//name = inName;

		//1.저장 공간을 확보
		//	-> 확보할 공간의 크리를 알아야 함
		size_t length = strlen(inName)+1; //strlen 작동 방식 \0 만나기 전까지 숫자더함 \0까지 더해야 해서 +1
		name = new char[length];

		//2. 문자열 복사
		//memcpy() 문자열 복사는 메모리 복사와 같다.
 		strcpy_s(name, length, inName);
	}
	//소멸자
	//객체가 해체될 때 실행
	~Player()
	{
		//if(name != nullptr)
		if (name)
		{
			delete[] name;
			name = nullptr; //여기까지가 완벽하지만 프로그램이 끝나면서 사라질꺼기 때문에 의미 없음X
		}
	}
private:
	// 문자열을 저장할 변수
	char* name = nullptr;
};
int main()
{
	//문자열
	//문자열은 불변성을 가짐
	auto testString = "Ronnie"; // = const char* testString = "Ronnie";
	std::cout << testString << "\n";

	//문자 배열도 가능
	char buffer[7] = { 'R','o','n','n','i','e','\0'}; // 0 == \0
	std::cout << buffer << "\n";

	//객체 기반으로 문자열 사용
	Player player("RonnieJ");

	std :: cin.get();


}