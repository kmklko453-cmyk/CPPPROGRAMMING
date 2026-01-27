#include <iostream>	

class Point
{
public:
	Point(int x = 0, int y = 0)
		: x(x), y(y)
	{

	}

	//덧셈
	/*Point Add(const Point& Left, const Point& Right )
	{
		return Point(Left.x + Right.x, Left.y + Right.y);
	}*/


	friend Point Add(const Point& Left, const Point& Right)
	{
		return Point(Left.x + Right.x, Left.y + Right.y);
	}

	//멤버 함수 
	//이항 연산인데 매개변수는 하나임 하나는 객체 나 자체를 가리킴
	/*Point operator+(const Point& other)
	{
		return Point(x + other.x, y + other.y);
	}*/

	//비멤버 함수 
	// 나 포함 3항인데 friend 붙이면 가능해짐 외부 함수라 나를 포함하지 않기 때문에
	friend Point operator+(const Point& left, const Point& right)
	{
		return Point(left.x + right.x, left.y + right.y);
	}

	int operator[](int index)
	{
		return array[index];
	}

	friend std::ostream& operator << (std::ostream& os, const Point& point)
	{
		return os << "(" << point.x << "," << point.y << ")\n";
	}

public:
	int x = 0;
	int y = 0;
	int array[100];

};

//Point Add(const Point& Left, const Point& Right)
//{
//	return Point(Left.x + Right.x, Left.y + Right.y);
//}

//std::istream&
//std::ostream& operator << (std::ostream& os, const Point& point)
//{
//	return os << "(" << point.x << "," << point.y << ")\n";
//}

int main()
{
	Point p1(1, 1);
	Point p2(5, 5);

	//Point p3 = p1.Add(p2);
	//Point p3 = p1 + p2;
	//Point  p3 = Add(p1, p2);
	Point p3 = p1 + p2;
	//Point p4[4];

	std::cout <<"(" << p3.x <<"," <<p3.y <<")"<<"\n";
	//std::cout.operator<<(p3);
	//std::cout.operator<<(10).operator<<(30);  // 실제 cout 작동 방식
	std::cout << p3 <<"\n";
	
	//Point p3(p1.x + p2.x, p1.y + p2.y);
}