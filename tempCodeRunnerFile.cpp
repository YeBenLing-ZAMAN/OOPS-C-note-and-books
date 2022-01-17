
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


#include <iostream>
using namespace std;
class ComplexNumber
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "a= " << a << endl
             << "b= " << b << endl;
    }
    friend ostream &operator<<(ostream &, ComplexNumber);
    friend istream &operator>>(istream &, ComplexNumber&);
};
ostream &operator<<(ostream &dout, ComplexNumber x)
{
    cout << x.a << showpos << x.b<<"i" <<endl;
    return (dout);
}

istream &operator>>(istream &din, ComplexNumber &x)
{
    cin >> x.a >> x.b;
    return (din);
}

int main()
{
    ComplexNumber c1;
    cout << " enter a compex number" << endl;
    cin >> c1; // operator<<(cout,c1);
    cout << "your complex number is" << endl;
    cout << c1;
}