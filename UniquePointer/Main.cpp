#include <iostream>	
#include <memory>
class Player
{
public:
	Player()
	{
		std::cout << "생성자 호출\n";
	}
	Player(const Player& other) = delete;
	Player& operator=(const Player& other) = delete;
//private:
//	Player(const Player& other)
//	{
//
//	}
//	Player& operator=(const Player& other)
//	{
//		return *this;
//	}


	~Player()
	{
		std::cout << "소멸자 호출\n";
	}

private:

};



int main()
{	
	//Player player;
	//Player player2;
	

	{
		//unique_ptr 객체 선언.
		std::unique_ptr<Player> playe = std::make_unique<Player>();
	}

	std::unique_ptr<Player> player2;
	player2 = std::move(player2);
	
	
	std::cin.get();

}