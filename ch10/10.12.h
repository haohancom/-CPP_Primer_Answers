#ifndef CPP_PRIMER_ANSWERS_10_12_H
#define CPP_PRIMER_ANSWERS_10_12_H
#include "../header.h"
#include "Sales_Data.h"
/*
 * desc :
 * 编写名为compareIsbn的函数，比较两个Sales_data对象的isbn（）成员。
 * 使用这个函数排序一个保存Sales_data对象的vector。
 */
class Demo {
public:
    static void test() {
        Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
        vector<Sales_data> vec{ d1, d2, d3, d4, d5 };

        sort(vec.begin(), vec.end(), compareIsbn);
        for (const auto &element : vec)
            cout << element.isbn() << " ";
        cout << endl;
    };
private:
    static bool compareIsbn(const Sales_data &s1, const Sales_data &s2) {
        return s1.isbn().size() < s2.isbn().size();
    }
};
#endif //CPP_PRIMER_ANSWERS_10_12_H
