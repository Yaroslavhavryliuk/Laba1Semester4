#include "pch.h"
#include "../2YearLaba1/RarefiedMatrix.h"

TEST(RarMatrixConstructorTest, intTest)
{
	vector<vector<int>> vecti;
	vecti.push_back(vector<int>());
	vecti[0].push_back(0);
	vecti[0].push_back(-44);
	vecti[0].push_back(0);
	vecti.push_back(vector<int>());
	vecti[1].push_back(7);
	vecti[1].push_back(0);
	vecti[1].push_back(0);
	vecti.push_back(vector<int>());
	vecti[2].push_back(0);
	vecti[2].push_back(21);
	vecti[2].push_back(0);
	RarefiedMatrix<int> rarmi(vecti);
	vector<int> val{ -44, 7, 21 };
	vector<int> cls{ 1, 0, 1 };
	vector<int> ptr{ 0, 1, 2, 3 };
	ASSERT_EQ(rarmi.getValue(), val);
	ASSERT_EQ(rarmi.getCols(), cls);
	ASSERT_EQ(rarmi.getPointers(), ptr);
}

TEST(RarMatrixConstructorTest, doubleTest)
{
	vector<vector<double>> vectd;
	vectd.push_back(vector<double>());
	vectd[0].push_back(0);
	vectd[0].push_back(-44.87);
	vectd[0].push_back(0);
	vectd.push_back(vector<double>());
	vectd[1].push_back(7);
	vectd[1].push_back(0);
	vectd[1].push_back(19.3);
	vectd.push_back(vector<double>());
	vectd[2].push_back(0);
	vectd[2].push_back(21.2);
	vectd[2].push_back(0);
	RarefiedMatrix<double> rarmd(vectd);
	vector<double> val{ -44.87, 7, 19.3, 21.2 };
	vector<int> cls{ 1, 0, 2, 1 };
	vector<int> ptr{ 0, 1, 3, 4 };
	ASSERT_EQ(rarmd.getValue(), val);
	ASSERT_EQ(rarmd.getCols(), cls);
	ASSERT_EQ(rarmd.getPointers(), ptr);
}

TEST(RarMatrixConstructorTest, boolTest)
{
	vector<vector<bool>> vectb;
	vectb.push_back(vector<bool>());
	vectb[0].push_back(0);
	vectb[0].push_back(1);
	vectb[0].push_back(0);
	vectb.push_back(vector<bool>());
	vectb[1].push_back(0);
	vectb[1].push_back(1);
	vectb[1].push_back(0);
	vectb.push_back(vector<bool>());
	vectb[2].push_back(0);
	vectb[2].push_back(1);
	vectb[2].push_back(1);
	RarefiedMatrix<bool> rarmb(vectb);
	vector<bool> val{ 1, 1, 1, 1 };
	vector<int> cls{ 1, 1, 1 ,2};
	vector<int> ptr{ 0, 1, 2, 4 };
	ASSERT_EQ(rarmb.getValue(), val);
	ASSERT_EQ(rarmb.getCols(), cls);
	ASSERT_EQ(rarmb.getPointers(), ptr);
}