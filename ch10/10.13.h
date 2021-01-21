#ifndef CPP_PRIMER_ANSWERS_10_13_H
#define CPP_PRIMER_ANSWERS_10_13_H
#include "../header.h"
/*
 * desc :
 * 标准库定义了名为partition的算法，它接受一个谓词，对容器内容进行划分，
 * 使得谓词为true的值会排在容器的前半部分，而使谓词为false的值会排在后半部分。
 * 算法返回一个迭代器，指向最后一个使谓词为true的元素之后的位置。
 * 编写函数，接受一个string，返回一个bool值，指出string是否有5个或更多字符。
 * 使用此函数划分words。
 * 打印出长度大于等于5的元素。
 */
class Demo {
public:
    static void test() {
        string s1("asd"), s2("asdas"), s3("asdasd");
        vector<string> vec {s1, s2, s3};
        partition(vec.begin(), vec.end(), lenLargerThanFive);
        for (const auto &s : vec) {
            cout << s << " ";
        }
        cout << endl;
    };
private:
    static bool lenLargerThanFive(const string &s) {
        return s.size() > 5;
    }
};
#endif //CPP_PRIMER_ANSWERS_10_13_H
