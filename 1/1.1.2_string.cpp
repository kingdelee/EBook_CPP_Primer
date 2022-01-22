#include <iostream>
#include <string>
using namespace std;

int main(){

    {
        // string::size_type
        string line = "abc";
        // len 类型: string::size_type，能够容纳任意长度
        auto len = line.size();
        cout << "len:" << len << endl;
    }

    {
        // 为string对象赋值

        // 1. 空串
        string s0;

        // 2.构造方法
        string s1(5, 'a'), s2;
        cout << "s1:" << s1 << endl;

        // 3.string间赋值
        s1 = s2;
        cout << "s2:" << s2 << endl;

        // 4.字面量
        string s3 = "aaaaa";

        // 2.2 构造方法
        string s4(s3);

    }

    {
        // 地址不同
        string s1 = "";
        string s2 = "";
        // 比较的是内容，返回 int ，0 是 假， 1 是 真
        cout << "(s1 == s2):" << (s1 == s2) << endl;
        cout << "&s1:" << &s1 << endl;
        cout << "&s2:" << &s2 << endl;
    }

    {
        // 字面值 与 string对象 相加
        string s1 = "hello";
        string s2 = "world";
        string s3 = s1 + "," + s2 + '\n';
        cout << "s3:" << s3 << endl;

        // 相加必须保证两个都是string对象，而不是string字面量
        string s4 = s1 + ",";
        // string s5 = "hello" + ", world"; // 编译失败

        // string s6 = "hello" + ", world" + s1; // 编译失败，先字面量再字符串对象是错误的，字面量没有重载+
        // 字符串对象重载了 + ，但是字面量并没有，
        string s6 =  s1 + "hello" + ", world";

    }

    {
        // cctype
        string s1 = "a";
//        cout << "isalnum(a):" << isalnum(s1) << endl;
//        cout << "isalpha(a):" << isalpha(s1) << endl;
        //...

    }

}