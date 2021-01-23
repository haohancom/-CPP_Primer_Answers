#ifndef CPP_PRIMER_ANSWERS_10_25_H
#define CPP_PRIMER_ANSWERS_10_25_H
#include "../header.h"
/*
 * desc :
 * 在10.3.2节（第349页）的练习中，编写了一个使用partition的biggies版本。使用check_size和bind重写此函数。
 */
class Demo{
public:
    static bool check_size(const string &s, int i) {return  s.size() > i;}
    static void elimdups(vector<string> &vec)
    {
        sort(vec.begin(), vec.end());
        auto iter_end = unique(vec.begin(), vec.end());
        vec.erase(iter_end, vec.end());
    }

    static void biggies(vector<string> &vec, size_t sz)
    {
        elimdups(vec);
        stable_sort(vec.begin(), vec.end(),
                    [](string const& l, string const& r) {return l.size() < r.size(); }
        );

        auto iter = partition(vec.begin(), vec.end(), bind(check_size, placeholders::_1, 4));

        for_each(iter, vec.end(),
                 [](const string &s) {cout << s << " "; }
        );
    }

    static void test() {
        vector<string> v{"124", "123", "124", "13892", "25001", "213786", "asdhkhj"};
        biggies(v, 4);
    }
};

#endif //CPP_PRIMER_ANSWERS_10_25_H
