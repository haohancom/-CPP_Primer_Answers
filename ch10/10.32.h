#ifndef CPP_PRIMER_ANSWERS_10_32_H
#define CPP_PRIMER_ANSWERS_10_32_H
#include "../header.h"
#include "Sales_Data.h"
#include "numeric"
/*
 * desc :
 * 重写1.6节（第21页）中的书店程序，使用一个vector保存交易记录，使用不同算法完成处理。
 * 使用sort和10.3.1节（第345页）中的compareIsbn函数来排序交易记录，然后使用find和accumulate求和。
 */
class Demo{
public:
    static void test() {
        vector<Sales_data> vec;
        istream_iterator<Sales_data> in(cin), eof;
        copy(in, eof, back_inserter(vec));
        sort(vec.begin(), vec.end(), compareIsbn);

        auto head = vec.begin();
        auto end = vec.begin();
        while (vec.end() != head) {
            end = find_if(head, vec.end(), [&head](const Sales_data &salesData) {return salesData.isbn() != head->isbn();});
            cout << accumulate(head, end, Sales_data(head->isbn())) << endl;
            head = end;
        }
    }

private:
    static bool compareIsbn(const Sales_data &s1, const Sales_data &s2) {
        return s1.isbn().size() < s2.isbn().size();
    }
};

#endif //CPP_PRIMER_ANSWERS_10_32_H
