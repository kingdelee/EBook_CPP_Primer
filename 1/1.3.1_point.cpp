#include <iostream>

using namespace std;

int tt = 1000;

int main() {

    {
        // 指向指针的引用
        int i = 10;
        // 声明了一个int指针类型
        int *p;

        // 声明引用 必须初始化，否则编译失败
        //    int *&r;

        // 声明对指针p的引用(别名)，即 该引用是一个int指针类型
        // 原则：第1个靠近变量的符号是定义，其他即变量的返回类型(引用类型)
        int *&r = p;

        // 实际即 int *r = &i, 又因为r实际上是p的别名，所以即int *p = &i
        r = &i;



        int &&&&r;
    }



    cout << endl;
}