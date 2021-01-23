#ifndef CPP_PRIMER_ANSWERS_10_19_H
#define CPP_PRIMER_ANSWERS_10_19_H
#include "../header.h"
/*
 * desc :
 * 用stable_partition重写前一题的程序，与stable_sort类似，在划分后的序列中维持原有元素的顺序。
 */
class Demo {
public:
    static void elimdups(vector<string> &vec)
    {
        sort(vec.begin(), vec.end());
        auto iter_end = unique(vec.begin(), vec.end());
        vec.erase(iter_end, vec.end());
    }

    static void biggies(vector<string> &vec, size_t sz)
    {
        elimdups(vec);
        stable_partition(vec.begin(), vec.end(),
                    [](string const& l, string const& r) {return l.size() < r.size(); }
        );

        auto iter = partition(vec.begin(), vec.end(), [sz](string const &s) {return s.size() >= sz;});

        for_each(iter, vec.end(),
                 [](const string &s) {
                     cout << s << " "; }
        );
    }

    static void test() {
        vector<string> v{"124", "123", "124", "13892", "25001", "213786", "asdhkhj"};
        biggies(v, 3);
    }
};
#endif //CPP_PRIMER_ANSWERS_10_19_H
