#include <iostream>

class point{
private:
    int x;
    int y;

public:
    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

    void print(){
        std::cout << x << '|' << y << std::endl;
    }

    void setX(int value){
        if (value>=-100 && value<=100)
            x=value;
        else
            std::cout<<"Incorrect X\n";
    }

    void setY(int value){
        if (value>=-100 && value<=100)
            y=value;
        else
            std::cout<<"Incorrect Y\n";
    }
};

int main() {
    point a;
    a.setX(119);
    a.setY(-110);
    a.print();

    point b;
    b.setX(a.getX());
    b.setY(a.getY());
    return 0;
}