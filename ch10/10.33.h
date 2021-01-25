#ifndef CPP_PRIMER_ANSWERS_10_33_H
#define CPP_PRIMER_ANSWERS_10_33_H
#include "../header.h"
#include <fstream>
/*
 * desc :
 * 编写程序，接受三个参数：一个输入文件和两个输出文件的文件名。
 * 输入文件保存的应该是整数。使用istream_iterator读取输入文件。
 * 使用ostream_iterator将奇数写入第一个输出文件，每个值之后都跟一个空格。
 * 将偶数写入第二个输出文件，每个值都独占一行。
 */
class Demo{
public:
    static void test() {
        string in("../ch10/text"), out0("../ch10/out0"), out1("../ch10/out1");
        ifstream ifs(in);
        ofstream ofs0(out0);
        ofstream ofs1(out1);
        istream_iterator<int> in_it(ifs), eof;
        ostream_iterator<int> out0_it(ofs0, "\n"), out1_it(ofs1, " ");
        for_each(in_it, eof, [&out0_it, &out1_it](const int &i) {
            (i & 0x1 ? out1_it : out0_it) = i;
        });
    }
};

#endif //CPP_PRIMER_ANSWERS_10_33_H
