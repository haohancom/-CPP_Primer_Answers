#ifndef CPP_PRIMER_ANSWERS_SALES_DATA_H
#define CPP_PRIMER_ANSWERS_SALES_DATA_H
#include "../header.h"
class Sales_data
{
    friend istream &read(std::istream &is, Sales_data &item);
    friend ostream &print(std::ostream &os, const Sales_data &item);
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

public:
    Sales_data() = default;
    Sales_data(const string &s) :bookNo(s) {}
    Sales_data(const string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(n*p) {}
    Sales_data(std::istream &is) { read(is, *this); }

    std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);

private:
    inline double avg_price() const;

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

inline
double Sales_data::avg_price() const
{
    return units_sold ? revenue / units_sold : 0;
}

std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

#endif //CPP_PRIMER_ANSWERS_SALES_DATA_H
