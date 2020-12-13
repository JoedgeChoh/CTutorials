#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<queue>
#include<stack>
#include<algorithm>
#include<string>
#include<map>
#include<set>
#include<vector>
#include<vector>

using namespace std;

int add1(int a,int b) {
    return a+b;
}

class ADD {
public:
    int operator add2()(int a,int b) {
        
        return a+b;
    }
};

template<typename T,typename U>
auto add3(T a,U b) -> decltype(a+b) {
    return a+b;
}

auto add4=[](int a ,int b)-> int {
    return a+b;
}

int main() {
    ADD ad;
    cout<<"helloworld"<<endl;
    cout<<add1(3,4)<<endl;
    cout<<ad.add2(3,4)<<endl;
    cout<<add3(3,4)<<endl;
    cout<<add4(3,4)<<endl;

    return 0;
}
