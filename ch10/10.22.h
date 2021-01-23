#ifndef CPP_PRIMER_ANSWERS_10_22_H
#define CPP_PRIMER_ANSWERS_10_22_H
#include "../header.h"
/*
 * desc :
 * 重写统计长度小于等于6的单词数量的程序，使用函数代替lambda。
 */
class Demo{
public:
    static bool judege(const string &s) {return s.size() <= 6;}
    static void test() {
        vector<string> vec{"1234567", "1234", "1234567890", "1234567", "12345" };
        cout << count_if(vec.cbegin(), vec.cend(), bind(judege, placeholders::_1)) << endl;
    }
};

#endif //CPP_PRIMER_ANSWERS_10_22_H
