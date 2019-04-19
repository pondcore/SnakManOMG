#include<iostream>

using namespace std;



class Robot{

    double speed, energy;

    public:

        Robot(double,double);

        Robot operator*(double);

        friend ostream & operator<<(ostream & os,Robot x);

};



Robot::Robot(double a = 1,double b = 100){

    speed = a; energy = b;

}



Robot Robot::operator*(double s){

    Robot r(speed + s,energy/s);

    return r;

}



ostream & operator<<(ostream & os, Robot x){

    return os << x.speed << "," << x.energy << "\n";

}



int main(){

    Robot A;

    cout << A;

    Robot B(50,200);

    cout << B;

    cout << B*5;

}
