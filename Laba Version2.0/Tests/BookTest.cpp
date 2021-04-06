#include "pch.h"
#include "../2YearLaba1/Book.h"
#include "../2YearLaba1/Character.h"

TEST(BookConstructorTest, bookTest)
{
	Book b("../2YearLaba1/Books.txt", 1);
	ASSERT_EQ(b.getId(), 1);
	ASSERT_EQ(b.getName(), "Твердиня");
	ASSERT_EQ(b.getAuthors(), "Макс Кiдрук");
	ASSERT_EQ(b.getYear(), 2018);
	ASSERT_EQ(b.getPages(), 554);
	ASSERT_EQ(b.getAnotation(), "П'ятеро студентiв Стокгольмського унiверситету вирушають на пошуки стародавнього мiста до Перу. На них чекають цiкавi, але дуже небезпечнi пригоди");
	ASSERT_EQ(b.getGenre(), "Триллер");
}