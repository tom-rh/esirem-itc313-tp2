#include <iostream>

#ifndef DATE_H
#define DATE_H

namespace date {
   class Date {
   public:
      Date(int day=1, int month=1, int year=2022);
      int month() const;
      int day() const;
      int year() const;
      void updateMonth(int month);
      void updateDay(int day);
      void updateYear(int year);
      void next();
      void back();
      int getDaysInMonth(int month);

   private:
      int _month;
      int _day;
      int _year;

   };

   bool isDate(int day, int month, int year);
   int dayOfYear(Date d);
   std::string toString(Date d);

   bool operator == (const Date&, const Date&); // comparison operators
   bool operator != (const Date&, const Date&);
   bool operator < (const Date&, const Date&);
   bool operator > (const Date&, const Date&);
   bool operator <= (const Date&, const Date&);
   bool operator >= (const Date&, const Date&);

   Date operator + (const Date& date, const int days); // date + integer
   Date operator + (const int days, const Date& date); // integer + date
   Date operator - (const Date& date, const int days); // date - integer

   Date operator ++ (Date& date); // prefix increment: ++date
   Date operator -- (Date& date); // prefix decrement: --date
   Date operator ++ (Date& date, int); // use int paramater for postfix increment: date++
   Date operator -- (Date& date, int); // use int paramater for postfix decrement: date--
} // date

#endif // DATE_H