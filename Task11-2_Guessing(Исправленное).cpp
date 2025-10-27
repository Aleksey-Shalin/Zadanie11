#include<iostream>
#include<string>
#include<windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	std::cout << "Какая мышь воет как волк?" << std::endl;
	std::string answer{ "кузнечиковая" };
	std::string version;
	do
	{
		std::cout << "Угадайте слово: ";
		std::cin >> version;
		if (version == answer)
		{
			std::cout << "Правильно, вы победили! Загаданное слово " << answer << std::endl;
			break;
		}

		if (version.length() > answer.length())
		{
			std::cout << "Ваше слово длиннее загаднного" << std::endl;
		}
		else if (version.length() < answer.length())
		{
			std::cout << "Ваше слово короче загаданного" << std::endl;
		}
		else { std::cout << "Вы угадали длину слова" << std::endl; }
	} while (true);
	return 0;
}
