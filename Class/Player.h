#pragma once // -> 중복 include 방지 구문 (컴파일러 구문) / 순환 참조 까지 막아주는건 아님

//클래스
class Player
{
	// 클래스 기본은 
	// 접근 한정자 / 접근 제한자
	// 클래스 내부의 속성을 어디까지 노출시킬지 결정
	// public/protected   /private
	// 공개  /상속 계층까지/ 나만


public:

	// 생성자
	// 기본값 설정/ 자원 할당
	// 파라미터를 받지 않는 생성자 = 기본 생성자
	// 생성자를 선언 하지 않으면 자동으로 만들어줌, 하나라도 만들면 자동으로 안 만들어줌
	// Player() = default; //가독성을 위해 명시적으로 작성 
	
	// 소멸자
	// 자원 해제
	//~Player() = default;
	Player();
	Player(const char* inName);
	~Player();

	// Setter(세터)
	// 공개 함수(메소드) -> 메시지
	// 
	//클래스 조작 함수
	void Move(int inX, int inY);
	//{
	//	x = inX;
	//	y = inY;
	//
	//}

private:

	int x = 0;
	int y = 0;
	int speed = 0;

	// 이름 값(문자열)
	char* name = nullptr;
	//char name[10] = {}; //아이디 글자 제한 스택으로 사용

};