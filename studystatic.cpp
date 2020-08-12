#include<iostream> 
using namespace std; 

///////////////////////函数中的静态变量////////////////////////////////////////////

// void trystatic()
// {
//     static int out = 0; //函数多次调用，函数中的静态变量空间进分配一次，值转递给下次调用
//     cout<<out<<" ";
//     out++;
// }

// int main() 
// { 
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         trystatic();
//     }
//     cout<<endl;
//     system("pause");
// }  

///////////////////////类中的静态变量/////////////////////////////////////

// class staticInClass
// {
// public:
//     static int i;
//     staticInClass(){

//     };
// };

// int staticInClass::i = 1; //类中静态变量必须在用户使用类之外显式定义

// int main(){
//     staticInClass a;
//     staticInClass b;

//     cout<<a.i<<" "<<b.i<<endl;// 1 1
//     a.i = 2;     //所有对象共享一个静态变量空间，因只创建一次
//     cout<<a.i<<" "<<b.i<<endl;  //2 2
//     system("pause");
// }

//////////////////////////类对象声明为静态//////////////////////////////////////////

// class objIsStatic
// {
//     int i;
// public:
//     objIsStatic()
//     {
//         i=0;
//         cout<<"Constructor"<<endl;
//     };
//     ~objIsStatic()
//     {
//         cout<<"Destructor"<<endl;
//     };
// };

// int main(){
//     int x = 0;

//     if (x==0)
//     {
//         static objIsStatic N; //静态对象生命周期贯穿整个程序周期
//     }
//     if (x==0)
//     {
//         objIsStatic N; //该非静态对象生命周期仅在if块内，if结束会调用析构函数
//     }
//     cout<<"end of if"<<endl;
//     return 0;
// }

/////////////////////////////类中的函数声明为静态//////////////////////////////////////////

class staticFunInClass
{
public:
    staticFunInClass(){

    };

    //int i; 无法访问非静态数据成员或成员函数
    static int i;
    static void printMsg(){
        cout<<"I am studing static. Today is "<<i<<"th."<<endl;
    }
};

int staticFunInClass::i = 12;

int main(){
    staticFunInClass::printMsg(); //类中静态函数不依赖对象
    //建议用类名和::调用类中静态函数

    staticFunInClass a;
    a.printMsg(); //也允许通过对象和.调用类中静态函数
    return 0;
}


