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
// 与处理命令只占一行代码,所以行位加"\"
// ##:连接符,frm指传入参数

#define LOG(frm,args...){ \
    printf("%s : %s : %d ",__FILE__,__func__,__LINE__); \
    printf(frm,##args); \  
    printf("\n"); \
} 



void test() {
    LOG("helloworld\n");
}

int main() {
    
    LOG("helloworld\n");
    return 0;
}
