#include <iostream>

//private -> 접근 막음
//friend  -> 접근 허용 예외를 둠

class Entity
{

    //접근 한정자/제한자  (visibility modifier)
public:
    //int GetX() const { return x; }
    friend void ShowEntity(Entity& entity);//2
    friend void Add(Entity& e1, const Entity& e2); // friend는 외부 함수를 대상

    void Add(Entity& other)
    {
        x += other.x;
        y += other.y;
    }
    //접근 한정자는 클래스한정, 객체에는 영향 없음 // other.x; <- 다른주체라 접근가능
private:
    int x = 0;
    int y = 0;
};

void Add(Entity& e1, const Entity& e2)
{
    e1.x += e2.x;
    e1.y += e2.y;
    //e1.x += e2.x; // private 접근 불가
}

void ShowEntity(Entity& entity) //1
{
    entity.x = 10;
    std::cout << entity.x << ", " << entity.y << std::endl;
}

//

int main(void)
{
    Entity entity1;
    Entity entity2;
    ShowEntity(entity1);
    Add(entity1, entity2);
    return 0;
}

//#include <iostream>
//
//class Entity
//{
//public:
//
//	// int GetX() const{ return x; } <- 이걸 권장
//
//	//friend void Add(Entity& entity1, Entity& entity2);
//
//	friend void ShowEntity(Entity& entity) // 외부 함수임, 내부 함수가 아님 
//	{
//		//x,y는 private라서 외부함수인 ShowEntity에서는 Entity 멤버변수에 접근 불가능
//
//		std::cout << entity.x << ", " << entity.y << "\n";
//	}
//
//
//private:
//	int x = 0;
//	int y = 0;
//
//
//};
//
////void Add(Entity& entity1, Entity& entity2)
////{
////	entity1.x + entity2.x;
////	entity1.y + entity2.y;
////
////}
//
//
////Entity 정보를 출력하는 함수
////void ShowEntity(Entity& entity)
////{
////	//x,y는 private라서 외부함수인 ShowEntity에서는 Entity 멤버변수에 접근 불가능
////
////	std::cout << entity.x << ", " << entity.y << "\n";
////}
//
//
//int main()
//{
//	/*Entity entity1;
//	Entity entity2;*/
//	
//	//Entity entity;
//	////entity.ShowEntity(entity) <-안됨
//	//ShowEntity(entity);
//
//	std::cin.get();
//}