#include "pch.h"
#include "../2YearLaba1/Book.h"
#include "../2YearLaba1/Character.h"

TEST(CharacterConstructorTest, characterTest)
{
	Character ch("../2YearLaba1/Characters.txt", 2);
	ASSERT_EQ(ch.getId(), 2);
	ASSERT_EQ(ch.getName(), "Камiла");
	ASSERT_EQ(ch.getBooksNumber(), 3);
	vector<string> stat{ "головний", "головний" , "головний" };
	ASSERT_EQ(ch.getStatus(), stat);
}