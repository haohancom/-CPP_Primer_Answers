#ifndef CPP_PRIMER_ANSWERS_10_28_H
#define CPP_PRIMER_ANSWERS_10_28_H
#include "../header.h"
/*
 * ：一个vector中保存1到9，将其拷贝到三个其他容器中。
 * 分别使用inserter、back_inserter和front_inserter将元素添加到三个容器中。
 * 对每种inserter，估计输出序列是怎样的，运行程序验证你的估计是否正确。
 */

class Demo{
public:
    static void test() {
        vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
        list<int>l1, l2, l3;
        copy(vec.begin(), vec.end(), inserter(l1, l1.begin()));
        copy(vec.begin(), vec.end(), back_inserter(l2));
        copy(vec.begin(), vec.end(), front_inserter(l3));
        for_each(l1.begin(), l1.end(), [](int i){cout << i << " ";});cout << endl;
        for_each(l2.begin(), l2.end(), [](int i){cout << i << " ";});cout << endl;
        for_each(l3.begin(), l3.end(), [](int i){cout << i << " ";});cout << endl;
    }
};
#endif //CPP_PRIMER_ANSWERS_10_28_H
