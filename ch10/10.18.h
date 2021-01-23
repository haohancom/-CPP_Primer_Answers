#ifndef CPP_PRIMER_ANSWERS_10_18_H
#define CPP_PRIMER_ANSWERS_10_18_H
#include "../header.h"
/*
 * desc : 重写biggies，用partition代替find_if。我们在10.3.1节练习10.13（第345页）中介绍了partition算法。
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
        stable_sort(vec.begin(), vec.end(),
                    [](string const& l, string const& r) {return l.size() < r.size(); }
        );

        auto iter = partition(vec.begin(), vec.end, [sz](string const &s) {return s.size() >= sz})

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

#endif //CPP_PRIMER_ANSWERS_10_18_H
