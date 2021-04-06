#include"Book.h"
#include"Character.h"

/**
\brief Constructor of the class Book

This function takes the name of file with books and the id of the selected book in the file
\warning Check if the book with this id exists in file

This function creates an object of class Book
*/
Book::Book(string filename, int id)
{
	ifstream finb; ///< file stream
	finb.open(filename);
	/// exception for error of opening the file
	if (!finb.is_open())
	{
		cout << "������� �i������� ����� � �������!" << endl; 
	}
	else
	{
		if (finb.eof())
		{
			cout << "���� ������" << endl;
		}
		for (int i = 1; i < id; i++)
		{
			string str;///< variable for reading the file
			for (int j = 0; j < 7; j++)
			{
				getline(finb, str);
			}
			/// exception for wrong input
			if (finb.eof())
			{
				cout << "�� i��� ����� � ����� id" << endl;
				break;
			}
		}
		/// creating an object of Book
		char ch;
		finb >> this->id;
		finb >> ch;
		getline(finb, this->name);
		getline(finb, this->authors);
		finb >> this->year;
		finb >> this->pages;
		finb >> ch;
		getline(finb, this->anotation);
		getline(finb, this->genre);
		finb.close();
		ifstream fin; ///< file stream
		fin.open("Characters.txt");
		/// exception for error of opening the file
		if (!fin.is_open())
		{
			cout << "������� �i������� ����� � �����������!" << endl;
		}
		else
		{
			/// reading of the file with characters
			string str;
			string book;
			string name;
			string stat;
			char ch;
			int num;
			int end = Character::sizeofCharactersFile();
			bool seria = false; ///< variable, which shows, is the book in serie
			for (int i = 0; i < end; i++)
			{
				getline(fin, str);
				fin >> ch;
				getline(fin, name);
				fin >> num;///< The number of books for each character
				fin >> ch;
				if (num == 1)
				{
					getline(fin, str);
					getline(fin, str);
					continue;
				}
				else
				{
					int k = 0;///< The counter for books for the character
					bool logic = false;
					for (int i = 0; i < num; i++)
					{
						getline(fin, book);
						getline(fin, stat);
						if ((this->name == book) && ((stat == "��������") || (stat == "�����������")))
						{
							logic = true;///< helpful logical variable
						}
						if ((stat == "��������") || (stat == "�����������"))
						{
							k++;
						}
					}
					/// The result if the book is in serie
					if ((k >= 2)&&logic)
					{
						this->serie = "���i���(" + name + ")";
						seria = true;
					}
				}
			}
			fin.close();
			/// The result if the book isn't in serie
			if (!seria)
			{
				this->serie="�� ���i���";
			}
		}
	}
}
/**
\brief Getter for id field

This function returns the id of the book

*/
int Book::getId()
{
	return id;
}
/**
\brief Getter for name field

This function returns the name of the book

*/

string& Book::getName()
{
	return name;
}
/**
\brief Getter for authors field

This function returns names of authors of the book

*/
string& Book::getAuthors()
{
	return authors;
}
/**
\brief Getter for year field

This function returns the year of publishing of the book

*/

int Book::getYear()
{
	return year;
}
/**
\brief Getter for pages field

This function returns the number of pages of the book

*/
int Book::getPages()
{
	return pages;
}
/**
\brief Getter for anotation field

This function returns the short information about the plot of the book

*/
string& Book::getAnotation()
{
	return anotation;
}
/**
\brief Getter for genre field

This function returns the genre of the book

*/
string& Book::getGenre()
{
	return genre;
}
/**
\brief Getter for serie field

This function returns if the book is in serie and common character for the serie

*/
string& Book::getSerie()
{
	return serie;
}
/**
\brief Print all information about the book

This function puts out into console the whole information
from all of fields of the book

*/
void Book::print()
{
	cout << this->id << endl;
	cout << this->name << endl;
	cout << this->authors << endl;
	cout << this->year << endl;
	cout << this->pages << endl;
	cout << this->anotation << endl;
	cout << this->genre << endl;
	cout << this->serie << endl;
}


/**
\brief The number of books in file

This function returns the number of books in the book file

*/
int Book::sizeofBooksFile()
{
	ifstream finbs;///< file stream
	finbs.open("Books.txt");
	/// exception for error of opening the file
	if (!finbs.is_open())
	{
		cout << "������� �i������� ����� � �������!" << endl;
		return -1;
	}
	else
	{
		/// if the file is empty
		if (finbs.eof())
		{
			finbs.close();
			return 0;
		}
		else
		{
			int count = 0;///< Counter variable
			string str;
			while (!finbs.eof())
			{
				/// Read one book from the file
				for (int j = 0; j < 7; j++)
				{
					getline(finbs, str);
				}
				count++;
			}
			finbs.close();
			return count - 1;///< It takes the last symbol like new structure, so we need to do -1
		}
	}
}




/// Destructor of the class Book
Book::~Book()
{

}




