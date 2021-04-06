#include "pch.h"
#include "../2YearLaba1/RarefiedList.h"

TEST(RarListConstructorTest, intTest)
{
	vector<int> vecti{ 5, -11, 0, 0, 7, 0, 0, 0 };
	RarefiedList<int> rarli(vecti);
	vector<int> val{ 5, -11, 7 };
	vector<int> pos{ 0, 1, 4 };
	ASSERT_EQ(rarli.getValue(), val);
	ASSERT_EQ(rarli.getPosition(), pos);
}

TEST(RarListConstructorTest, doubleTest)
{
	vector<double> vectd{ 0, -11.7, 0, 0, 7.9, 0, 0, 14 };
	RarefiedList<double> rarld(vectd);
	vector<double> val{ -11.7, 7.9, 14 };
	vector<int> pos{ 1, 4, 7 };
	ASSERT_EQ(rarld.getValue(), val);
	ASSERT_EQ(rarld.getPosition(), pos);
}

TEST(RarListConstructorTest, boolTest)
{
	vector<bool> vectb{ 1, 0, 0, 1, 0, 0, 1, 1 };
	RarefiedList<bool> rarlb(vectb);
	vector<bool> val{ 1, 1, 1, 1 };
	vector<int> pos{ 0, 3, 6, 7 };
	ASSERT_EQ(rarlb.getValue(), val);
	ASSERT_EQ(rarlb.getPosition(), pos);
}