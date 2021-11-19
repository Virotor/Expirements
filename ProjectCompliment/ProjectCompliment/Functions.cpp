#include "Functions.h"

std::string GetCompliment()
{
	std::string adjectives[3]{ "Лучший", "Крутой", "Забивной" };
	std::string nouns[3]{ "Виктор", "Виктор", "Виктор" };
	std::string additions[3]{ "я в шоке просто", "как копировать в буфер", "помогите" };

	return adjectives[rand() % 3] + " " + nouns[rand() % 3] + ", " + additions[rand() % 3];
}
