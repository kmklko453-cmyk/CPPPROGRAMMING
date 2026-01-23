#include "Player.h"
#include <iostream>;


Player::Player(const char* inName) //안에 코드를 권장하지 않음(main에서 초기화) 멤버 이니셜라이즈 사용. : x(0), y(0), speed(0) 동적할당은 멤버 이니셜라이즈 사용x
{
	//동적 할당 및 문자열 복사
	size_t length = strlen(inName) + 1;
	name = new char[length];

	//복사 처리
	strcpy_s(name, length, inName);
}
Player::Player()
{

}
Player::~Player()
{
	//null 체크
	if (name)
	{
		delete[] name;
		name = nullptr;
	}
}
//Player :: <- Player 클래스 안에 있는
//:: 범위 지정 연산자 
void Player::Move(int inX, int inY)
{
	x = inX;
	y = inY;
}