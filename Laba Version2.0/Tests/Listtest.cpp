#include "pch.h"
#include "../2YearLaba1/List.h"
#include "../2YearLaba1/Matrix.h"
#include "../2YearLaba1/Book.h"
#include "../2YearLaba1/Character.h"




// Constructor
TEST(ListConstructorTest, intTest)
{
	vector<int> vecti;
	vecti.push_back(4);
	vecti.push_back(-2);
	vecti.push_back(7);
	vecti.push_back(-14);
	List<int> lsti(vecti, 4);
	ASSERT_EQ(lsti.getSize(), 4);
	ASSERT_EQ(lsti.getValues(), vecti);
}
TEST(ListConstructorTest, doubleTest)
{
	vector<double> vectd;
	vectd.push_back(4.5);
	vectd.push_back(-2.7);
	vectd.push_back(7.9);
	vectd.push_back(-14.3);
	List<double> lstd(vectd, 4);
	ASSERT_EQ(lstd.getSize(), 4);
	ASSERT_EQ(lstd.getValues(), vectd);
}
TEST(ListConstructorTest, boolTest)
{
	vector<bool> vectb;
	vectb.push_back(1);
	vectb.push_back(0);
	vectb.push_back(0);
	vectb.push_back(1);
	List<bool> lstb(vectb, 4);
	ASSERT_EQ(lstb.getSize(), 4);
	ASSERT_EQ(lstb.getValues(), vectb);
}
TEST(ListConstructorTest, stringTest)
{
	vector<string> vects;
	vects.push_back("gtr");
	vects.push_back("few");
	vects.push_back("cre");
	vects.push_back("wqr");
	List<string> lsts(vects, 4);
	ASSERT_EQ(lsts.getSize(), 4);
	ASSERT_EQ(lsts.getValues(), vects);
}
TEST(ListConstructorTest, bookTest)
{
	vector<Book> vectb;
	Book b1("../2YearLaba1/Books.txt", 2);
	vectb.push_back(b1);
	Book b2("../2YearLaba1/Books.txt", 4);
	vectb.push_back(b2);
	Book b3("../2YearLaba1/Books.txt", 5);
	vectb.push_back(b3);
	Book b4("../2YearLaba1/Books.txt", 7);
	vectb.push_back(b4);
	List<Book> lstb(vectb, 4);
	ASSERT_EQ(lstb.getSize(), 4);
	for (int i = 0; i < 4; i++)
	{
		ASSERT_EQ(lstb.getValues()[i].getName(), vectb[i].getName());
	}
	
}
TEST(ListConstructorTest, characterTest)
{
	vector<Character> vectc;
	Character c1("../2YearLaba1/Characters.txt", 1);
	vectc.push_back(c1);
	Character c2("../2YearLaba1/Characters.txt", 2);
	vectc.push_back(c2);
	Character c3("../2YearLaba1/Characters.txt", 3);
	vectc.push_back(c3);
	Character c4("../2YearLaba1/Characters.txt", 4);
	vectc.push_back(c4);
	List<Character> lstc(vectc, 4);
	ASSERT_EQ(lstc.getSize(), 4);
	for (int i = 0; i < 4; i++)
	{
		ASSERT_EQ(lstc.getValues()[i].getName(), vectc[i].getName());
	}
}

// Operator
TEST(ListElementByIndexTest, intTest)
{
	vector<int> vecti;
	vecti.push_back(4);
	vecti.push_back(-2);
	vecti.push_back(7);
	vecti.push_back(-14);
	List<int> lsti(vecti, 4);
	ASSERT_EQ(lsti[1], -2);
}

TEST(ListElementByIndexTest, doubleTest)
{
	vector<double> vectd;
	vectd.push_back(4.5);
	vectd.push_back(-2.4);
	vectd.push_back(7.874);
	vectd.push_back(-14.85);
	List<double> lstd(vectd, 4);
	ASSERT_DOUBLE_EQ(lstd[2], 7.874);
}
TEST(ListElementByIndexTest, boolTest)
{
	vector<bool> vectb;
	vectb.push_back(1);
	vectb.push_back(0);
	vectb.push_back(0);
	vectb.push_back(1);
	List<bool> lstb(vectb, 4);
	ASSERT_EQ(lstb.getValues()[1], false);
}
TEST(ListElementByIndexTest, stringTest)
{
	vector<string> vects;
	vects.push_back("gtr");
	vects.push_back("few");
	vects.push_back("cre");
	vects.push_back("wqr");
	List<string> lsts(vects, 4);
	ASSERT_EQ(lsts[2], "cre");
}
TEST(ListElementByIndexTest, bookTest)
{
	vector<Book> vectb;
	Book b1("../2YearLaba1/Books.txt", 2);
	vectb.push_back(b1);
	Book b2("../2YearLaba1/Books.txt", 4);
	vectb.push_back(b2);
	Book b3("../2YearLaba1/Books.txt", 5);
	vectb.push_back(b3);
	Book b4("../2YearLaba1/Books.txt", 7);
	vectb.push_back(b4);
	List<Book> lstb(vectb, 4);
	ASSERT_EQ(lstb[1].getName(), "Право на дорослiсть");
}
TEST(ListElementByIndexTest, characterTest)
{
	vector<Character> vectc;
	Character c1("../2YearLaba1/Characters.txt", 1);
	vectc.push_back(c1);
	Character c2("../2YearLaba1/Characters.txt", 2);
	vectc.push_back(c2);
	Character c3("../2YearLaba1/Characters.txt", 3);
	vectc.push_back(c3);
	Character c4("../2YearLaba1/Characters.txt", 4);
	vectc.push_back(c4);
	List<Character> lstc(vectc, 4);
	ASSERT_EQ(lstc[2].getName(), "Нед Старк");
}
// Index of element
TEST(ListIndexOfElementTest, intTest)
{
	vector<int> vecti;
	vecti.push_back(4);
	vecti.push_back(-2);
	vecti.push_back(4);
	vecti.push_back(-14);
	List<int> lsti(vecti, 4);
	vector<int> res{ 0, 2 };
	ASSERT_EQ(lsti.getValue(4), res);
}
TEST(ListIndexOfElementTest, doubleTest)
{
	vector<double> vectd;
	vectd.push_back(4.5);
	vectd.push_back(-2.9);
	vectd.push_back(7.874);
	vectd.push_back(-2.9);
	List<double> lstd(vectd, 4);
	vector<int> res{ 1, 3 };
	ASSERT_EQ(lstd.getValue(-2.9), res);
}
TEST(ListIndexOfElementTest, boolTest)
{
	vector<bool> vectb;
	vectb.push_back(1);
	vectb.push_back(1);
	vectb.push_back(0);
	vectb.push_back(1);
	List<bool> lstb(vectb, 4);
	vector<int> res{2};
	ASSERT_EQ(lstb.getValue(0), res);
}
TEST(ListIndexOfElementTest, stringTest)
{
	vector<string> vects;
	vects.push_back("gtr");
	vects.push_back("few");
	vects.push_back("cre");
	vects.push_back("wqr");
	List<string> lsts(vects, 4);
	vector<int> res{};
	ASSERT_EQ(lsts.getValue("bra"), res);
}

TEST(ListIndexOfElementTest, bookTest)
{
	vector<Book> vectb;
	Book b1("../2YearLaba1/Books.txt", 2);
	vectb.push_back(b1);
	Book b2("../2YearLaba1/Books.txt", 4);
	vectb.push_back(b2);
	Book b3("../2YearLaba1/Books.txt", 5);
	vectb.push_back(b3);
	Book b4("../2YearLaba1/Books.txt", 7);
	vectb.push_back(b4);
	List<Book> lstb(vectb, 4);
	ASSERT_EQ(lstb.getBookValue("Не озирайся i мовчи"), 3);
}

TEST(ListIndexOfElementTest, characterTest)
{
	vector<Character> vectc;
	Character c1("../2YearLaba1/Characters.txt", 1);
	vectc.push_back(c1);
	Character c2("../2YearLaba1/Characters.txt", 2);
	vectc.push_back(c2);
	Character c3("../2YearLaba1/Characters.txt", 3);
	vectc.push_back(c3);
	Character c4("../2YearLaba1/Characters.txt", 4);
	vectc.push_back(c4);
	List<Character> lstc(vectc, 4);
	ASSERT_EQ(lstc.getCharacterValue("Камiла"), 1);
}




