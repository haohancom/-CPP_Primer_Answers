#ifndef CPP_PRIMER_ANSWERS_10_9_H
#define CPP_PRIMER_ANSWERS_10_9_H
#include "../header.h"
/*
 * 实现你自己的elimDups。测试你的程序，分别在读取输入后、调用unique后以及调用erase后打印vector的内容。
 */
class Demo {
public:
    static void test() {
        vector<string> vec;
        vec.emplace_back("a");
        vec.emplace_back("b");
        vec.emplace_back("d");
        vec.emplace_back("c");
        vec.emplace_back("a");
        elimDups(vec);
    };

private:
    static void elimDups(vector<string> &vec) {
        sort(vec.begin(), vec.end());
        printVec(vec);
        auto end_uniques = unique(vec.begin(), vec.end());
        printVec(vec);
        vec.erase(end_uniques, vec.end());
        printVec(vec);
    }

    static void printVec(const vector<string> &vec) {
        for (auto &s : vec) {
            cout << s << " ";
        }
        cout << endl;
    }
};

#endif //CPP_PRIMER_ANSWERS_10_9_H
