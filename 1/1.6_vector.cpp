#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    {
        // vector 初始化

        // 1. 空
        vector<int> v1;

        // 2.根据个数 拷贝多个元素
        vector<int> v2(4, -1);

        vector<string> v2_1(8, "hi");

        // 构造指定数量，并默认初始化为0
        vector<int> v2_2(4);

        // 3. 通过构造函数拷贝
        vector<int> v3(v2);
        vector<int> v3_2 = v2;

        v3[1] = 3;
        cout << "v3:" << v3[1] << endl;

        // 4. 列表初始化
        vector<int> v5 = {1,2,3};

        vector<int> v5_2 {1,2,3};

        // c++ primer ，通过指定容量追求效率结果是恰恰相反的

    }

    {
        // add, 尾部
        vector<int> v1 ;
        for(int i = 0; i < 100; i++){
            v1.push_back(i);
        }

        vector<int> v2 ;
        for(int i = 0; i < 10; i++){
            v2.push_back(i);
        }

        // 判断元素是否为空 bool empty()
        cout << "v1.empty():" << v1.empty() << endl;

        // 元素个数 size()
        cout << "v1.size():" << v1.size() << endl;

        // v[n] 获取元素值
        cout << "v1[1]:" << v1[1] << endl;

        // 用v2的元素替换v1的元素
        v1 = v2;

        // 判断内容完全相等 v1 == v2

        //




    }



}