#include <iostream>

//게임 물체(객체)
//Game-Object / Actor/ Entity(개체).


//클래스
class Entity
{
public:
	Entity()
	{
		std::cout << "Constructor called\n";
	}
	// 함수 끝에 const를 지정하면,
	//함수 본문에서 객체 내부의 값을 변경할 수 없음.
	void ShowName() const
	{
		std::cout << "Entity\n";
	}

	Entity* GetSelf()
	{
		//this는 자기 자신을 가리키는 포인터
		return this;
	}
};


int main()
{
	//함수가 먼저 실행하기 때문에 객체가 null이여도 실행이 가능함?
	//Entity* entity = nullptr;
	//entity->ShowName();

	//const int Count = 5;
	//Entity entities[Count];


	////Range-Based Loop( foreach )
	//for (const Entity& entity : entities)
	//{
	//	entity.ShowName(); //객체형이랑 함수형이랑 타입이 같아야됨? /매개변수 타입이랑 함수 타입이 같아야됨?
	//}

	//const int count = 5;
	//Entity* entities[count] = {};
	////memset(entities, 0, sizeof(Entity*) * count); // 0 으로 초기화

	//for (int ix = 0; ix < count; ix++) // 각 객체 포인터에 힙으로 동적할당
	//{
	//	entities[ix] = new Entity();// 힙에는 이름 설정 X 스택에 포인터 변수이름 만들고 힙 주소받음 
	//}

	//for (Entity*& entity : entities) 
	////entities가 넘어와서 entity에 넘길때 공간을 공유하는게 아니라 공간의 주소를 복사함,
	//// 그래서 ** 나 *& 참조를 해야함 (Entity* entity : entities) <-문제있음 
	//{
	//	delete[] entity;
	//	entity = nullptr;
	//}

	Entity* entity = new Entity();
	std::cout << entity << "\n";        //포인터 변수니까 주소값
	std::cout << entity->GetSelf() << "\n"; //this도 포인터 자기 자신의 주소를 넘김


	std::cin.get();
}