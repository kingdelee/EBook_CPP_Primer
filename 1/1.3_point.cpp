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

    cout << endl;
}