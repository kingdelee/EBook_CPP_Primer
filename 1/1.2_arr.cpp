#include <iostream>

using namespace std;

int main() {



    {
        // 【1】定义数组，分配空间
        int arr[4];


        // 【2】int类型数组，分配的空间都默认填充 0
        int arr_int1[4] = {};
        // 1 2 3 0
        int arr_int2[4] = {1, 2, 3};

        // 【3】字符数组 内存分配：
        // 1.读取数组长度，栈内分配一块区域，元素依次填充
        // 2.再次读取新的字符数组时，栈向低位分配一块区域，元素依次填充

        // 显式定义数组长度，元素内容默认填充 '\0'
        char arr_char_0[4] = {};
        // 显式自定数组长度，填充部分元素内容，剩余空间默认填充 '\0'
        char arr_char_1[4] = {'a', 'b', 'c'};
        char arr_char_1_2[4] = {'x', 'y', 'z'};

        // 末尾不指定\0 的错误写法：
        // 最后一位应显式定义为 \0 ，不能用其他填充，否则 无边界溢出/穿模 会导致 arr_char2 读取数组时，一致读到 arr_char1_2的 \0 才停止
        // 输出：1234xyz
        char arr_char_2[4] = {'1', '2', '3', '4'};
        // 输出：45671234xyz
        char arr_char_2_1[4] = {'4', '5', '6', '7'};

        // 末尾不指定\0，正确写法：
        // 输出: efg
        char arr_char_2_2[4] = {'e', 'f', 'g', '\0'};
        char arr_char_2_3[5] = {'h', 'i', 'j', 'l', '\0'};



        // 【4】根据元素个数，自动分配空间，正确末尾写 \0
        char arr_char_3[] =  {'1', '2', '3', '\0'};


        // 【5】由于分配空间大于元素空间，故末尾被自动填充 \0，所以以下三种都是一样的
        char arr_char_4[100] = {'h', 'e', 'l', 'l', 'o'};
        char arr_char_4_2[100] = {'h', 'e', 'l', 'l', 'o', '\0'};
        // 推荐第三种写法，注意，看似字符串，实际上仍是字符数组
        char arr_char_4_3[100] = "hello";

        // 【6】指针数组，p_arr是一个数组，元素是int指针
        int *p_arr[4];

        // 编译错误的数组别名：
//    int &n_arr[4] = arr_int2;

        // p_arr2 是一个指针，指向int数组
        int (*p_arr_2)[4] = &arr_int2; // p_arr_2 is a reference to an array of ten pointers
        // 别名引用，ref_arr是一个引用，指向int数组
        int (&ref_arr)[4] = arr_int2; // ref_arr is a reference to an array of ten pointers
        // ref_arr_2是一个引用，指向int数组，数组元素是指针
        int *(&ref_arr_2)[4] = p_arr;   // ref_arr_2 is a reference to an array of ten pointers

        cout << "*p_arr_2[0]:" << *p_arr_2[0] << endl;

//
//    char arr6[] = "aaa";

        cout << "&arr_char_4_3:" << arr_char_4_3 << endl;
    }


    {
        int arr[4] = {1,2,3,4};
        // 指针，指向数组首元素地址
        int *p1 = &arr[0];

        cout << "*(p1 + 1):" << *(p1 + 1) << endl;

        // 指针，指向数组首地址
        int *p2 = arr;
        cout << "*(p2 + 1):" << *(p2 + 1) << endl;

        //
        int (*p3)[4] = &arr;
        cout << "*(p3 + 1):" << *(p3 + 1) << endl;
        cout << "**(p3 + 1):" << **(p3 + 1) << endl;


    }

}