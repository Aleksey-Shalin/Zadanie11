#include<iostream>
#include<string>
int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Какая мышь воет как волк?" << std::endl;
	std::string answer = "кузнечиковая";
	std::string version;
	std::cout << "Угадайте слово: ";
	std::cin >> version;
	int correct = answer.compare(version);
	if (correct == 0)
	{
		std::cout << "Правильно, вы победили! Загаданное слово " << answer;
	}
	else if (correct !=0)
		do
		{
			std::cout << "Угадайте слово: ";
			std::cin >> version;
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


	/* version 2
	while (version != answer)
	{
		std::cout << "Угадайте слово: ";
		std::cin >> version;
		if (version.length() > answer.length())
		{
			std::cout << "Ваше слово длиннее загаднного" << std::endl;
		}
		else if (version.length() < answer.length())
		{
			std::cout << "Ваше слово короче загаданного" << std::endl;
		}
		else { std::cout << "Вы угадали длину слова" << std::endl; }
	}
	std::cout << "Правильно, вы победили! Загаданное слово " << answer;*/
	return 0;
}
