#include <iostream>

using namespace std;

int tt = 1000;

int main() {

    // 指向指针的指针
    int i_1 = 15;
    int *pi = &i_1;
    int **ppi = &pi;
    int ***pppi = &ppi;
    int ****ppppi = &pppi;

    cout << "&i_1:" << &i_1 << endl;
    cout << "&pi:" << &pi << endl;
    cout << "&ppi:" << &ppi << endl;
    cout << "&pppi:" << &pppi << endl;
    cout << "&ppppi:" << &ppppi << endl;

    cout << "*pi:" << *pi << endl;
    cout << "*ppi:" << *ppi << endl;
    cout << "*pppi:" << *pppi << endl;
    cout << "*ppppi:" << *ppppi << endl;

    // &* 等价于 *& 等价于 &i 等价于 p
    cout << "pi:" << pi << endl;
    cout << "&*pi:" << &*pi << endl;
    cout << "*&pi:" << *&pi << endl;

    cout << "*&i_1:" << *&i_1 << endl;


    // 返回 i；i值 ++
    // *pi即a；等价于 i++
    cout << "(*pi)++:" << (*pi)++ << endl;

    // 返回i; pi的地址 ++
    // 等价于 *(pi++)
    cout << "*pi++:" << *pi++ << endl;
    cout << "*(pi++):" << *pi++ << endl;

    //
    cout << "pi:" << pi << endl;
//    cout << "*pi:" << *pi << endl;

    // 编译失败
//    cout << "&*i_1:" << &*i_1 << endl;

    int a, b;
    int *p1, *p2;
    a = 100;
    b = 200;
    p1 = &a;
    p2 = &b;
    int *p3 = &a;

    cout << "p1:" << p1 << endl;
    cout << "p2:" << p2 << endl;
    cout << "&p2:" << &p1 << endl;
    cout << "&p2:" << &p2 << endl;
    cout << "*p2++:" << *p2++ << endl;
    cout << "p2:" << p2 << endl;
    cout << "*p2:" << *p2 << endl;




    cout << endl;
}