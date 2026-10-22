#include <iostream>
using namespace std;
class First
{

public:
    int a;
    First(int a1)
    {
        a = a1;
        cout << "Constructor in First Class" << endl;
    }
};
class Second
{

public:
    int b;

    Second(int b1)
    {
        b = b1;
        cout << "Constructor in Second Class" << endl;
    }
};
class Third : public First, public Second
{
    int c;

public:
    Third(int p, int q, int r) : First(a),Second(b)
    {
        c=r;
        cout<<"Constructor In Third Class "<<endl;
    }
    void putdata()
    {
        cout<<"Value of a ="<<a<<endl;
        cout<<"Value of b ="<<b<<endl;
        cout<<"Value of c ="<<c<<endl;
    }
};
int main()
{
    Third t1(10,20,30);
    t1.putdata();
    return 0;
}