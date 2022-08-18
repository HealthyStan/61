#include <iostream>
#include <string>
using namespace std;
typedef void *EGLDisplay;
typedef struct tagPOINT
{
    int x;
    int y;
}POINT;


int main()
{
    tagPOINT t1;
    POINT p2;
    cout << "hello world, i love u!" << endl;
    char a = 'b';
    EGLDisplay aa = &a;
    cout << aa << endl;
    return 0;
}