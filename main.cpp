#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double DistanceFt,DistanceInches,HeightInches,Angle;
    cout<<"Enter the height of your eye in inches:";
    cin>>HeightInches;
    cout<<"Enter the distance from the tree in inches:";
    cin>>DistanceInches;
    cout<<"Enter the distance from the tree in feet:";
    cin>>DistanceFt;
    cout<<"Enter the angle in degrees:";
    cin>>Angle;

    double TotalDistance=DistanceFt * 12 + DistanceInches;
    double Radians=Angle * M_PI/180.0;
    double HeightFeet=(HeightInches/12.0)+(TotalDistance * tan(Radians))/12.0;

    cout<<"Height of the tree is "<<HeightFeet <<" feet";
    return 0;
}
