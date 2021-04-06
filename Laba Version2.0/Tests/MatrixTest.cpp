#include "pch.h"
#include "../2YearLaba1/Matrix.h"
#include "../2YearLaba1/Book.h"
#include "../2YearLaba1/Character.h"

TEST(MatrixConstructTest, intTest)
{
	vector<vector<int>> vecti;
	vecti.push_back(vector<int>());
	vecti[0].push_back(4);
	vecti[0].push_back(-44);
	vecti[0].push_back(50);
	vecti.push_back(vector<int>());
	vecti[1].push_back(7);
	vecti[1].push_back(11);
	vecti[1].push_back(52);
	vecti.push_back(vector<int>());
	vecti[2].push_back(-4);
	vecti[2].push_back(21);
	vecti[2].push_back(1);
	Matrix<int> matri(vecti, 3, 3);
	ASSERT_EQ(matri.getRd(), 3);
	ASSERT_EQ(matri.getSt(), 3);
	ASSERT_EQ(matri.getValues(), vecti);
}

TEST(MatrixConstructTest, doubleTest)
{
	vector<vector<double>> vectd;
	vectd.push_back(vector<double>());
	vectd[0].push_back(4.87);
	vectd[0].push_back(-44.9);
	vectd[0].push_back(50.3);
	vectd.push_back(vector<double>());
	vectd[1].push_back(7.7);
	vectd[1].push_back(11.58);
	vectd[1].push_back(52.397);
	vectd.push_back(vector<double>());
	vectd[2].push_back(-4.58);
	vectd[2].push_back(21.24);
	vectd[2].push_back(1.1);
	Matrix<double> matrd(vectd, 3, 3);
	ASSERT_EQ(matrd.getRd(), 3);
	ASSERT_EQ(matrd.getSt(), 3);
	ASSERT_EQ(matrd.getValues(), vectd);
}

TEST(MatrixConstructTest, boolTest)
{
	vector<vector<bool>> vectb;
	vectb.push_back(vector<bool>());
	vectb[0].push_back(1);
	vectb[0].push_back(0);
	vectb[0].push_back(1);
	vectb.push_back(vector<bool>());
	vectb[1].push_back(1);
	vectb[1].push_back(1);
	vectb[1].push_back(1);
	vectb.push_back(vector<bool>());
	vectb[2].push_back(0);
	vectb[2].push_back(0);
	vectb[2].push_back(1);
	Matrix<bool> matrb(vectb, 3, 3);
	ASSERT_EQ(matrb.getRd(), 3);
	ASSERT_EQ(matrb.getSt(), 3);
	ASSERT_EQ(matrb.getValues(), vectb);
}

TEST(MatrixConstructTest, stringTest)
{
	vector<vector<string>> vects;
	vects.push_back(vector<string>());
	vects[0].push_back("car");
	vects[0].push_back("var");
	vects[0].push_back("par");
	vects.push_back(vector<string>());
	vects[1].push_back("tir");
	vects[1].push_back("mir");
	vects[1].push_back("zir");
	vects.push_back(vector<string>());
	vects[2].push_back("cor");
	vects[2].push_back("tor");
	vects[2].push_back("vor");
	Matrix<string> matrs(vects, 3, 3);
	ASSERT_EQ(matrs.getRd(), 3);
	ASSERT_EQ(matrs.getSt(), 3);
	ASSERT_EQ(matrs.getValues(), vects);
}

TEST(MatrixConstructTest, bookTest)
{
	vector<vector<Book>> vectb;
	vectb.push_back(vector<Book>());
	Book b1("../2YearLaba1/Books.txt", 2);
	vectb[0].push_back(b1);
	Book b2("../2YearLaba1/Books.txt", 4);
	vectb[0].push_back(b2);
	vectb.push_back(vector<Book>());
	Book b3("../2YearLaba1/Books.txt", 5);
	vectb[1].push_back(b3);
	Book b4("../2YearLaba1/Books.txt", 7);
	vectb[1].push_back(b4);
	Matrix<Book> matrb(vectb, 2, 2);
	ASSERT_EQ(matrb.getRd(), 2);
	ASSERT_EQ(matrb.getSt(), 2);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			ASSERT_EQ(matrb.getValues()[i][j].getName(), vectb[i][j].getName());
		}
	}
}

TEST(MatrixConstructTest, characterTest)
{
	vector<vector<Character>> vectc;
	vectc.push_back(vector<Character>());
	Character c1("../2YearLaba1/Characters.txt", 1);
	vectc[0].push_back(c1);
	Character c2("../2YearLaba1/Characters.txt", 2);
	vectc[0].push_back(c2);
	vectc.push_back(vector<Character>());
	Character c3("../2YearLaba1/Characters.txt", 3);
	vectc[1].push_back(c3);
	Character c4("../2YearLaba1/Characters.txt", 4);
	vectc[1].push_back(c4);
	Matrix<Character> matrc(vectc, 2, 2);
	ASSERT_EQ(matrc.getRd(), 2);
	ASSERT_EQ(matrc.getSt(), 2);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			ASSERT_EQ(matrc.getValues()[i][j].getName(), vectc[i][j].getName());
		}
	}
}

TEST(MatrixElementByIndexTest, intTest)
{
	vector<vector<int>> vecti;
	vecti.push_back(vector<int>());
	vecti[0].push_back(4);
	vecti[0].push_back(-44);
	vecti[0].push_back(50);
	vecti.push_back(vector<int>());
	vecti[1].push_back(7);
	vecti[1].push_back(11);
	vecti[1].push_back(52);
	vecti.push_back(vector<int>());
	vecti[2].push_back(-4);
	vecti[2].push_back(21);
	vecti[2].push_back(1);
	Matrix<int> matri(vecti, 3, 3);
	ASSERT_EQ(matri(1, 1), 11);
}

TEST(MatrixElementByIndexTest, doubleTest)
{
	vector<vector<double>> vectd;
	vectd.push_back(vector<double>());
	vectd[0].push_back(4.87);
	vectd[0].push_back(-44.9);
	vectd[0].push_back(50.3);
	vectd.push_back(vector<double>());
	vectd[1].push_back(7.7);
	vectd[1].push_back(11.58);
	vectd[1].push_back(52.397);
	vectd.push_back(vector<double>());
	vectd[2].push_back(-4.58);
	vectd[2].push_back(21.24);
	vectd[2].push_back(1.1);
	Matrix<double> matrd(vectd, 3, 3);
	ASSERT_EQ(matrd(1, 2), 52.397);
}

TEST(MatrixElementByIndexTest, boolTest)
{
	vector<vector<bool>> vectb;
	vectb.push_back(vector<bool>());
	vectb[0].push_back(1);
	vectb[0].push_back(0);
	vectb[0].push_back(1);
	vectb.push_back(vector<bool>());
	vectb[1].push_back(1);
	vectb[1].push_back(1);
	vectb[1].push_back(1);
	vectb.push_back(vector<bool>());
	vectb[2].push_back(0);
	vectb[2].push_back(0);
	vectb[2].push_back(1);
	Matrix<bool> matrb(vectb, 3, 3);
	ASSERT_EQ(matrb.getValues()[2][1], false);
}

TEST(MatrixElementByIndexTest, stringTest)
{
	vector<vector<string>> vects;
	vects.push_back(vector<string>());
	vects[0].push_back("car");
	vects[0].push_back("var");
	vects[0].push_back("par");
	vects.push_back(vector<string>());
	vects[1].push_back("tir");
	vects[1].push_back("mir");
	vects[1].push_back("zir");
	vects.push_back(vector<string>());
	vects[2].push_back("cor");
	vects[2].push_back("tor");
	vects[2].push_back("vor");
	Matrix<string> matrs(vects, 3, 3);
	ASSERT_EQ(matrs(0, 0), "car");
}

TEST(MatrixElementByIndexTest, bookTest)
{
	vector<vector<Book>> vectb;
	vectb.push_back(vector<Book>());
	Book b1("../2YearLaba1/Books.txt", 2);
	vectb[0].push_back(b1);
	Book b2("../2YearLaba1/Books.txt", 4);
	vectb[0].push_back(b2);
	vectb.push_back(vector<Book>());
	Book b3("../2YearLaba1/Books.txt", 5);
	vectb[1].push_back(b3);
	Book b4("../2YearLaba1/Books.txt", 7);
	vectb[1].push_back(b4);
	Matrix<Book> matrb(vectb, 2, 2);
	ASSERT_EQ(matrb(1, 0).getName(), "Гра Престолiв");
}

TEST(MatrixElementByIndexTest, characterTest)
{
	vector<vector<Character>> vectc;
	vectc.push_back(vector<Character>());
	Character c1("../2YearLaba1/Characters.txt", 1);
	vectc[0].push_back(c1);
	Character c2("../2YearLaba1/Characters.txt", 2);
	vectc[0].push_back(c2);
	vectc.push_back(vector<Character>());
	Character c3("../2YearLaba1/Characters.txt", 3);
	vectc[1].push_back(c3);
	Character c4("../2YearLaba1/Characters.txt", 4);
	vectc[1].push_back(c4);
	Matrix<Character> matrc(vectc, 2, 2);
	ASSERT_EQ(matrc(0, 1).getName(), "Камiла");
}

TEST(MatrixIndexOfElementTest, intTest)
{
	vector<vector<int>> vecti;
	vecti.push_back(vector<int>());
	vecti[0].push_back(4);
	vecti[0].push_back(-44);
	vecti[0].push_back(50);
	vecti.push_back(vector<int>());
	vecti[1].push_back(7);
	vecti[1].push_back(11);
	vecti[1].push_back(50);
	vecti.push_back(vector<int>());
	vecti[2].push_back(-4);
	vecti[2].push_back(21);
	vecti[2].push_back(1);
	Matrix<int> matri(vecti, 3, 3);
	vector<int> res{ 0, 2, 1, 2 };
	ASSERT_EQ(matri.getValue(50), res);
}

TEST(MatrixIndexOfElementTest, doubleTest)
{
	vector<vector<double>> vectd;
	vectd.push_back(vector<double>());
	vectd[0].push_back(4.87);
	vectd[0].push_back(-44.9);
	vectd[0].push_back(50.3);
	vectd.push_back(vector<double>());
	vectd[1].push_back(7.7);
	vectd[1].push_back(11.58);
	vectd[1].push_back(52.397);
	vectd.push_back(vector<double>());
	vectd[2].push_back(-4.58);
	vectd[2].push_back(-44.9);
	vectd[2].push_back(1.1);
	Matrix<double> matrd(vectd, 3, 3);
	vector<int> res{ 0, 1, 2, 1 };
	ASSERT_EQ(matrd.getValue(-44.9), res);
}

TEST(MatrixIndexOfElementTest, boolTest)
{
	vector<vector<bool>> vectb;
	vectb.push_back(vector<bool>());
	vectb[0].push_back(1);
	vectb[0].push_back(0);
	vectb[0].push_back(1);
	vectb.push_back(vector<bool>());
	vectb[1].push_back(1);
	vectb[1].push_back(1);
	vectb[1].push_back(1);
	vectb.push_back(vector<bool>());
	vectb[2].push_back(0);
	vectb[2].push_back(0);
	vectb[2].push_back(1);
	Matrix<bool> matrb(vectb, 3, 3);
	vector<int> res{ 0, 0, 0, 2, 1, 0, 1, 1, 1, 2, 2, 2};
	ASSERT_EQ(matrb.getValue(true), res);
}

TEST(MatrixIndexOfElementTest, stringTest)
{
	vector<vector<string>> vects;
	vects.push_back(vector<string>());
	vects[0].push_back("car");
	vects[0].push_back("var");
	vects[0].push_back("par");
	vects.push_back(vector<string>());
	vects[1].push_back("tir");
	vects[1].push_back("mir");
	vects[1].push_back("zir");
	vects.push_back(vector<string>());
	vects[2].push_back("cor");
	vects[2].push_back("tor");
	vects[2].push_back("vor");
	Matrix<string> matrs(vects, 3, 3);
	vector<int> res{ 1, 2 };
	ASSERT_EQ(matrs.getValue("zir"), res);
}

TEST(MatrixIndexOfElementTest, bookTest)
{
	vector<vector<Book>> vectb;
	vectb.push_back(vector<Book>());
	Book b1("../2YearLaba1/Books.txt", 2);
	vectb[0].push_back(b1);
	Book b2("../2YearLaba1/Books.txt", 4);
	vectb[0].push_back(b2);
	vectb.push_back(vector<Book>());
	Book b3("../2YearLaba1/Books.txt", 5);
	vectb[1].push_back(b3);
	Book b4("../2YearLaba1/Books.txt", 7);
	vectb[1].push_back(b4);
	Matrix<Book> matrb(vectb, 2, 2);
	vector<int> res{ 0, 0 };
	ASSERT_EQ(matrb.getBookValue("Клас панi Чайки"), res);
}

TEST(MatrixIndexOfElementTest, characterTest)
{
	vector<vector<Character>> vectc;
	vectc.push_back(vector<Character>());
	Character c1("../2YearLaba1/Characters.txt", 1);
	vectc[0].push_back(c1);
	Character c2("../2YearLaba1/Characters.txt", 2);
	vectc[0].push_back(c2);
	vectc.push_back(vector<Character>());
	Character c3("../2YearLaba1/Characters.txt", 3);
	vectc[1].push_back(c3);
	Character c4("../2YearLaba1/Characters.txt", 4);
	vectc[1].push_back(c4);
	Matrix<Character> matrc(vectc, 2, 2);
	vector<int> res{ 1, 1 };
	ASSERT_EQ(matrc.getCharacterValue("Тирiон Ланiстер"), res);
}

TEST(MatrixAddTest, intTest)
{
	vector<vector<int>> vecti;
	vecti.push_back(vector<int>());
	vecti[0].push_back(4);
	vecti[0].push_back(-44);
	vecti[0].push_back(50);
	vecti.push_back(vector<int>());
	vecti[1].push_back(7);
	vecti[1].push_back(11);
	vecti[1].push_back(50);
	vecti.push_back(vector<int>());
	vecti[2].push_back(-4);
	vecti[2].push_back(21);
	vecti[2].push_back(1);
	Matrix<int> matri(vecti, 3, 3);

	vector<vector<int>> vecti2;
	vecti2.push_back(vector<int>());
	vecti2[0].push_back(7);
	vecti2[0].push_back(-12);
	vecti2[0].push_back(37);
	vecti2.push_back(vector<int>());
	vecti2[1].push_back(4);
	vecti2[1].push_back(55);
	vecti2[1].push_back(49);
	vecti2.push_back(vector<int>());
	vecti2[2].push_back(0);
	vecti2[2].push_back(-12);
	vecti2[2].push_back(7);
	Matrix<int> matri2(vecti2, 3, 3);

	vector<vector<int>> vecti3;
	vecti3.push_back(vector<int>());
	vecti3[0].push_back(11);
	vecti3[0].push_back(-56);
	vecti3[0].push_back(87);
	vecti3.push_back(vector<int>());
	vecti3[1].push_back(11);
	vecti3[1].push_back(66);
	vecti3[1].push_back(99);
	vecti3.push_back(vector<int>());
	vecti3[2].push_back(-4);
	vecti3[2].push_back(9);
	vecti3[2].push_back(8);
	Matrix<int> matri3(vecti3, 3, 3);

	ASSERT_EQ(matri.addMatrix(matri2).getValues(), matri3.getValues());
}

TEST(MatrixAddTest, doubleTest)
{
	vector<vector<double>> vectd;
	vectd.push_back(vector<double>());
	vectd[0].push_back(4.58);
	vectd[0].push_back(-7.19);
	vectd[0].push_back(50.47);
	vectd.push_back(vector<double>());
	vectd[1].push_back(7.385);
	vectd[1].push_back(11.7);
	vectd[1].push_back(50.29);
	vectd.push_back(vector<double>());
	vectd[2].push_back(-4.78);
	vectd[2].push_back(21.1);
	vectd[2].push_back(1);
	Matrix<double> matrd(vectd, 3, 3);

	vector<vector<double>> vectd2;
	vectd2.push_back(vector<double>());
	vectd2[0].push_back(7.78);
	vectd2[0].push_back(-12.21);
	vectd2[0].push_back(37.87);
	vectd2.push_back(vector<double>());
	vectd2[1].push_back(4.8);
	vectd2[1].push_back(55);
	vectd2[1].push_back(49.71);
	vectd2.push_back(vector<double>());
	vectd2[2].push_back(0.8);
	vectd2[2].push_back(-12.77);
	vectd2[2].push_back(7.55);
	Matrix<double> matrd2(vectd2, 3, 3);

	vector<vector<double>> vectd3;
	vectd3.push_back(vector<double>());
	vectd3[0].push_back(12.36);
	vectd3[0].push_back(-19.4);
	vectd3[0].push_back(88.34);
	vectd3.push_back(vector<double>());
	vectd3[1].push_back(12.185);
	vectd3[1].push_back(66.7);
	vectd3[1].push_back(100);
	vectd3.push_back(vector<double>());
	vectd3[2].push_back(-3.98);
	vectd3[2].push_back(8.33);
	vectd3[2].push_back(8.55);
	Matrix<double> matrd3(vectd3, 3, 3);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			ASSERT_DOUBLE_EQ(matrd.addMatrix(matrd2).getValues()[i][j], matrd3.getValues()[i][j]);
		}
	}
}

TEST(MatrixAddTest, boolTest)
{
	vector<vector<bool>> vectb;
	vectb.push_back(vector<bool>());
	vectb[0].push_back(1);
	vectb[0].push_back(0);
	vectb[0].push_back(1);
	vectb.push_back(vector<bool>());
	vectb[1].push_back(1);
	vectb[1].push_back(1);
	vectb[1].push_back(1);
	vectb.push_back(vector<bool>());
	vectb[2].push_back(0);
	vectb[2].push_back(0);
	vectb[2].push_back(1);
	Matrix<bool> matrb(vectb, 3, 3);

	vector<vector<bool>> vectb2;
	vectb2.push_back(vector<bool>());
	vectb2[0].push_back(0);
	vectb2[0].push_back(0);
	vectb2[0].push_back(1);
	vectb2.push_back(vector<bool>());
	vectb2[1].push_back(1);
	vectb2[1].push_back(0);
	vectb2[1].push_back(1);
	vectb2.push_back(vector<bool>());
	vectb2[2].push_back(1);
	vectb2[2].push_back(0);
	vectb2[2].push_back(1);
	Matrix<bool> matrb2(vectb2, 3, 3);

	vector<vector<bool>> vectb3;
	vectb3.push_back(vector<bool>());
	vectb3[0].push_back(1);
	vectb3[0].push_back(0);
	vectb3[0].push_back(1);
	vectb3.push_back(vector<bool>());
	vectb3[1].push_back(1);
	vectb3[1].push_back(1);
	vectb3[1].push_back(1);
	vectb3.push_back(vector<bool>());
	vectb3[2].push_back(1);
	vectb3[2].push_back(0);
	vectb3[2].push_back(1);
	Matrix<bool> matrb3(vectb3, 3, 3);

	ASSERT_EQ(matrb.addMatrix(matrb2).getValues(), matrb3.getValues());
}

TEST(MatrixMultiplyTest, intTest)
{
	vector<vector<int>> vecti;
	vecti.push_back(vector<int>());
	vecti[0].push_back(4);
	vecti[0].push_back(-44);
	vecti[0].push_back(50);
	vecti.push_back(vector<int>());
	vecti[1].push_back(7);
	vecti[1].push_back(11);
	vecti[1].push_back(50);
	vecti.push_back(vector<int>());
	vecti[2].push_back(-4);
	vecti[2].push_back(21);
	vecti[2].push_back(1);
	Matrix<int> matri(vecti, 3, 3);

	vector<vector<int>> vecti2;
	vecti2.push_back(vector<int>());
	vecti2[0].push_back(7);
	vecti2[0].push_back(-12);
	vecti2[0].push_back(37);
	vecti2.push_back(vector<int>());
	vecti2[1].push_back(4);
	vecti2[1].push_back(55);
	vecti2[1].push_back(49);
	vecti2.push_back(vector<int>());
	vecti2[2].push_back(0);
	vecti2[2].push_back(-12);
	vecti2[2].push_back(7);
	Matrix<int> matri2(vecti2, 3, 3);

	vector<vector<int>> vecti3;
	vecti3.push_back(vector<int>());
	vecti3[0].push_back(-148);
	vecti3[0].push_back(-3068);
	vecti3[0].push_back(-1658);
	vecti3.push_back(vector<int>());
	vecti3[1].push_back(93);
	vecti3[1].push_back(-79);
	vecti3[1].push_back(1148);
	vecti3.push_back(vector<int>());
	vecti3[2].push_back(56);
	vecti3[2].push_back(1191);
	vecti3[2].push_back(888);
	Matrix<int> matri3(vecti3, 3, 3);

	ASSERT_EQ(matri.multiplyMatrix(matri2).getValues(), matri3.getValues());
}

TEST(MatrixMultiplyTest, doubleTest)
{
	vector<vector<double>> vectd;
	vectd.push_back(vector<double>());
	vectd[0].push_back(4.58);
	vectd[0].push_back(-7.19);
	vectd[0].push_back(50.47);
	vectd.push_back(vector<double>());
	vectd[1].push_back(7.385);
	vectd[1].push_back(11.7);
	vectd[1].push_back(50.29);
	vectd.push_back(vector<double>());
	vectd[2].push_back(-4.78);
	vectd[2].push_back(21.1);
	vectd[2].push_back(1);
	Matrix<double> matrd(vectd, 3, 3);

	vector<vector<double>> vectd2;
	vectd2.push_back(vector<double>());
	vectd2[0].push_back(7.78);
	vectd2[0].push_back(-12.21);
	vectd2[0].push_back(37.87);
	vectd2.push_back(vector<double>());
	vectd2[1].push_back(4.8);
	vectd2[1].push_back(55);
	vectd2[1].push_back(49.71);
	vectd2.push_back(vector<double>());
	vectd2[2].push_back(0.8);
	vectd2[2].push_back(-12.77);
	vectd2[2].push_back(7.55);
	Matrix<double> matrd2(vectd2, 3, 3);

	vector<vector<double>> vectd3;
	vectd3.push_back(vector<double>());
	vectd3[0].push_back(41.4964);
	vectd3[0].push_back(-1095.8737);
	vectd3[0].push_back(197.0782);
	vectd3.push_back(vector<double>());
	vectd3[1].push_back(153.8473);
	vectd3[1].push_back(-88.87415);
	vectd3[1].push_back(1240.96645);
	vectd3.push_back(vector<double>());
	vectd3[2].push_back(64.8916);
	vectd3[2].push_back(1206.0938);
	vectd3[2].push_back(875.4124);
	Matrix<double> matrd3(vectd3, 3, 3);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			ASSERT_DOUBLE_EQ(matrd.multiplyMatrix(matrd2).getValues()[i][j], matrd3.getValues()[i][j]);
		}
	}
}

TEST(MatrixMultiplyTest, boolTest)
{
	vector<vector<bool>> vectb;
	vectb.push_back(vector<bool>());
	vectb[0].push_back(1);
	vectb[0].push_back(0);
	vectb[0].push_back(1);
	vectb.push_back(vector<bool>());
	vectb[1].push_back(1);
	vectb[1].push_back(1);
	vectb[1].push_back(1);
	vectb.push_back(vector<bool>());
	vectb[2].push_back(0);
	vectb[2].push_back(0);
	vectb[2].push_back(1);
	Matrix<bool> matrb(vectb, 3, 3);

	vector<vector<bool>> vectb2;
	vectb2.push_back(vector<bool>());
	vectb2[0].push_back(0);
	vectb2[0].push_back(0);
	vectb2[0].push_back(1);
	vectb2.push_back(vector<bool>());
	vectb2[1].push_back(1);
	vectb2[1].push_back(0);
	vectb2[1].push_back(1);
	vectb2.push_back(vector<bool>());
	vectb2[2].push_back(1);
	vectb2[2].push_back(0);
	vectb2[2].push_back(1);
	Matrix<bool> matrb2(vectb2, 3, 3);

	vector<vector<bool>> vectb3;
	vectb3.push_back(vector<bool>());
	vectb3[0].push_back(1);
	vectb3[0].push_back(0);
	vectb3[0].push_back(1);
	vectb3.push_back(vector<bool>());
	vectb3[1].push_back(1);
	vectb3[1].push_back(0);
	vectb3[1].push_back(1);
	vectb3.push_back(vector<bool>());
	vectb3[2].push_back(1);
	vectb3[2].push_back(0);
	vectb3[2].push_back(1);
	Matrix<bool> matrb3(vectb3, 3, 3);

	ASSERT_EQ(matrb.multiplyMatrix(matrb2).getValues(), matrb3.getValues());
}

TEST(MatrixByVectorTest, intTest)
{
	vector<vector<int>> vecti;
	vecti.push_back(vector<int>());
	vecti[0].push_back(4);
	vecti[0].push_back(-44);
	vecti[0].push_back(50);
	vecti.push_back(vector<int>());
	vecti[1].push_back(7);
	vecti[1].push_back(11);
	vecti[1].push_back(50);
	vecti.push_back(vector<int>());
	vecti[2].push_back(-4);
	vecti[2].push_back(21);
	vecti[2].push_back(1);
	Matrix<int> matri(vecti, 3, 3);

	vector<int> vecti2;
	vecti2.push_back(7);
	vecti2.push_back(-12);
	vecti2.push_back(37);

	vector<int> vecti3;
	vecti3.push_back(2406);
	vecti3.push_back(1767);
	vecti3.push_back(-243);
	
	ASSERT_EQ(matri.multiplyMatrixByVector(vecti2), vecti3);
}

TEST(MatrixByVectorTest, doubleTest)
{
	vector<vector<double>> vectd;
	vectd.push_back(vector<double>());
	vectd[0].push_back(4.58);
	vectd[0].push_back(-7.19);
	vectd[0].push_back(50.47);
	vectd.push_back(vector<double>());
	vectd[1].push_back(7.385);
	vectd[1].push_back(11.7);
	vectd[1].push_back(50.29);
	vectd.push_back(vector<double>());
	vectd[2].push_back(-4.78);
	vectd[2].push_back(21.1);
	vectd[2].push_back(1);
	Matrix<double> matrd(vectd, 3, 3);

	vector<double> vectd2;
	vectd2.push_back(7.78);
	vectd2.push_back(-12.21);
	vectd2.push_back(37.87);

	vector<double> vectd3;
	vectd3.push_back(2034.7212);
	vectd3.push_back(1819.0806);
	vectd3.push_back(-256.9494);
	
	for (int i = 0; i < 3; i++)
	{
			ASSERT_DOUBLE_EQ(matrd.multiplyMatrixByVector(vectd2)[i], vectd3[i]);
	}
}

TEST(MatrixByVectorTest, boolTest)
{
	vector<vector<bool>> vectb;
	vectb.push_back(vector<bool>());
	vectb[0].push_back(1);
	vectb[0].push_back(0);
	vectb[0].push_back(1);
	vectb.push_back(vector<bool>());
	vectb[1].push_back(1);
	vectb[1].push_back(1);
	vectb[1].push_back(1);
	vectb.push_back(vector<bool>());
	vectb[2].push_back(0);
	vectb[2].push_back(0);
	vectb[2].push_back(1);
	Matrix<bool> matrb(vectb, 3, 3);

	vector<bool> vectb2;
	vectb2.push_back(0);
	vectb2.push_back(0);
	vectb2.push_back(1);

	vector<bool> vectb3;
	vectb3.push_back(1);
	vectb3.push_back(1);
	vectb3.push_back(1);

	ASSERT_EQ(matrb.multiplyMatrixByVector(vectb2), vectb3);
}

TEST(MatrixTransponeTest, intTest)
{
	vector<vector<int>> vecti;
	vecti.push_back(vector<int>());
	vecti[0].push_back(4);
	vecti[0].push_back(-44);
	vecti[0].push_back(50);
	vecti.push_back(vector<int>());
	vecti[1].push_back(7);
	vecti[1].push_back(11);
	vecti[1].push_back(50);
	vecti.push_back(vector<int>());
	vecti[2].push_back(-4);
	vecti[2].push_back(21);
	vecti[2].push_back(1);
	Matrix<int> matri(vecti, 3, 3);

	vector<vector<int>> vecti2;
	vecti2.push_back(vector<int>());
	vecti2[0].push_back(4);
	vecti2[0].push_back(7);
	vecti2[0].push_back(-4);
	vecti2.push_back(vector<int>());
	vecti2[1].push_back(-44);
	vecti2[1].push_back(11);
	vecti2[1].push_back(21);
	vecti2.push_back(vector<int>());
	vecti2[2].push_back(50);
	vecti2[2].push_back(50);
	vecti2[2].push_back(1);
	Matrix<int> matri2(vecti2, 3, 3);


	ASSERT_EQ(matri.transponeMatrix().getValues(), matri2.getValues());
}

TEST(MatrixTransponeTest, doubleTest)
{
	vector<vector<double>> vectd;
	vectd.push_back(vector<double>());
	vectd[0].push_back(4.58);
	vectd[0].push_back(-7.19);
	vectd[0].push_back(50.47);
	vectd.push_back(vector<double>());
	vectd[1].push_back(7.385);
	vectd[1].push_back(11.7);
	vectd[1].push_back(50.29);
	vectd.push_back(vector<double>());
	vectd[2].push_back(-4.78);
	vectd[2].push_back(21.1);
	vectd[2].push_back(1);
	Matrix<double> matrd(vectd, 3, 3);

	vector<vector<double>> vectd2;
	vectd2.push_back(vector<double>());
	vectd2[0].push_back(4.58);
	vectd2[0].push_back(7.385);
	vectd2[0].push_back(-4.78);
	vectd2.push_back(vector<double>());
	vectd2[1].push_back(-7.19);
	vectd2[1].push_back(11.7);
	vectd2[1].push_back(21.1);
	vectd2.push_back(vector<double>());
	vectd2[2].push_back(50.47);
	vectd2[2].push_back(50.29);
	vectd2[2].push_back(1);
	Matrix<double> matrd2(vectd2, 3, 3);

	ASSERT_EQ(matrd.transponeMatrix().getValues(), matrd2.getValues());

}

TEST(MatrixTransponeTest, boolTest)
{
	vector<vector<bool>> vectb;
	vectb.push_back(vector<bool>());
	vectb[0].push_back(1);
	vectb[0].push_back(0);
	vectb[0].push_back(1);
	vectb.push_back(vector<bool>());
	vectb[1].push_back(1);
	vectb[1].push_back(1);
	vectb[1].push_back(1);
	vectb.push_back(vector<bool>());
	vectb[2].push_back(0);
	vectb[2].push_back(0);
	vectb[2].push_back(1);
	Matrix<bool> matrb(vectb, 3, 3);

	vector<vector<bool>> vectb2;
	vectb2.push_back(vector<bool>());
	vectb2[0].push_back(1);
	vectb2[0].push_back(1);
	vectb2[0].push_back(0);
	vectb2.push_back(vector<bool>());
	vectb2[1].push_back(0);
	vectb2[1].push_back(1);
	vectb2[1].push_back(0);
	vectb2.push_back(vector<bool>());
	vectb2[2].push_back(1);
	vectb2[2].push_back(1);
	vectb2[2].push_back(1);
	Matrix<bool> matrb2(vectb2, 3, 3);

	

	ASSERT_EQ(matrb.transponeMatrix().getValues(), matrb2.getValues());
}