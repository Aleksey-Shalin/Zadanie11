#include<iostream>
#include<windows.h>

void fullname_input(std::string& name, std::string& surname);    // прототип функции для ввода и вывода фамилии
std::string greeting_output(std::string& name, std::string& surname);    // прототип функции для вывода приветствия

// основная функция программы
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	std::string user_name;
	std::string user_surname;
	fullname_input(user_name, user_surname);
	std::cout << greeting_output(user_name, user_surname);
	return 0;
}

// реализация функции для ввода и вывода фамилии
void fullname_input(std::string& name, std::string& surname)
{
	std::cout << "Введите ваше имя: ";
	std::cin >> name;
	std::cout << "Введите вашу фамилию: ";
	std::cin >> surname;
}

// реализация функции для вывода приветствия
std::string greeting_output(std::string& name, std::string& surname)
{
	std::string fullname = name + " " + surname;
	return "Здравствуйте, " + fullname + "!";
}