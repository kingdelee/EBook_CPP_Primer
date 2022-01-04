#include <iostream>
using namespace std;

int main(){

    char s1 [] = "aaa";
    char arr [4];

    const char *s2 = "ccc";
    char *p = s1;

    int i2 = 0;
    int * pi2 = &i2;

    cout << "&s2:" << &s2 << endl;
    cout << "*s2:" << *s2 << endl;
    cout << "*(s2):" << *(s2 + 1) << endl;
    cout << "&*(s2):" << &*(s2 + 1) << endl;

    cout << "&pi2:" << &pi2 << endl;
    cout << "*pi2:" << *pi2 << endl;
    cout << "*(pi2):" << *(pi2 + 1) << endl;
    cout << "&*(pi2):" << &*(pi2 + 1) << endl;


    cout << "&p:" << &p << endl;
    cout << "*p:" << *p << endl;
    cout << "*(p + 1):" << *(p + 1) << endl;
    cout << "&*(p + 1):" << &*(p + 1) << endl;
//    cout << "&*(p + 1):" << &*(p + 1) << endl;

    cout << "s1:" << s1 << endl;
    cout << "&s1:" << &s1 << endl;
    cout << "&s1[0]:" << &s1[0] << endl;
    cout << "&s1[0]:" << static_cast<void*>(s1) << endl;
    cout << "s1[0]:" << s1[0] << endl;
    cout << "s1[0]:" << static_cast<void*>(&s1[0]) << endl;
    cout << "s1[0]:" << static_cast<void*>(&s1[1]) << endl;
//    printf("??: %d", (int)(s1 + 0));
//    printf("??: %d", (int)(s1 + 1));


    char name[]={'o', 'd', 'i', 's', 'e', 'y', '\0', 't', 'o', 'm'};  //?????????C????odisey\0
    cout<<name<<endl;        //????????name???????????&name[0]?????odisey
    cout<<&name[0]<<endl;    //??
    const char* designer="Bjarne Stroustrup";          //???????????C????Bjarne Stroustrup\0
    cout<<designer<<endl;    //????Bjarne Stroustrup

    cout<<static_cast<void*>(name)<<endl;
    cout<<static_cast<void*>(&name[1])<<endl;
//    cout<<static_cast<void*>(designer)<<endl;
}