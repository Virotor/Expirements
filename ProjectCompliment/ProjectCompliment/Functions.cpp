#include "Functions.h"

std::string GetCompliment()
{
	std::string adjectives[3]{ "������", "������", "��������" };
	std::string nouns[3]{ "������", "������", "������" };
	std::string additions[3]{ "� � ���� ������", "��� ���������� � �����", "��������" };

	return adjectives[rand() % 3] + " " + nouns[rand() % 3] + ", " + additions[rand() % 3];
}
