#include <iostream>
#include <typeinfo>
using namespace std;

int getBufSize();

class MyClass{

};

int main() {

    cout << "----1:" << endl;

    {
        // int * 类型别名

        int i = 4;
        int * pi = &i;

        typedef int * i_p_Type;

        i_p_Type pi2 = &i;

        cout << "pi:" << pi << endl;
        cout << "&pi:" << &pi << endl;
        cout << "*pi:" << *pi << endl;
        
        cout << "pi2:" << pi2 << endl;
        cout << "&pi2:" << &pi2 << endl;
        cout << "*pi2:" << *pi2 << endl;

    }

    {
        double d = 8;

//        double * pd = &d;
        // 没有这种定义方式
        // * double pd = &d;

        // 声明 基本类型别名 1
        typedef double dType;

        // 声明 指针类型的别名
        // TODO:如何判断 别名类型的类型
        typedef double * dPType;

        dPType s = &d;  //
        cout << "s:" << s << endl;
        cout << "&s:" << &s << endl;
        cout << "*s:" << *s << endl;

        // *dPType = &d; // 非法



        //  链式
        // * pDType 等价于 * double
        typedef dType baseDType , * pDType;

        pDType dp = &d;


        // 申明 类型别名 3
        using N_MyClass = MyClass;

        // 指针别名
        typedef int * intP;

        int i = 0;
        int i_2 = 0;
        // 等价 int * p = &i
        intP p = &i;
        *p = 10;

        // 指针的值地址不可变 别名
        typedef int const * const  int_cv_ca_type;
        int const * const p2_1 = &i;
        int_cv_ca_type p2_2 = &i;
        // p2_2 = 10;
        // p2_2 = &i_2;

//        typedef char *pstring;
//        const pstring cstr = 0;


    }

    {
        int i = 10;
        const int ci = i, &cr = ci;
        auto b = ci; // 没推出 const
        b = 11;

        //希望推出const
        const auto b_2 = ci; // 推出 const(显示指定了const)
        // b_2 = 11; // 编译失败

        auto &cr_2 = ci; // 别名默认推出 const
        // cr_2 = 11;


        // auto &cr_3 = 10; // 非法，不能直接绑定字面量
        const auto &cr_4 = 10; // 当指定const时，说明需要推的是一个常量
        // cr_4 = 11;

        auto c = cr; // 没推出 const
        c = 11;

        auto d = &i; // 推断是指针

        auto e = &ci; // 推断是指针int常量（指向int常量的指针）， const * e = &ci
        // *e = 11; // 编译失败

        auto *p1 = &ci; // auto 指针时，会推断右值是否有const
        // *p1 = 11

        //
        auto k = ci, &l = i; //  int , int &
        auto &m = ci, *p = &ci; //  int const &, int const *
        // 编译失败，连着写时，必须都是变量或者const
        // auto &n = i, *p2 = &ci; // int , int const *
        // 分开写就没问题
        auto &n = i;
        auto *p2 = &ci;

        cout << "b:" << b << endl;
        cout << "c:" << c << endl;
        cout << "*d:" << *d << endl;
        cout << "*e:" << *e << endl;

    }

    {
        decltype (getBufSize()) i;
        i = 10;
        const int ci = 0, &cj = ci;

        // const int
        decltype(ci) x = 0;
        // x = 1; // 非法
        decltype(cj) y = x;
        // y = 1; // 非法

        // const int 必须初始化
        // decltype(cj) z; // 非法


    }

    {
        int i = 10, *p = &i, &r = i;
        decltype(r + 0) b;

        // decltype(*p) c; // 等价于 &c, 必须初始化 编译失败
        decltype(*p) c = i;

        // 加了括号后，((i)) 表示引用 &i
        // decltype((i)) d; // 非法
        decltype((i)) d = i;

    }



    cout << "----2:" << endl;
}

int getBufSize() {
    return 512;
}