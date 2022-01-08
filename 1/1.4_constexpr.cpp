#include <iostream>

using namespace std;

int getBufSize();

int main() {

    cout << "----1:" << endl;

    {
        const int max = 10;
        const int limit = max + 1;
        int staffSize = 27;

        constexpr int mf = 20;
//            constexpr int limit = max + 1;
//            constexpr int sz = getBufSize();

    }

    {
        // p1 是指针常量
        const int *p1 = nullptr;

        // p2 是常量指针
        constexpr int *p2 = nullptr;

        constexpr int *np = nullptr;


        cout << "np:" << np << endl;

        int j = 0;

        constexpr int i1 = 42;

        static constexpr int i2 = 42;

        // 编译失败，右值必须是 static
//        constexpr const int *p3 = &i1;

        constexpr const int *p3 = &i2;


//        constexpr const int *p3_2 = &constexpr_ii;

//        constexpr int * p4 = &j;

    }





    cout << "----2:" << endl;
}

int getBufSize() {
    return 512;
}