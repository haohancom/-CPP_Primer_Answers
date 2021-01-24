#ifndef CPP_PRIMER_ANSWERS_10_30_H
#define CPP_PRIMER_ANSWERS_10_30_H
#include "../header.h"
/*
 * desc :
 * 使用流迭代器、sort和copy从标准输入读取一个整数序列，将其排序，并将结果写到标准输出。
 */
class Demo{
public:
    static void test() {
        vector<int> vec;
        istream_iterator<int> in(cin), eof;
        copy(in, eof, back_inserter(vec));
        sort(vec.begin(), vec.end());
        copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, "\n"));
    }
};

#endif //CPP_PRIMER_ANSWERS_10_30_H
