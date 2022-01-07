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

        // 指针常量 指向 常量 是合法的，右值返回const，左值返回const，故类型一致，合法
        const double *pt = &v;

        // 常量指针的值是常量，修改值是非法的，编译失败
//        *pt = 3.2;

        double v2 = 3.14;
        double * p2 = &v2;
        *p2 = 2.14;


        // 常量指针的值是不允许修改的，但是指向是允许修改的
        // pt是一个指针，可以指向另一个地址
        double v3 = 3.2;
        pt = &v2;

        int i = 10;
        int i3 = 10;
        const int *p = &i;
        i = 11;
        // 通过 指针 修改 值 是非法的
//        *p = 10;
        // 然而此时，通过 指针 修改 地址 是合法的
        p = &i3;

        // 只需关心左值，不必理会右值

    }

    {
        // const指针
        cout << endl;

        int errNum = 0;
        int errNum2 = 0;
        // 常量指针 ，必须初始化，否则编译失败
//        int * const cur;
        // 常量指针 还是一个指针，指向一个地址，地址不可变
        int * const cur = &errNum;
        // 地址不可变，编译失败
//        cur = &errNum2;
        // 赋值实际上也是修改了地址，值本身也会有一个地址存储则，编译失败
//        cur = 10;

        *cur = 10;

//        cout << "*cur:" << *cur << endl;
//        errNum = 2;
//        cout << "*cur:" << *cur << endl;




    }


    {


        int i = 10;
        int i2 = 12;
        int *p1 = &i;
        int *p2 = &i2;
        *p1 = 11;

        // 定义常量的时候必须初始化，编译失败
        // const int po_3;
        int * const p3 = &i;
//        int * const p3_2; // 必须初始化，编译失败
        *p3 = 12; // 常量指针是可以修改指针指向的值
        // p3 = &i2; // 常量指针不能改地址

        int const * p4 = &i;
        int const * p4_0; // 可以不初始化
        // *p4 = 12; // 指针常量的值不能改，编译失败
        p4 = &i2; // 指针常量能改地址

        const int * p4_1 = &i; // 同 p4，也是指针常量
        const int * p4_1_0; // 同 p4，也是指针常量，可以不初始化
        // *p4 = 12; // 指针常量的值不能改，编译失败
        p4 = &i2; // 指针常量能改地址

//        const * int p4_2 = &i; // 没有这种写法

        const int * const p5 = &i;
        // const int * const p5_0; // 必须初始化，编译失败
//        *p5 = 12; // 常量指针的常量不能改值
//         p5 = &i2; // 常量指针的常量也不能改地址









    }


    cout << endl;
}

int getBufSize(){
    return 512;
}