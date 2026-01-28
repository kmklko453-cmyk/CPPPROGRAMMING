#include <iostream>

int main()
{
	FILE* file = nullptr;
	fopen_s(&file, "Test.txt", "rt"); // &file 은 진짜 파일이 아님 접근할 수 있는 키(포인터, 주소값)를 주는 것.

	//파일 읽기 실패.
	if (file == nullptr)
	{
		std::cout << "Failed to read file \n";
		__debugbreak;

	}

	//파일 쓰기
	/*const char* message = "프로그램에서 작성한 문자열 값입니다.";
	fputs(message, file);*/

	//블록 단위 읽기
	//읽을 데이터를 저장하기 위한 고간
	char buffer[1024] = {};
	size_t readSize = fread(buffer, sizeof(char), 1024, file);
	
	std::cout << "readSize: " << readSize << "\n";
	std::cout << buffer;

	//파일 읽기
	/*char data[256] = { };

	while (true)
	{
		if (fgets(data, 256, file) == nullptr)
		{
			break;
		}

		std::cout << data;
	}*/



	fclose(file);

}