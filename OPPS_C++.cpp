
// ===================================================
// lecture 1/ part -01
// introduction in c++
// 1.history
// 2.fasts
// 3.features of c++
// ---------------------------------------------------

// ===================================================
// lecture 1/ part -02
// introduction in c++
// comparison between c and c++
// ---------------------------------------------------
// c++ is a super set of c a language +

//  ===================================================
// lecture 1/ part -03
// introduction in c++
// what is object oriented peogramming
// ----------------------------------------------------

//  ===================================================
// lecture 1/ part -04
// introduction in c++
// classes and object
// ---------------------------------------------------

// ===================================================
// lecture 1/ part -05
// introduction in c++
// how to develop softwera in c++
// ---------------------------------------------------

//  ==================================================
// lecture-02/ part -01
// 1.constant
// 2.variable
// 3.keywoeds
// ---------------------------------------------------

// ----------
// constant 2 kind of
// # primary----->>
// 1.interger  (example)--> 23, -432 0, 4
// 2.real      (example)--> 3.4,-00.22,3.0
// 3.charactor  (example)--> 'a','A','+','2'

// ## secondary---->>
// 1.array
// 2.string       (example)-->"zaman khan"
// 3.pointer
// 4.union
// 5.structure
// 7.enumerator
// 8.class
//----------------------------------------------

// 2.variable
// variables are the names of memory location where er store data
// variable name is any combination of alphabet(a to z) and digit(0 to 9) and also use under score
// ----------------------------------------------------

// 3. keywords
// find it form internat or you can momorise
// ----------------------------------------------------

//  ===================================================
// lecture-02/ part -02
// data typs
// 1.constant
// 2.variable
// 3.keywoeds
// ----------------------------------------------------

// .int
// .char
// .float   (real)
// .double  (real)
// .void (it's has one more use in c++)

// ***** unlike C language , you can declare variabels even after action statements

//  ====================================================
// lecture-03/ part -01
// input and output in c++
// -----------------------------------------------------

// ** cout and cin is a predefinted object
// the operator << is called the insertion or out put to the operator
// the operator >> is called the extractioin or in put to the operator

//  **************======================================
// lecture-04/ part -01
// ****reference variable
// -----------------------------------------------------

// int x;
// int y=4;   // we know every variable has address

// int *P;
// p=&y;     // *p==y; // *p++ it's means that y=5 now;

// int &y=x;  // reference variable
// when i make that i most be insitalliton

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=100;
//     int &b=a;
//     int &c=b;
//     cout<<a<<" "<<b<<" "<<c<<endl;
//     b=200;
//     cout<<a<<" "<<b<<" "<<c<<endl;
//     c=300;
//     cout<<a<<" "<<b<<" "<<c<<endl;
// }
// ----------------------

// #include <iostream>
// using namespace std;
// void swap(int &x,int &y)
// {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

// int main()
// {
//     int a = 40, b = 50;
//     swap(a, b);
//     cout << "a=" << a << " b=" << b << endl;
// }

// ======================================================

// part - 01 samllar at the c programming

// #include <iostream>
// #include <string.h>
// using namespace std;

// struct book
// {
// 	int book_id;
// 	char book_name[20];
// 	int book_price;
// };

// int main()
// {
// 	struct book b1;
// 	// b1 = {1002432, "c++ book for all", 100};
// 	b1.book_id = 1002432;
// 	strcpy(b1.book_name, "c++ book for all");
// 	b1.book_price = 100;
// 	cout << "enter book id, book name, book price" << endl;
// 	// cin >> b1.book_id >> b1.book_name >> b1.book_price;
// 	cout << "book id is :" << b1.book_id << endl
// 		 << "book name is:" << b1.book_name << endl
// 		 << "book price is :" << b1.book_price << endl;
// }

// part - 02 struct with function c++

// #include <iostream>
// using namespace std;

// struct book
// {
// 	int book_id;
// 	char book_name[20];
// 	int book_price;
// };
// struct book input()
// {
// 	struct book b1;
// 	cout << "enter book id, book name, book price" << endl;
// 	cin >> b1.book_id >> b1.book_name >> b1.book_price;
// 	return b1;
// }

// void display(struct book b1)
// {
// 	cout << "book id is :" << b1.book_id << endl
// 		 << "book name is:" << b1.book_name << endl
// 		 << "book price is :" << b1.book_price << endl;
// }
// int main()
// {
// 	struct book b;
// 	b = input();
// 	display(b);
// }

// part - 03 it's call incaplation

// #include <iostream>
// using namespace std;

// struct book                      // this called incaplation
// {
// 	// member variable
// 	int book_id;
// 	char book_name[20];
// 	int book_price;

// 	// member function
// 	void input()
// 	{
// 		cout << "enter book id, book name, book price" << endl;
// 		cin >> book_id >> book_name >> book_price;
// 	}

// 	//member funtion
// 	void display()
// 	{
// 		cout << "book id is :" << book_id << endl
// 			 << "book name is:" << book_name << endl
// 			 << "book price is :" << book_price << endl;
// 	}
// };

// int main()
// {
// 	struct book b, b1;
// 	b.input();
// 	b.display();

// }

// part - 04 private and public :

// #include <iostream>
// #include <string.h>
// using namespace std;

// struct book // this called incaplation
// {
// 	// member variable
// private:
// 	int book_id;
// 	char book_name[20];
// 	int book_price;

// public:
// 	// member function
// 	void input()
// 	{
// 		cout << "enter book id, book name, book price" << endl;
// 		cin >> book_id >> book_name >> book_price;
// 		if (book_id < 0 || book_price < 0)
// 		{
// 			book_price = -book_price;
// 			book_id = -book_id;
// 		}
// 	}

// 	//member funtion
// 	void display()
// 	{
// 		cout << "book id is :" << book_id << endl
// 			 << "book name is :" << book_name << endl
// 			 << "book price is :" << book_price << endl;
// 	}
// };

// int main()
// {
// 	struct book b; // if i not use struct before book..... it doesnot matter. like this-->    book b;

// 	/*             //This is make problem.....
//     b.book_id = -121;
// 	strcpy(b.book_name," c++ book for all");
// 	b.book_price = -1031;
// 	*/

// 	b.input();
// 	b.display();
// }

// ----------------------------------------------------------------
// part - 05 class and object

// #include <iostream>
// using namespace std;

// struct complex  //-->> class complex
// {
// private:
// 	int a, b;

// public:
// 	void set_data(int x, int y)
// 	{
// 		a = x;
// 		b = y;
// 	}
// 	void show_data()
// 	{
// 		cout << "a = " << a << endl
// 			 << "b = " << b << endl;
// 	}
// };

// int main()
// {
// 	struct complex c1;   //-->> complex c1;
// 	c1.set_data(3, 5);
// 	c1.show_data();
// }
// ======================================================

// part - 06
// class and object....when i use out side the pubile function defaction :: : line number 340
// ----------------------------------------------------------

// #include <iostream>
// using namespace std;

// struct complex
// {
// private:
// 	int a, b;

// public:
// 	void set_data(int, int);
// 	void show_data()
// 	{
// 		cout << "a = " << a << endl
// 			 << "b = " << b << endl;
// 	}
// };

// void complex::set_data(int x, int y)
// {
// 	a = x;
// 	b = y;
// }

// int main()
// {
// 	struct complex c1;
// 	c1.set_data(3, 5);
// 	c1.show_data();
// }

// ==============================================
// part - 07
// ----------------------------------------------

// #include <iostream>
// using namespace std;

// struct complex
// {
// private:
// 	int a, b;

// public:
// 	void set_data(int x, int y)
// 	{
// 		a = x;
// 		b = y;
// 	}

// 	void show_data()
// 	{
// 		cout << "a = " << a << endl
// 			 << "b = " << b << endl;
// 	}

// 	struct complex add(complex c)
// 	{
// 		complex temp;
// 		temp.a = a + c.a;
// 		temp.b = b + c.b;
// 		return temp;
// 	}
// };

// int main()
// {
// 	struct complex c1, c2, c3;
// 	c1.set_data(3, 5);
// 	c2.set_data(15, 18);
// 	c3 = c1.add(c2); // who call add, it means thats c2 is already insert the calling function
// 	c3.show_data();
// }

// or

// #include <iostream>
// using namespace std;

// struct complex
// {
// private:
//     int a, b;

// public:
//     void set_data(int, int);

//     void show_data();

//     struct complex add(complex);

//    /* it's all constructor*/
// complex()
// {
//     cout << "hello Constructor  q" << endl;
// }
// };

// void complex::set_data(int x, int y)
// {
//     a = x;
//     b = y;
// }
// void complex::show_data()
// {
//     cout << "a = " << a << endl
//          << "b = " << b << endl;
// }
// struct complex complex::add(complex c) //if i don't use there struct it doesn't matter i can use there only---> complex
// {
//     complex temp;
//     temp.a = a + c.a;
//     temp.b = b + c.b;
//     return temp;
// }

// int main()
// {
//     complex c1, c2, c3;
//     c1.set_data(3, 5);
// 	// c1.show_data(); // for checking constructor
//     c2.set_data(5, 8);
// 	// c2.show_data(); // for checking constructor
//     c3 = c1.add(c2);
//     c3.show_data();
// }

// =====================================================
// part-08:
// -------------------------------------------------------

//class means it's all first data is private / by defult all data is private

// #include <iostream>
// using namespace std;

// class complex // class means .... untill not  i declear all of the varialbe is--->   private
// {
// 	int a, b;

// public:
// 	void set_data(int x, int y)
// 	{
// 		a = x;
// 		b = y;
// 	}

// 	void show_data()
// 	{
// 		cout << "a = " << a << endl
// 			 << "b = " << b << endl;
// 	}

// 	struct complex add(complex c) // i can write that without struct in here
// 	{
// 		complex temp;
// 		temp.a = a + c.a;
// 		temp.b = b + c.b;
// 		return temp;
// 	}
// 	complex()
// 	{
// 		cout << "Hello, i am Constructor" << endl;
// 	}
// };

// int main()
// {
// 	struct complex c1, c2, c3; // i can write that without struct in here
// 	c1.set_data(3, 5);
// 	c2.set_data(15, 28);
// 	c3 = c1.add(c2);
// 	c3.show_data();
// }
// =====================================================
// part-11:
// static member variable / class variable
// -----------------------------------------------------

// #include <iostream>
// using namespace std;

// class account // class means .... untill not  i declear all of the varialbe is--->   private
// {
// private:
//     int balance;
//     static float roi; //it's callled static member variable or class variable / with out call a object it occupy space of the memory

// public:
//     void setbalance(int b)
//     {
//         balance = b;
//     }
//     void setroi(float b)
//     {
//         roi = b;
//     }

//     void display()
//     {
//         cout << balance << endl;
//         cout << roi << endl;
//     }
// };
// float account::roi = 3.5; //  ei line difiend na korle memoery make hobe na  // must defind

// int main()
// {
//     account a1, a2;
//     a1.setbalance(3900);
//     a1.display();
//     a1.setroi(5.2);
//     a1.display();
// }

// ====================================================
// part-12:
// static funcition  /  class funcition
// ----------------------------------------------------

// #include <iostream>
// using namespace std;

// class account // class means .... untill not  i declear all of the varialbe is--->   private
// {
// private:
//     int balance;
//     static float roi; //it's callled static member variable or class funcition
// public:
//     void setbalance(int b)
//     {
//         balance = b;
//     }

//     void static setroi(float r) // static member funciton  // if you use like this you can call it without object
//     {                      //preposed of made is -->> some i have not any object but i need to change my static member variable value or data
//         roi = r;
//     }

//     void display()
//     {
//         cout << balance << endl;
//         cout << roi << endl;
//     }
// };
// float account::roi = 3.5f; // difined na korle ei memoery blockmake hobe na !!

// int main()
// {
//     account a1, a2;
//     a1.setbalance(3900);
//     account::setroi(4.5); // without object calling system.
//     //a1.setroi(4.5);      // it work when, i have a obect
//     a1.display();
// }

// ====================================================
// part-09
// Constructor
// ----------------------------------------------------

// thorem of constructer ..........
// 1.constructer is a member funcition of a class
// 2.the name of the constructer is "same as" the name if the class
// 3.it has no returns types, so can't use return keyword
// 4.it must be an instances member fuction, that is , it can never be staties

// how to call constructer .....

// 1. constructer is implicity when an object is created
// 2. constructer is used to slove problem of initization

// #include <iostream>
// using namespace std;

// class complex
// {
// private:
//     int a, b;

// public:
//     complex()
//     {
//         cout << "Hello, i am Constructor. i am made, when onject defined "<< endl;
//     }
// };

// int main()
// {
//     complex c1, c2, c3;
// }

// ==========================================================
// part-10
// costructor
// ----------------------------------------------------------

// ->default constructor
// ->constructor Overloading
// ->parameterized constructor

// #include <iostream>
// using namespace std;

// class complex
// {
// private:
// 	int a, b;

// public:
// 	complex(int x, int y) // parameterized constructor
// 	{
// 		a = x;
// 		b = y;
// 		cout<<"parameterized constructor -01"<<endl;
// 	}
// 	complex(int x) // parameterized constructor
// 	{
// 		a = x;
// 		cout<<"parameterized constructor -02"<<endl;
// 	}
// 	complex() // paramaterized constructor
// 	{
// 		a = 0;
// 		b = 0;
// 		cout<<"parameterized constructor -03"<<endl;
// 	}

// 	// if i can't declear any constructor complaior made a defult constructor
// 	//defult constructor
// 	/*complex(){}*/

// 	void display() //
// 	{
// 		cout << a << endl
// 			 << b << endl;
// 	}
// };

// int main()
// {
// 	// complex c1(3,4),c2(8),c3;
// 	complex c1=complex(3,4),c2=complex(8),c3=complex();
// 	// complex c2=3;
// 	// complex c6(3,4);
// 	// complex c6;
// 	c1.display();
// }

// part--11
//Destructor :  ~
// -------------------------

// 1.destructor is an intasce member funciton of a class
// 2.the name is the destructor is same as the name of a class but precded by tilde(~)symbol
// 3.destructor can never be static
// 4.desturctor has no return types
// 5.sestructor takes no argument(no overlading is possible )

// and it is invoked implicity when object is going to destroy

// why destructor --->>
// it should be defined to release resources allocated to an object.
// we remove or release the pointer object memoney at the last stages of the program. it means the destructor stages

// #include <iostream>
// using namespace std;

// class complex
// {
// private:
//     int a, b;

// public:
//     ~complex()
//     {
//         cout<<"this is destructor"<<endl;
//     }
// }
// fun(){
//     complex obj;
// }

// int
// main()
// {
//     fun();
//     getchar();
// }

// -----------------------------------------------------------------------------------------------
// ### operator ###
// .any symbol can be used as funcition name
// --- 1. if is a vaild operator in c language
// --- 2. if it is preceded by operator keyword
// .you can not overload "sizeof" and "?:" operator

// in binary operator::: caller object is alaways in the left
// =======================================================
// lecture - 11 / part - 01 -- >> operator overloading
// -------------------------------------------------------

// #include <iostream>
// using namespace std;

// class complex
// {
// private:
//     int a, b;
// public:
//     void setdata(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void showdata()
//     {
//         cout << a << endl
//              << b << endl;
//     }
//     // complex add(complex c)
//     // {
//     //     complex temp;
//     //     temp.a = a + c.a;
//     //     temp.b = b + c.b;
//     //     return (temp);
//     //}

//     // i can change there the "add"

// complex operator+(complex c)
// {
//     complex temp;
//     temp.a = a + c.a;
//     temp.b = b + c.b;
//     return (temp);
// }
// };

// int main()
// {
//     complex c1, c2, c3;
//     c1.setdata(3, 4);
//     c2.setdata(15, 61);
//     //c3 = c1.add(c2);
//     // if i use the operator  function  in there than i write it in here ...like this

//     c3 = c1 + c2;              //c3 = c1.opreator + (c2);
//     c3.showdata();
// }

// ==============================================================
// lecture 11/ part -02
// unary operator overloading ......
// ---------------------------------------------------------------
//in unary operator::: caller object depand it's own chartersiters

// #include <iostream>
// using namespace std;

// class complex
// {
// private:
//     int a, b;

// public:
//     void setdata(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void showdata()
//     {
//         cout << a << endl
//              << b << endl;
//     }
// complex operator-()
// {
//     complex temp;
//     temp.a = -a;
//     temp.b = -b;

//     return temp;
// }
// };

// int main()
// {
//     complex c1, c2;
//     c1.setdata(3, 4);
//     // both are usefull but most of people or time use the first one
//     // c2 = -c1;
//     c2 = c1.operator-();
//     c2.showdata();
// }

// =====================================================================
// lecture 11/ part -03
// unary operator overloading ...... incremint operator overloading  ++(pre and post)
// ---------------------------------------------------------------------

// #include <iostream>
// using namespace std;
// class integer
// {
// private:
//     int x;

// public:
//     void setdata(int a)
//     {
//         x = a;
//     }
//     void showdata()
//     {
//         cout << "x= " << x << endl;
//     }
//     integer operator++() // pre increment
//     {
//         integer temp;
//         temp.x = ++x;
//         return temp;
//     }
//     // compliar can understand which one is pre and post increment by saw the inside of --->    "int"
//     // it's called operator overloading

//     integer operator++(int) // post increment  // must be int insert 
//     {
//         integer temp;
//         temp.x = x++;
//         return temp;
//     }
// };

// int main()
// {
//     // pre- increment 
//     integer a1,a2;
//     cout<<"pre incrment"<<endl;
//     a1.setdata(7);
//     a1.showdata();
//     //a2=++a1; //pre increment  // a2=a1.operator++();
//     a2=a1.operator++();
//     a2.showdata();
//     a1.showdata();


//     // post increment
//     integer c1, c2;
//     cout<<"post increment"<<endl;
//     c1.setdata(3);
//     c1.showdata();
//     // c2 = c1++; // post increment
//     c2.showdata();
//     c1.showdata();
// }

// ========================================================
// lecture 12/ part -01
// friend funcition
// --------------------------------------------------------

// 1. firend funcition is not a member funcition of a class to which it is a friend
// 2. firend funcition is declared in the class with firend keyword
// 3. it must be defined outside the class to which it is firend
// 4. firend funcition can access any number if the class to which it is friend
// 5. firend function cannot access members of the class derectly
// 6. it has no caller object
// 8. it should not be defined with menbership label.
// ------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;
// class complex
// {
// private:
//     int a, b;

// public:
//     void setdata(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void showdata()
//     {
//         cout << a << endl
//              << b << endl;
//     }
//     friend void fun(complex); // decleared in class as a friend funcition
// };

// void fun(complex c) // defined friend funcition out side of the class
// {
//     cout << "sum is " << c.a + c.b << endl;

//     /* in here frined funcition is break the security 
//      or privacy of the class. think about this topices*/

// }

// int main()
// {
//     complex c1, c2;
//     c1.setdata(4, 3);
//     fun(c1);
//     c1.showdata();
// }

// ==============================================
// lecture 12/ part -02
// friend funcition
// ----------------------------------------------
// 1. friend funition can become friend more than one class
// 2. it doesnot matter where(private or pubilc) i declear this friend funcition

// #include <iostream>
// using namespace std;
// class B;
// class A
// {
// private:
//     int a;

// public:
//     friend void fun(A,B);
// };
// class B
// {
// private:
//     int b;

// public:
//     friend void fun(A,B);
// };

// void fun(A x, B y)
// {
//     cout<< "the sum is "<< x.a+y.b<<endl;   // nice of this line here it can aecess the two class at a same time
// }

// int  main()
// {
//     A obj1;
//     B obj2;
//     fun(obj1,obj2);
// }

// ============================================
// lecture 12/ part -03
// friend funcition
// overloading of operator as a friend function
// --------------------------------------------

// #include <iostream>
// using namespace std;

// class complex
// {
// private:
//     int a, b;

// public:
//     void setdata(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void showdata()
//     {
//         cout << "a= " << a << endl
//              << "b= " << b << endl;
//     }
//     // follow the line: 597

//     friend complex operator+(complex, complex);
// };

// complex operator+(complex x, complex y)
// {
//     complex temp;
//     temp.a = x.a + y.a;
//     temp.b = x.b + y.b;
//     return (temp);
// }
// int main()
// {
//     complex c1, c2, c3;
//     c1.setdata(3, 4);
//     c2.setdata(5, 6);
//     c3 = c1 + c2;       // it's means that: c3=operator+(c1,c2);
//     c3.showdata();
// }

// =================================================
// lecture 12/ part -04
// friend funcition
// overloading of unary operator as a friend function
// --------------------------------------------------

// #include <iostream>
// using namespace std;
// class complex
// {
// private:
//     int a, b;
// public:
//     void setdata(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void showdata()
//     {
//         cout << "a= " << a << endl
//              << "b= " << b << endl;
//     }
//     friend complex operator-(complex);
// };
// complex operator-(complex x)
// {
//     complex temp;
//     temp.a = -x.a;
//     temp.b = -x.b;
//     return temp;
// }

// int main()
// {
//     complex c1, c2;
//     c1.setdata(3, 4);
//     c1.showdata();
//     c2 = -c1; // it's means that: c2=opeerator-(c1);
//     c2.showdata();
// }

// ===============================
// lecture 12/ part -05
// friend funcition
// overloading of insertion and extraction function
// -------------------------------------------------

// #include <iostream>
// using namespace std;
// class complex
// {
// private:
//     int a, b;

// public:
//     void setdata(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void showdata()
//     {
//         cout << "a= " << a << endl
//              << "b= " << b << endl;
//     }
//     friend ostream &operator<<(ostream &, complex);
//     friend istream &operator>>(istream &, complex&);
// };
// ostream &operator<<(ostream &dout, complex x)
// {
//     cout << x.a << showpos << x.b<<"i" <<endl;
//     return (dout);
// }

// istream &operator>>(istream &din, complex &x)
// {
//     cin >> x.a >> x.b;
//     return (din);
// }

// int main()
// {
//     complex c1;
//     cout << " enter a compex number" << endl;
//     cin >> c1; // operator<<(cout,c1);
//     cout << "your complex number is" << endl;
//     cout << c1;
// }

// ===================================================
// lecture 12/ part -06
// friend funcition
// overloading of insertion and extraction function
// ---------------------------------------------------

// 1.member function of one class can become a friend cnother class

// #include <iostream>
// class A
// {
// private:
//     int a, b;

// public:
//     void funciton()
//     {
//         .........;
//     }
//     void function2()
//     {
//         ...................;
//     }
// };

// class B
// {
// private:
//     int c, d;

// public:
//     // declear " all " by using one styles :
//     firend class A;
//     // declear " one " by one styles :
//     friend void A ::function();
//     frined void A ::function2();
// };

// int main()
// {
//     ..............;
// }
// ===============================================
// lecture 13/ part -01
// inharitence
// introduction and syntx
// -----------------------------------------------

// 1.it is a pricess of inheriting properties and behaviours of existing class into a new class
// 2.Existing class = old class = base class
// 3.new class = child class = derived class
// syntax
// --------------------

// class car /*Existing class = old class = base class*/
// {
//     ---------
//     --------
// };
// /*       child  : visibiltiy_Mode Base*/
// class sportscar : pubile car
// {
//     == == == ==
//         == == ==
//         =
//             == ==
// };

// ===============================================
// lecture 13/ part -02
// inharitence
// lecture: type of inhritance
// -----------------------------------------------

// 5 type of inhritance:::

// 1.single inhritance
// 2.multilevel inhritance
// 3.multipul inhritance
// 4.hierarchical inhritance
// 5.hybrid inhritance

// #single inhritance
// class A
// {
// };
// class B : public A
// {
// };

// 2.multilevel inhritance:
//class A
// {
// };
// class B : public A
// {
// };
// class C : pubilc B
// {
// };

// # multipul inhritance
// class A
// {
// };
// class B
// {
// };
// class C : public A, public B
// {
// };

// # hierarchical inhritance
// **** more use full
// class A
// {
// };
// class B1 : public A
// {
// };
// class B2 : public A
// {
// };

// #hybrid inhritance
//  ** a learge thing
//  ** it can use more inheritance in one time



// visibiltiy Modes
// ----------------------

// #include <iostream>
// using namespace std;
// class A
// {
// private:
//     int a;
// protected:
//     void setvalue1 (int x)
//     {
//         a = x;
//     }
// public:
//     void setvalue(int x)
//     {
//         a = x;
//     }

//     void showvalue()
//     {
//         cout << a << endl;
//     }
// };

// class B : public A
// {
// private:
//     int b;
// public:
//     void setdata(int x)
//     {
//         setvalue1(x);
//     }
// };
// class C: public B
// {
// 	private:
// 	int x;
// 	public:
// 	void display()
// 	{
// 		cout<<"x= "<<x;
// 	}
// };

// int main()
// {
//     // A k;
//     // k.setvalue1(4);
//     // k.showvalue();
//     B j;
//     j.setdata(34);
//     j.showvalue();
//     // cout<<sizeof(j);
// //     // j.setvalue(4);
// }

// ==================================================
// lecture 13/ part -03
// inharitence
// lecture: inhritance
// --------------------------------------------------

// ==================================================
// lecture 14/ part -01
// inharitence
// lecture: construtor and destructor in inheritancce
// --------------------------------------------------

//  ##construtor
//  --------------
//  call order----
//  from child to preant

//  execute order
//  ----------------
//  from preant to child

// C++ program to show the order of constructor call
// in single inheritance
// C++ program to show the order of constructor call
// in single inheritance

// #include <iostream>
// using namespace std;

// // base class
// class Parent
// {
// 	public:

// 	// base class constructor
// 	Parent()
// 	{
// 		cout << "Inside base class" << endl;
// 	}
// };

// // sub class
// class Child : public Parent
// {
// 	public:

// 	//sub class constructor
// 	Child()
// 	{
// 		cout << "Inside sub class" << endl;
// 	}
// };

// // main function
// int main() {

// 	// creating object of sub class
// 	Child obj;

// 	return 0;
// }

// ------------

// #include <iostream>
// using namespace std;
// class A
// {
// 	int a;

// public:
// 	A(int k)
// 	{
// 		a = k;
// 	}
// };

// class B
// {
// 	int b;

// public:
// 	B(int x, int y): A(x)
// 	{
// 		b = y;
// 	}
// };
// int main()
// {
// 	B obj1(2,4);
// }
// --------------

//  ##destrutor
//  --------------
//  call order----
//  from child to preant

//  execute order
//  ----------------
//  from child to preant

// C++ program to demonstrate
// what is happed with construtor
// ------------------------------

// C++ program to demonstrate
// what is happed with destrutor
// ------------------------------

// =================================================
// lecture 15/ part -01
// this is pointer
// lecture: new interester things
// --------------------------------------------------

// =================================================
// lecture 15/ part -01
// object pointer and this pointer
// --------------------------------------------------

// object pointer :
// -----------------
// #include <iostream>
// using namespace std;
// class Box
// {
// private:
// 	int l, b, w;

// public:
// 	void setDimension(int x, int y, int z)
// 	{
// 		l = x;
// 		b = y;
// 		w = z;
// 	}
// 	void showDimension()
// 	{
// 		cout << "\n l= " << l << "\n b= " << b << "\n w= " << w << endl;
// 	}
// };

// int main()
// {
// 	Box smalllbox;
// 	// smalllbox.setDimension(12, 10, 5);
// 	// smalllbox.showDimension();

// 	Box *p;
// 	p=&smalllbox;
// 	p->setDimension(15,18,8);
// 	p->showDimension();
// }

// this pointer :
// --------------

// .  this is a local object in every instance member function
//    containing address of the caller object.

// .  this pointer can not be modify

// .  ut is used to refer aller object in member function#include <iostream>
// -------------
// #include<iostream>
// using namespace std;
// class Box
// {
// private:
// 	int l, b, w;

// public:
// 	void setDimension(int l, int b, int w)
// 	{
// 		// this pionter
// 		this->l = l;
// 		this->b = b;
// 		this->w = w;
// 	}
// 	void showDimension()
// 	{
// 		cout << "\n l= " << l << "\n b= " << b << "\n w= " << w << endl;
// 	}
// };

// int main()
// {
// 	Box smalllbox;
// 	smalllbox.setDimension(12, 10, 5);
// 	smalllbox.showDimension();
// }

// =================================================
// lecture 16/ part -01
// new and delete
// --------------------------------------------------

// new
// -------
// int *p= new int;
// int *q= new float;
// int x; cin>>x;
// int *k= new int[x];
// complex *ptr = new cmmplex;

// delete
// ---------
// delete p;
// delete []k;  // it a array

// =================================================
// lecture 17/ part -01
// Method Overriding
// Method Overloading
// Method Hiding
// .early binding
// --------------------------------------------------

// class A
// {
// private:
//     void f1()
//     {
//     }
//     void f2()
//     {
//     }

// public:
// };
// class B : pubile A
// {
// private:
// public:
//     void f1() // Method Overriding   it parent and child every thing id same
//     {
//     }
//     void f2(int x) //Method Hiding    it parent and child argument is not same
//     {
//     }

//     void f3()
//     {
//     }
//     void f3(int x) //Method Overloading // f3 arrgument is defferenec
//     {
//     }
// }; int main()
// {
//     B obj;
//     obj.f1(); // cholbe   class B
//     obj.f2(); // error    becasue same name in child function in there, so that it don't go parent functions
//     obj.f2(5);// cholbe   class b

// }

// =================================================
// lecture 18/ part -01
// Virtual Function
// --------------------------------------------------

// . Base class pointer
// . "parent" class pointer can print to the object of
//   his all child class child class (descendant class)--------------new rule of c++

// . But its converse is not true

// class A
// {
// private:
//     virtual void f1()
//     {
//     }
//     void f2()
//     {
//     }

// public:
// };
// class B : pubile A
// {
// private:
// public:
//     void f1() // Method Overriding   it parent and child every thing id same
//     {
//     }
//     void f2(int x) //Method Hiding    it parent and child argument is not same
//     {
//     }

//     void f3()
//     {
//     }
//     void f3(int x) //Method Overloading // f3 arrgument is defferenec
//     {
//     }
// };
// int main()
// {
//     A *p,obj1;
//     B Obj2;
//     Obj2.f1();  //B   (child)    ami cai je updata ta cholok

//     p=&Obj2;
//     p->f1();    //A   (parent)    keno-->ekhane "p" holo A class er , so it a problem

//                 //to solve this problem decleaer "virtual" it this parant class.
// }

// =================================================
// lecture 18/ part -02
// Virtual Function
// how to work in details
// --------------------------------------------------

//  watch video again and again for better understand

// =================================================
// lecture 19
// Abstract class
// --------------------------------------------------
// #pure virtual function
// . a do nothing function is pure virtual functinon

// . A class containing pure virtual function is an ""abstract"" class
// . we can not instantiate abstract class

// #include <iostream>
// using namespace std;

// // An abstract class with constructor
// class Base
// {
// protected:
//     int x;

// public:
//     virtual void fun() = 0;    // do nothing function  // or pure virtual function
//     Base(int i)
//     {
//         x = i;
//     }
// };

// class Derived : public Base
// {
//     int y;

// public:
//     Derived(int i, int j) : Base(i)
//     {
//         y = j;
//     }
//     void fun()
//     {
//         cout << "x = " << x << ", y = " << y;  //youn must be override
//     }
// };

// int main(void)
// {
//     Derived d(40, 50);
//     d.fun();
//     return 0;
// }

// =================================================
// lecture 19
// Template
// function tamplate  (funcyion template is also known as generic function)
// class template
// --------------------------------------------------

// .the keyword template is used to define function
//  template and class template
// .it is a way to make your function or class generalizer
//  as far as data type is concern.
// -------------------------------
// ####function template
// --------------------------------
// #include <iostream>
// using namespace std;

// // this is a problem i have to used to function overloading,
// //  to slove this problem we must be use template concept

// int big(int x, int y)
// {
//     if (x > y)
//         return x;
//     else
//         return y;
// }
// float big(float x, float y)
// {
//     if (x > y)
//         return x;
//     else
//         return y;
// }

// int main()
// {
//     cout << (4, 5) << endl;
//     cout << (4.5, 5.532) << endl;
// }

// -----------------------------
// #include <iostream>
// using namespace std;

// template <class X>    // (to need from main function "X" can be change int or float )
// X big(X x, X y)
// {
//     if (x > y)
//         return x;
//     else
//         return y;
// }

// int main()
// {
//     cout << (4, 5) << endl;
//     cout << (4.5, 5.532) << endl;
// }

// ------------------------------

// #include <iostream>
// using namespace std;

// template <class X, class Y>    // (for need function "X" can be change int or float )
// Y big(X x, Y y)
// {
//     if (x > y)
//         return x;
//     else
//         return y;
// }

// int main()
// {
//     cout << big(4, 5.2562) << endl;
//     cout << big(3.5, 1) << endl;
// }

// -------------------------------
// #### class template
//
// --------------------------------

// #include <iostream>
// using namespace std;
// template <class X>
// class ArrayList
// {
// private:
//     struct ContorlBlock
//     {
//         int capacity;
//         X *arr_ptr;
//     };
//     struct ContorlBlock *s; // to the point the ContorBlock

// public:
//     ArrayList(int capacity) // constructor
//     {
//         s = new ContorlBlock; // to create the block
//         s->capacity = capacity;
//         s->arr_ptr = new X(s->capacity); // to create the array block
//     }
//     void addElement(int index, X data)
//     {
//         if (index >= 0 && index <= s->capacity - 1)
//             s->arr_ptr[index] = data;
//         else
//             cout << "Array index is not available" << endl;
//     }
//     void viewelement(int index, X &data)
//     {
//         if (index >= 0 && index <= s->capacity - 1)
//             data = s->arr_ptr[index];
//         else
//             cout << "Array is not available" << endl;
//     }
//     void viewlist()
//     {
//         int i;
//         for (i = 0; i <= s->capacity - 1; i++)
//         {
//             cout << " " << s->arr_ptr[i];
//         }
//     }
// };

// int main()
// {
//     int data;
//     ArrayList<int> obj1(5);
//     obj1.addElement(0, 32);
//     obj1.addElement(1, 23);
//     obj1.addElement(2, 48);
//     // obj1.viewelement(3,data);
//     //cout<<data;
//     obj1.viewlist();
// }

// =================================================
// lecture 20
// file heanding with c++
// writting
// --------------------------------------------------

// #include<fstream>   // fsteram, instream, and ...............declear
// using namespace std;
// int main()
// {
//     ofstream fout;                         // ofstream holo class ar fout file out er ekta object
//     fout.open("myfile.dat");               // i also can use all path of my file location
//     fout<<"hello"<<endl;
//     getchar();
//     fout<<"this is zaman"<<endl;
//     getchar();
//     fout<<"this the file headling"<<endl;
// }

// =================================================
// lecture 20
// file heanding with c++
// reading
// --------------------------------------------------

// #include <fstream>
// #include <iostream>
// using namespace std;
// int main()
// {
//     fstream fin;
//     char ch;
//     fin.open("myfile.dat");
//     // fin>>ch;
//     ch = fin.get();
//     while (!fin.eof())
//     {
//         cout << ch;
//         // fin>>ch;
//         ch = fin.get();
//     }
// }

// =================================================
// lecture 21
// file heanding with c++
// opening mode
// -------------------------------------------------
//

//iso:: in      -->input/reading mode  (deafult mode) (it's clear all the file before it open)
//iso:: out     -->output/write mode   (deafult mode) (it's clear all the file before it open)
// iso::app     -->append mode
// iso::ate     -->update mode
// iso::binary  -->binary mode
// iso::app: iso :: binary: iso::in

// #include <fstream>
// #include <iostream>
// using namespace std;
// int main()
// {
//     ofstream fout;
//     fout.open("myfile.dat", iso::out); // harddisk file to RAM file for the woeking
//     fout<<"my name is \n zaman"<<endl; // it depand on (open mode) binary mode ot text mode(line change)
// }

// =================================================
// lecture 21
// file heanding with c++
// tellg()   and    tellp()
// ------------------------------------------------

// tellg()
// ---------
// .defined is idtream class
// .it's prototype __is_identifier
// --->   streampos tellg();
// returns the postin of the current character in the input stream

// tellp()
// ---------
// .defined is idtream class
// .it's prototype __is_identifier
// --->   streampos tellp();
// returns the postin of the current character in the output stream

// #include <iostream>
// #include <fstream>
// #include <conio.h>
// using namespace std;
// int main()
// {
//     ifstream fin;
//     char ch;
//     fin.open("myfile.dat");
//     int postion;
//     postion=fin.tellg();
//     cout<<postion;
//     fin>>ch;
//     postion=fin.tellg();
//     cout<<postion;
//     fin>>ch;
//     postion=fin.tellg();
//     cout<<postion;
// }

// =================================================
// lecture 22
// Initializers
// -------------------------------------------------

// Initializers list must be used
// --for initialization of non-static const data members
// --for initialization of reference members

// #include<iostream>
// using namespace std;
// class Dummy
// {
//     private:
//     int a, b;
//     const int x;    // const
//     public:
//     int &x;
//     Dummy():x(8)  //Initializers
//     {}

//     // Dummy()
//     // {
//     //     a=5;
//     // }
// };

// void fun()
// {
//     const int k=3;
//     k++;   // shoule be error
// }

// #include<iostream>
// using namespace std;
// class Dummy
// {
//     private:
//     int a, b;
//     const int x;
//     int &y;                  // reference
//     public:
//     Dummy(int &n):x(8),y(n)  //Initializers
//     {
//         a=2;b=23;
//     }
// };

// int main()
// {
//     int m=9;
//     Dummy d1(m);
// }

// =================================================
// lecture 23
// Deep Copy and Shallow Copy
// part --01(shallow copy)
// -------------------------------------------------

// create a copy object::
// --- Copy constructor
// --- Defult assignment operator/ implicit operator

// #include <iostream>
// using namespace std;
// class Dummy
// {
// private:
//     int a, b;

// public:
//     void setdata(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void showdata()
//     {
//         cout << "\na = " << a << "\nb = " << b;
//     }
// };
// int main()
// {
//     Dummy d1;
//     d1.setdata(3, 4);
//     // copy in here one object to another object

//     Dummy d2 = d1;  //Copy constructor with shellow copy

//     Dummy d3;
//     d3 = d2;       //Defult assignment operator/ implicit operator

//     d2.showdata();
//     d3.showdata();
// }

// =================================================
// lecture 23
// Deep Copy and Shallow Copy
// part --02(Deep  copy)
// -------------------------------------------------

// #include <iostream>
// using namespace std;
// class Dummy
// {
// private:
//     int a, b;
//     int *p;

// public:
//     Dummy()
//     {
//         p = new int;
//     }
//     void setdata(int x, int y, int z)
//     {
//         a = x;
//         b = y;
//         *p = z;
//     }
//     void showdata()
//     {
//         cout << "\na = " << a << "\nb = " << b;
//     }
//     Dummy(Dummy &d)
//     {
//         a = d.a;
//         b = d.b;
//         *p = *(d.p);
//     }
//     ~Dummy()
//     {
//         delete p;
//     }
// };
// int main()
// {
//     Dummy d1;
//     d1.setdata(3, 4, 5);
//     // copy in here one object to another object

//     Dummy d2 = d1; //Copy constructor with deep copy

//     d2.showdata();
// }

// =================================================
// lecture 24
// Type Conversion Primitivey
// part -01
// -------------------------------------------------

// primitive type to primitive type comverstion

// int x=4;
// float y;
// y=x; // automatic type conversion  // memoery lose hobe

// float y=5.4;
// int x;
// x=y; // automatic type conversion // data lose hobe

//  ##primitive type to class

//  complex c1;
//  int x=9;
//  c1=x // error

// ###class type to primitive type

// complex c1;
// c1.setdata(3,5);
// int x;
// x=c1; // error

// ###class to another class type

// =================================================
// lecture 24
// Type Conversion Primitivey
// part -02
// -------------------------------------------------

// ##primitive type to class

// #include <iostream>
// using namespace std;
// class complex
// {
//     int a, b;
// public:
//     complex() {}  // defult constructure
//     complex(int k)
//     {
//         a = k;
//         b = 0;
//     }
//     void detData(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void showdata()
//     {
//         cout << "\na= " << a << "\nb= " << b;
//     }
// };

// int
// main()
// {
//     complex c1;
//     int x = 9;
//     c1 = x; // it's means ---> c1.complex(x);
//     c1.showdata();
// }

// =================================================
// lecture 25
// Type Conversion Primitivey
// part -03
// -------------------------------------------------

// ###class type to primitive type
//---- costing operator
// operator type()
//{
//     return(type-data);
// }

// #include <iostream>
// using namespace std;
// class complex
// {
//     int a, b;

// public:
//     operator int()   //---- costing operator
//     {
//         return a;
//     }
//     void setdata(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void showdata()
//     {
//         cout << "\na =" << a << "\nb =" << b << endl;
//     }

// };

// int main()
// {
//     complex c1;
//     c1.setdata(3, 4);
//     c1.showdata();
//     int x;
//     x = c1;  // it's means ---->.c1.operator int()
//     cout << x << endl;
// }

// =================================================
// lecture 26
// Type Conversion Primitivey or class
// part -03 (it so complicated)
// -------------------------------------------------

// ###class type to another class type

// #include <iostream>
// using namespace std;

// class product
// {
//     int m, n;

// public:
//     void setdata(int x, int y)
//     {
//         m = x;
//         n = y;
//     }
//     int getM()
//     {
//         return m;
//     }
//     int getN()
//     {
//         return n;
//     }
// };

// class Item
// {
//     int a, b;

// public:
//     Item() {}
//     Item(product p)
//     {
//         a = p.getM();
//         b = p.getN();
//     }
//     void showdata()
//     {
//         cout << "\na= " << a << "\nb= " << b << endl;
//     }
// };

// int main()
// {
//     Item i1;
//     product p1;
//     p1.setdata(3, 4);
//     // make a constructor who is left. so, in here  i1
//     i1 = p1;
//     i1.showdata();
// }

// =================================================
// lecture 27
// Exception Handling
// part -01 (try throw and catch)
// -------------------------------------------------

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 3;

//     try
//     {

//         if (a == 1)
//             throw a; //throwing integer exception

//         else if (a == 2)
//             throw 'A'; //throwing character exception

//         else if (a == 3)
//             throw 4.5; //throwing float exception
//     }
//     catch (int a)
//     {
//         cout << "\nInteger exception caught.";
//     }
//     catch (char ch)
//     {
//         cout << "\nCharacter exception caught.";
//     }
//     catch (double d)
//     {
//         cout << "\nDouble exception caught.";
//     }

//     cout << "\nEnd of program.";
// }

// =================================================
// lecture 27
// Exception Handling
// part -02 (try throw and catch) modifiy part
// -------------------------------------------------

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 3;

//     try
//     {

//         if (a == 1)
//             throw a; //throwing integer exception

//         else if (a == 2)
//             throw 'A'; //throwing character exception

//         else if (a == 3)
//             throw 4.5; //throwing float exception
//     }
//     catch (...)
//     {
//         cout << "\nException occur.";
//     }

//     cout << "\nEnd of program.";
// }

// #include <iostream>
// using namespace std;
// void fun()
// {
//     throw 10;
// }

// int main()
// {
//     int i = 3;
//     cout << "welcome" << endl;
//     try
//     {
//         if (i == 3)
//             fun();
//         cout << "in try" << endl;
//     }
//     catch (...)
//     {
//         cout << "Exception no:" << endl;
//     }
//     cout << "Last line" << endl;
// }

// =================================================
// lecture 28
// Dynamic Constrictor
// -------------------------------------------------

// what is constructor?
// why use constructor?

// dynamic constructor
// .Constructr can allocate dynamically created memory to the object
// .thus,object is going to use memory region, which is dynamically created by constructor

// #include <iostream>
// using namespace std;

// class A
// {
//     int a, b;
//     int *p;

// public:
//     A()
//     {
//         a = 0;
//         b = 0;
//         p = new int;
//         *p = 0;
//     }

//     A(int x, int y) // normal constructor
//     {
//         a = x;
//         b = y;
//     }

//     A(int x, int y, int z) // Dynamic constructor
//     {
//         a = x;
//         b = y;
//         p = new int;
//         *p = z;
//     }
// };

// int main()
// {
//     A obj1, obj2, obj3(3, 5), obj4(4, 6, 2);
// }

// =================================================
// lecture 29 part-01
// namespace
// -------------------------------------------------
// header file ---->> decleraing
// libaray file --->> difination

// =================================================
// lecture 29 part-02
// namespace
// -------------------------------------------------
