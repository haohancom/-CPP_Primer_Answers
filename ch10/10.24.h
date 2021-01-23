#ifndef CPP_PRIMER_ANSWERS_10_24_H
#define CPP_PRIMER_ANSWERS_10_24_H
#include "../header.h"
/*
 * desc :
 * 给定一个string，使用bind和check_size在一个int的vector中查找第一个大于string长度的值。
 */
class Demo{
public:
    static bool check_size(const string& s, size_t i) {return i > s.size();}

    static void test() {
        vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};
        string s = "asd";
        auto iter = find_if(vec.cbegin(), vec.cend(), bind(check_size, s, placeholders::_1));
        if (iter != vec.end())
            cout << *iter << endl;
    }
};

#endif //CPP_PRIMER_ANSWERS_10_24_H
