#ifndef CPP_PRIMER_ANSWERS_10_11_H
#define CPP_PRIMER_ANSWERS_10_11_H
#include "../header.h"
/*
 * desc :
 * 编写程序，使用stable_sort和isShorter将传递给你的elimDups版本的vector排序。
 * 打印vector的内容，验证你的程序的正确性。
 */
class Demo {
public:
    static void test() {
        vector<string> vec {
            "bbb", "aaa", "cccc", "d", "ccc"
        };
        elimDups(vec);
        printVec(vec);
        stable_sort(vec.begin(), vec.end(), isShorter);
        printVec(vec);
    };

private:
    static bool isShorter(const string &s1, const string &s2) {
        return s1.size() < s2.size();
    }

    static void elimDups(vector<string> &vec) {
        sort(vec.begin(), vec.end());
        auto end_uniques = unique(vec.begin(), vec.end());
        vec.erase(end_uniques, vec.end());
    }

    static void printVec(const vector<string> &vec) {
        for (auto &s : vec) {
            cout << s << " ";
        }
        cout << endl;
    }
};
#endif //CPP_PRIMER_ANSWERS_10_11_H
