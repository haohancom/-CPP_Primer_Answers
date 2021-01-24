#ifndef CPP_PRIMER_ANSWERS_10_27_H
#define CPP_PRIMER_ANSWERS_10_27_H
#include "../header.h"
/*
 * desc :
 * 除了unique（参见10.2.3节，第343页）之外，
 * 标准库还定义了名为unique_copy的函数，它接受第三个迭代器，表示拷贝不重复元素的目的位置。
 * 编写一个程序，使用unique_copy将一个vector中不重复的元素拷贝到一个初始为空的list中。
 */
class Demo{
public:
    static void test() {
        vector<int> vec {1, 2, 3, 4, 5, 5, 6};
        list<int> l;
        unique_copy(vec.begin(), vec.end(), back_inserter(l));
        for_each(l.begin(), l.end(), [](const int &i){cout << i << " ";});
    }
};

#endif //CPP_PRIMER_ANSWERS_10_27_H
