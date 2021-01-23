#ifndef CPP_PRIMER_ANSWERS_10_17_H
#define CPP_PRIMER_ANSWERS_10_17_H
#include "../header.h"
#include "Sales_Data.h"
/*
 * desc :
 * 重写10.3.1节练习10.12（第345页）的程序，在对sort的调用中使用lambda来代替函数compareIsbn。
 */
class Demo {
public:
    static void test() {
        Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
        vector<Sales_data> vec{d1, d2, d3, d4, d5 };

        sort(vec.begin(), vec.end(),
             [](const Sales_data &d1, const Sales_data &d2) {
                      return d1.isbn().size() < d2.isbn().size(); }
        );

        for (const auto &data : vec)
            cout << data.isbn() << " ";
        cout << endl;
    }
};

#endif //CPP_PRIMER_ANSWERS_10_17_H
