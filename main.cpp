#include <iostream>

class date{
private:
    int day;
    int month;
    int year;

public:
    void print(){
    std::cout << day  << '|' << month << '|' << year << std::endl;
    }

    void setDay(int value){
        if (value>=1 && value<=31)
            day=value;
        else
            std::cout<<"Incorrect month\n";
    }

    void setMonth(int value){
        if (value>=1 && value<=12)
            month=value;
        else
            std::cout<<"Incorrect month\n";
    }

    void setYear(int value){
        if (value<=0)
            std::cout<<"Incorrect month\n";
        else
            year=value;
    }
};

int main() {
    date a;
    a.setDay(19);
    a.setMonth(10);
    a.setYear(2018);

//    date tomorrow;
//    tomorrow.day=a.day;
//    tomorrow.month=a.month;
//    tomorrow.year=a.year;

//    std::cout << a.day  << '|' << a.month << '|' << a.year << std::endl;
//    std::cout << tomorrow.day << '|' << tomorrow.month << '|' << tomorrow.year << std::endl;

    a.print();
//    tomorrow.print();
    return 0;
}