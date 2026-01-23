#include <iostream>
#include "Player.h"

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

////클래스 조작 함수
//void Move(Player& player, int x, int y)
//{
//	player.SetX(x);
//	player.SetY(y);
//
//}

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	//인스턴스 / 객체
	Player player1;
	player1.Move(5, 2);

	//힙
	Player* player2 = new Player("Ronnie");
	player2->Move(3, 1);
	//(*player2).Move(3, 1); // 주소에 공간으로 이동하는 행위 (역참조) //2차 포인터 일 때 사용 (*player2)->Move( 3, 1);
	delete player2;
	player2 = nullptr;


	std::cin.get();
}