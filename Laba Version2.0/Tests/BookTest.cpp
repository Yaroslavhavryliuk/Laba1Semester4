#include "pch.h"
#include "../2YearLaba1/Book.h"
#include "../2YearLaba1/Character.h"

TEST(BookConstructorTest, bookTest)
{
	Book b("../2YearLaba1/Books.txt", 1);
	ASSERT_EQ(b.getId(), 1);
	ASSERT_EQ(b.getName(), "��������");
	ASSERT_EQ(b.getAuthors(), "���� �i����");
	ASSERT_EQ(b.getYear(), 2018);
	ASSERT_EQ(b.getPages(), 554);
	ASSERT_EQ(b.getAnotation(), "�'����� �������i� ��������������� ��i��������� ��������� �� ������ ������������� �i��� �� ����. �� ��� ������� �i���i, ��� ���� ���������i �������");
	ASSERT_EQ(b.getGenre(), "�������");
}