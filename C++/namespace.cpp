
#include <iostream>
using namespace std;
namespace space1{
    int a=100;
    void show(){
        cout<<"\n\n Name space space1 "<<a<<endl;
    }
}
namespace space2{
    int a =200;
    void show(){
        cout<<"\n\n Name space space2 "<<a;
    }
}
int main(){
    space1:: show();
    space2::show();
   // std::cout<<"\n\n Hello world"<<endl;
   cout<<"\n\n Hello world"<<endl;
    cout<<"\n\n\n";
    return 0;
    
}