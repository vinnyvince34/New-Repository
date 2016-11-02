/*Vincent Alexander Seliang
*CS02
*2001585562*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstddef>
#include <cstring>
#include <chrono>
#include <locale>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <array>
#include <cctype>

using namespace std;

void FunctionOne()
{
	class Author
	{
	private:
		string name;
		string email;
		char gender;
	public:
		Author(string name, string email, char gender)
		{
			this->name = name;
			this->email = email;
			this->gender = gender;
		}
		Author()
		{
			this->name = "";
			this->email = "";
			this->gender = ' ';
		}
		string getName()
		{
			return name;
		}
		string getEmail()
		{
			return email;
		}
		void setEmail(string email)
		{
			this->email = email;
		}
		char getGender()
		{
			return gender;
		}
		string toString()
		{
			return "Author[name= " + name + ", email= " + email + ", gender= " + gender;
		}
	};

	class Book
	{
	private:
		string name;
		Author* authors;
		double price;
		int qty = 0;
	public:
		Book(string name, Author author[], double price)
		{
			this->name = name;
			this->authors = new Author[2];
			this->price = price;
		}
		Book(string name, Author author, double price, int qty)
		{
			this->name = name;
			this->authors = new Author[2];
			this->price = price;
			this->qty = qty;
		}
		string getName()
		{
			return name;
		}
		Author getAuthor()
		{
			return *authors;
		}
		int getPrice()
		{
			return price;
		}
		void setPrice(double price)
		{
			this->price = price;
			return;
		}
		int getQty()
		{
			return qty;
		}
		void setQty(int qty)
		{
			this->qty = qty;
			return;
		}
		string toString()
		{
			return "Book[name= " + name + ", Author[" + authors[0].toString() + "], price= " + to_string(price) + ", qty= " + to_string(qty) + ", ";
		}
		string getAuthorNames()
		{
			return authors[0].getName() + ' ' + authors[1].getName();
		}
	};
}

void FunctionTwo()
{
	class MyPoint
	{
	private:
		int x = 0;
		int y = 0;
	public:
		MyPoint()
		{
			x = 0;
			y = 0;
		}
		MyPoint(int x, int y)
		{
			this->x = x;
			this->y = y;
		}
		int getX()
		{
			return x;
		}
		int getY()
		{
			return y;
		}
		void setX(int x)
		{
			this->x = x;
		}
		void setY(int y)
		{
			this->y = y;
		}
		void setXY(int x, int y)
		{
			this->x = x;
			this->y = y;
		}
		int *getXY()
		{
			int *nArray = new int[2];
			nArray[0] = this->x;
			nArray[1] = y;
			return nArray;
		}
		double distance(int x, int y)
		{
			this->x = pow(this->x - x, 2);
			this->y = pow(this->y - y, 2);
			return pow(this->x + this->y, 0.5);
		}
		double distance(MyPoint another)
		{
			another.x = pow(another.x - this->x, 2);
			another.y = pow(another.y - this->y, 2);
			return pow(another.x + another.y, 0.5);
		}
		double distance()
		{
			this->x = pow(this->x - 0, 2);
			this->y = pow(this->y - 0, 2);
			return pow(this->x + this->y, 0.5);
		}
		string toString()
		{
			return "(" + x + ' ' + y + ')';
		}
	};
	
	class MyCircle
	{
	private:
		MyPoint center;
		int radius = 1;
	public:
		MyCircle()
		{
			center;
			radius = 1;
		}
		MyCircle(int x, int y, int radius, MyPoint* point)
		{
			point->setXY(x, y);
			this->radius = radius;
		}
		int getRadius()
		{
			return radius;
		}
		void setRadius(int radius)
		{
			this->radius = radius;
		}
		MyPoint getCenter()
		{
			return center;
		}
		void setCenter(MyPoint* center)
		{
			center->setXY(0, 0);
		}
		int getCenterX()
		{
			return center.getX();
		}
		void setCenterX(int x)
		{
			center.setX(x);
		}
		int getCenterY()
		{
			return center.getY();
		}
		void setCenterY(int y)
		{
			return center.setY(y);
		}
		int *getCenterXY()
		{
			return center.getXY();
		}
		void setCenterXY(int x, int y)
		{
			center.setXY(x, y);
		}
		string toString()
		{
			return "MyCircle[radius= " + to_string(radius) + ", center= " + center.toString() + ")";
		}
		double getArea()
		{
			return 3.14159 * pow(radius, 2.0);
		}
		double getCircumference()
		{
			return 2 * 3.14159 * radius;
		}
		double distance(MyCircle another)
		{
			another.getCenterX = pow(another.getCenterX() - this->getCenterX(), 2.0);
			another.getCenterY = pow(another.getCenterY() - this->getCenterY(), 2.0);
			return pow(another.getCenterX() + another.getCenterY(), 0.5);
		}
	};

	class MyTriangle
	{
	private:
		MyPoint v1;
		MyPoint v2;
		MyPoint v3;
	public:
		MyTriangle(int x1, int x2, int x3, int y1, int y2, int y3)
		{
			this->v1.setX(x1);
			this->v2.setX(x2);
			this->v3.setX(x3);			
			this->v1.setY(y1);
			this->v2.setY(y2);
			this->v3.setY(y3);
		}
		MyTriangle(MyPoint v1, MyPoint v2, MyPoint v3)
		{
			v1;
			v2;
			v3;
		}
		string toString()
		{
			return "MyTriangle[v1=(" + to_string(v1.getX()) + ", " + to_string(v1.getY()) + "), v2=(" + to_string(v2.getX()) + ", " + to_string(v2.getY()) + ")" + "), v3=(" + to_string(v3.getX()) + ", " + to_string(v3.getY()) + ")";
		}
		double getPerimeter()
		{
			return v1.distance() + v2.distance() + v3.distance();
		}
		string getType()
		{
			if ((v1.distance() == v2.distance()) == v3.distance())
			{
				return "Quardilateral";
			}
			else if (((v1.distance() == v2.distance()) != v3.distance()) || ((v1.distance() == v3.distance()) != v2.distance()) || ((v2.distance() == v3.distance()) != v1.distance()))
			{
				return "Isoceles";
			}
			else
			{
				return "Scalene";
			}
		}
	};
}

void FunctionThree()
{
	class Account
	{
	private:
		double balance;
	public:
		Account(double balance)
		{
			this->balance = balance;
		}
		Account()
		{
			this->balance = 0;
		}
		bool deposit(double atm)
		{
			return atm;
		}
		bool withdraw(double atm)
		{
			return atm;
		}
	};
	class Customer
	{
	private:
		string firstName;
		string lastName;
		Account account;
	public:
		Customer(string f, string l)
		{
			firstName = f;
			lastName = l;
		}
		Customer()
		{
			firstName = "";
			lastName = "";
		}
		string getFirstName()
		{
			return firstName;
		}
		string getLastName()
		{
			return lastName;
		}
		Account getAccount()
		{
			return account;
		}
		void setAccount(Account* acct)
		{
			acct->deposit(100);
		}
	};
	class Bank
	{
	private:
		Customer *customer = new Customer[];
		int numberOfCustomer;
		string bankName;
	public:
		Bank(string bName)
		{
			bankName = bName;
		}
		Bank()
		{}
		Customer AddCustomer(string f, string l)
		{
			Customer(f, l);
		}
		int getNumberOfCustomr()
		{
			return numberOfCustomer;
		}
		Customer getCustomer(int index)
		{
			return customer[index];
		}
	};
}

int main()
{
	system("PAUSE");
	return 0;
}
