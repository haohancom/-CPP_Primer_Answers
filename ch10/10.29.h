#ifndef CPP_PRIMER_ANSWERS_10_29_H
#define CPP_PRIMER_ANSWERS_10_29_H
#include <fstream>
#include "../header.h"
/*
 * 编写程序，使用流迭代器读取一个文本文件，存入一个vector中的string里。
 */
class Demo{
public:
    static void test() {
        ifstream ifs("../ch10/text");
        istream_iterator<string> in(ifs), eof;
        vector<string> vec;
        copy(in, eof, back_inserter(vec));
        copy(vec.cbegin(), vec.cend(), ostream_iterator<string>(cout, "\n"));
    }
};

#endif //CPP_PRIMER_ANSWERS_10_29_H
