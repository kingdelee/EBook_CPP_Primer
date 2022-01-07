#include <iostream>

using namespace std;

int getBufSize();

int main() {

    {
        // const int 的声明必须初始化，编译失败
//        const int bufSize;

        // const 修饰的是左值，与右值是否是const无关
        // 左值是常量，右值是变量，给常量赋值为一个变量，仅在声明定义时允许
        // 你可以绑定一个任意的角色，张三 李四...
        const int bufSize = getBufSize();
        cout << bufSize << endl;

        int a = 10;
        int c = 12;
        const int b = a;

        // 常量仅允许在声明时赋值1次，再次赋值是不允许的
//        b = c;

        cout << "b:" << b << endl;
        ++a;
        cout << "a:" << a << endl;
        cout << "b:" << b << endl;



    }

    {
        cout <<  endl;
        // const 引用

        const int i = 10;
        // 定义 ri是一个引用，返回的是一个const int 类型
        const int &ri = i;

        // ri 作为一个引用，其类型必须是一个const int，编译失败
//        ri = 100;

        // ir2是一个int的变量， i 是一个const int 即常量， 变量引用常量会使得常量本身发生改变，故不允许变量引用常量，编译失败
//        int &ir2 = i;

        int i1 = 5;
        int i2 = 6;
        // const int & 可以指向 int，r1是一个引用，返回类型是const int，i1是一个 int，const int可以引用int

        const int &r1 = i1;
        cout << "i1:" << i1 << endl;
        cout << "r1:" << r1 << endl;
        i1++;
        cout << "i1:" << i1 << endl;
        cout << "r1:" << r1 << endl;
        // 结论：const int & 使得引用绑定的对象的地址是不可修改的，绑定的对象的值是允许修改的
        // 你绑定了张三这个角色的替身，真身是可以由允许不同的人扮演的
//        r1 = i2;

        // 允许绑定，但是精度会丢失
        double dval = 3.14;
        const int &ri2 = dval;
        cout << "ri2:" << ri2 << endl;

        int i3 = 10;
        int &ri3 = i3;
        const int &ri4 = i;
        ri3 = 0;
        // 认为改了了引用的地址，是不允许的，编译失败
//        ri4 = 0;

    }

    {
        cout << endl;
        // 指针与const

        const double v = 3.14;

        // 指针 指向 常量 是非法的，会导致 常量值允许修改，编译失败
//        double * pt = &v;

        // 常量指针 指向 常量 是合法的，右值返回const，左值返回const，故类型一致，合法
        const double *pt = &v;

        // 常量指针的值是常量，修改值是非法的，编译失败
//        *pt = 3.2;

        // 常量指针的值是不允许修改的，但是指向是允许修改的
        // pt是一个指针，可以指向另一个地址
        double v2 = 3.2;
        pt = &v2;

    }

    {
        cout << endl;



    }


    cout << endl;
}

int getBufSize(){
    return 512;
}