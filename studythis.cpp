#include <iostream>
#include <cstring>
using namespace std;

class studentInfo
{
public:
    typedef enum {
        BOY = 0,
        GIRL
    }SexType; //重命名一个枚举类型（类似布尔类型，将字符和整型建立联系）

    studentInfo(char *n, int a, SexType s){  //初始化
        name = new char[strlen(n)+1]; 
        strcpy(name,n);
        age = a;
        sex = s;
    }

    int getage() const{
        return this -> age;  //this的使用 因为是静态函数，this转化为指向常量的常指针 const A * const
    }

    studentInfo& addage(int a){  //返回类的引用
        this -> age+=a;
        return *this; //this的使用，this转化成常指针 A * const
    }

    ~studentInfo(){
        delete [] name;
    }

    private:
    char *name;
    int age;
    SexType sex;
};

int main(){
    studentInfo nana("jinna", 28, studentInfo::GIRL);
    cout<<nana.getage()<<endl;
    cout<<nana.addage(1).getage()<<endl;
    return 0;
}
