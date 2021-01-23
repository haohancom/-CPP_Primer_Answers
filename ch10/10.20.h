#ifndef CPP_PRIMER_ANSWERS_10_20_H
#define CPP_PRIMER_ANSWERS_10_20_H
#include "../header.h"
/*
 * desc :
 * 标准库定义了一个名为count_if的算法。类似find_if，此函数接受一对迭代器，
 * 表示一个输入范围，还接受一个谓词，会对输入范围中每个元素执行。
 * count_if返回一个计数值，表示谓词有多少次为真。
 * 使用count_if重写我们程序中统计有多少单词长度超过6的部分。
 */
class Demo {
public:
    static void test() {
        string s1("asd"), s2("asdasdas"), s3("asdd");
        vector<string> vec{s1, s2, s3};
        int i = count_if(vec.begin(), vec.end(), [](string s){return s.size() > 6;});
        cout << i << endl;
    }
};
#endif //CPP_PRIMER_ANSWERS_10_20_H
