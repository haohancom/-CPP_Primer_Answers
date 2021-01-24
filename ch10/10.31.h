#ifndef CPP_PRIMER_ANSWERS_10_31_H
#define CPP_PRIMER_ANSWERS_10_31_H
#include "../header.h"
/*
 * desc :
 * 修改前一题的程序，使其只打印不重复的元素。
 * 你的程序应使用unique_copy（参见10.4.1节，第359页）。
 */
class Demo{
public:
    static void test(){
        vector<int> vec;
        istream_iterator<int> in(cin), eof;
        copy(in, eof, back_inserter(vec));
        sort(vec.begin(), vec.end());
        vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
        copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, "\n"));
    }
};
#endif //CPP_PRIMER_ANSWERS_10_31_H
