#include <iostream>
#include <math.h>

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

float foo(point point1, point point2){
    std::cout<<sqrt(pow((point1.getX()- point2.getX()),2)+pow((point1.getY()- point2.getY()),2))<<'\n';
    return 0;
}

int main() {
    point a;
    a.setX(119);
    a.setY(110);
    a.print();

    point b;
    b.setX(78);
    b.setY(90);

    foo(a, b);
    return 0;
}