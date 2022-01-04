#include <iostream>
using namespace std;

int retConstexpr(int vtype);
int & retConstexpr2(int * vtype);

int main(){

    // ??????????????????constexpr
    constexpr int type = 10;

    cout << "type:" << type << endl;

    int a = 1;

    const int ctype = 10;
    // ????????
//    ctype += 1;

    int const * pCtype = & ctype;

    cout << "ctype:" << ctype << endl;

    constexpr int vtype = 100;
    // ????????
//    vtype += 1;
    cout << "vtype:" << vtype << endl;

    int b = retConstexpr(vtype);
    cout << "b:" << vtype << endl;


    int i = 0;

    const int j = i + 1; // right
//    constexpr int j = i + 1; // error

    char s1[] = "abcd";
    char * s2 = "bcf";

    cout << "s1:" << s1 << endl;
    cout << "s2:" << s2 << endl;

    const int * p2 = &vtype;

//    int c = retConstexpr2(p2);

    cout << "c:" << vtype << endl;

}



int retConstexpr(int vtype){
    return ++vtype;
}

int & retConstexpr2(int * vtype){
    ++ *vtype;
    return *vtype;
}