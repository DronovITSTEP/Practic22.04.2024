#include <iostream>
#include "Date.h"
#include "Array.h"

using namespace std;

class Test {
public:
    static int num1;
    char c1;
    static int count;

    Test() {
        count++;
    }
    void show() {
        cout << num1 << " " << c1  << " "<< count << endl;
    }

    static void print() {
        cout << num1 << " " << count << endl;
    }
    void setC(char c1) {
        this->c1 = c1;
    }
};

int Test::num1 = 0;
int Test::count = 0;

int main()
{
    /*Test t_object1;
    t_object1.num1 = 3;
    t_object1.c1 = 'r';
    t_object1.show();

    Test t_object2;
    t_object2.num1 = 9;
    t_object2.c1 = 'm';
    t_object2.show();
    t_object2.print();
    t_object1.show();

    Test::num1 = 34;
    t_object2.show();
    cout << Test::count << endl;
    Test::print();*/

    /*Date date;
    date.setDay(15);
    date.setMonth(2);
    date.setYear(2024);
    date.print();

    date.setDay(15).setMonth(2).setYear(2024).print();*/

    //Fraction fract(5, 15);
    //fract.print();
    //Fraction fract2(fract);
    ////fract.denominator = 47;
    //fract2.print();
    //fract.arr[2] = 100;
    //fract2.print();

    Array arr(5);
    arr.initArray().printArray();
    arr.setSize(7).printArray();

    Array arr2(arr);
    arr2.printArray();
    arr2.setSize(4).printArray();
    arr2.sortArray().printArray();
    cout << arr2.minArray() << " " << arr2.maxArray() << endl;
    cout << arr.minArray() << " " << arr.maxArray() << endl;

    if (arr.editArray(2, 16)) cout << "Ok\n";
    else cout << " not Ok\n";

    if (arr2.editArray(5, 13)) cout << "Ok\n";
    else cout << " not Ok\n";

    arr.printArray();
    arr2.printArray();
}
