#include <iostream>
using namespace std;

int fact(int n);

int fact(int n){

    int t;

    cout << "n0:" << n << endl;

    if (n == 1 || n == 0){
        return 1;
    }

    t = n * fact(n - 1);
    
    cout << "n:" << n << ", t:" << t << endl;

    return t;

}

int fact2(int n);

int fact2(int n){

    int t;

    cout << "n0:" << n << endl;

    if (n == 1 || n == 0){
        return 1;
    }

    t = fact(n - 1);
    t *= n;

    cout << "n:" << n << ", t:" << t << endl;

    return t;

}

int fib(int n);
int fib(int n){

    if (n <= 2){
        return 1;
    }

    return fib(n -1) + fib(n - 2);
}

void move(char from, char to);
void move(char from, char to){

}

void hanoi(int n, int one, int two, int three);
void hanoi(int n, char one, char two, char three){

    if (n == 1){

    }

}

int & buildDESC_arr(int n){
    int arr[n];
    for(int i = 0; n > 0;){
        arr[i++] = n--;
    }
    return arr;
}

int main(){


    {

    }


}

