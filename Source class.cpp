#include<iostream>
#include<cmath>
#include<math.h>
#include<set>
#include<Windows.h>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<complex>
#include<string>
using namespace std;


//class algebra {
//public:
//  double Re = 0;
//  double Im = 0;
//  double Algebraicform(algebra obj1, algebra obj2) {
//    algebra  temp;
//    temp.Re = obj1.Re + obj2.Re;
//    temp.Im = obj2.Im + obj2.Im;
//    cout << temp.Re << "  ";
//    cout << temp.Im << endl;
//    return temp.Re;
//    return temp.Im;
//  }
//  static void show(algebra obj) {
//    cout << obj.Re << " ";
//    if (obj.Im >= 0) {
//      cout << "+" << " " << obj.Im << "i" << endl;
//    }
//    else {
//      cout << "-" << " " << -obj.Im << "i" << endl;
//    }
//    cout << endl;
//  }
//  algebra() = default;
//}objA, objB;
//
//
//class geometriy : public algebra {
//public:
//  double r = 0;
//  double phi = 0;
//  double Ry = 0;
//  double Rx = 0;
//  double Trigenometricform(geometriy obj1, geometriy obj2) {
//    geometriy temp1;
//    temp1.Rx = obj1.r * cos(obj2.phi);
//    temp1.Ry = obj1.r * sin(obj2.phi);
//    cout << temp1.Rx << " " << "+" << " ";
//    cout << temp1.Ry << endl;
//    return temp1.Rx;
//    return temp1.Ry;
//  }
//  geometriy() = default;
//}objC;

//class Cosinuscomplexnumber {
//public:
//  double z = 0;
//  double chy = 0;
//  double shy = 0;
//  double Rx = 0;
//  int x = 0;
//  const int i = -1;
//  const float e = 2.71;
//
//  Cosinuscomplexnumber() = default;
//
//  double Hyperbolic_cosine_and_sinus(Cosinuscomplexnumber obj1)
//  { 
//    shy = (e * obj1.x - e - obj1.x) / 2;
//    chy = (e * obj1.x + e - obj1.x) / 2;
//    cout << "shy =" << " " << shy << endl;
//    cout << "chy =" << " " << chy << endl;
//    return shy, chy;
//  }
//  
//
//  double Caluation_of_cosine(Cosinuscomplexnumber obj2)
//  {
//    z = cos(obj2.Rx) * chy - (i) * sin(obj2.Rx) * shy;
//    cout << "z =" << " " << z << endl;
//    return z;
//  } 
//};

class Vector {
public:
  double fi{ 0 };
  double cosine_value{ 0 };
  double Scalar_work{ 0 };
  const double pi = 3.14;
  double gradys{ 0 };
  double A{ 0 };
  double A1{ 0 };
  double A2{ 0 };
  double B{ 0 };
  double B1{ 0 };
  double B2{ 0 };
public:
  Vector() = default;

  double work(Vector obj) {
    A = sqrt(pow(obj.A1, 2) + pow(obj.A2, 2));
    cout << "A =" << " " << A << endl;
    cout << endl;
    return A;
  }
  double work1(Vector obj1) {
    B = sqrt(pow(obj1.B1, 2) + pow(obj1.B2, 2));
    cout << "B =" << " " << B << endl;
    cout << endl;
    return B;
  }
  double work2(Vector obj2, Vector obj3) {
    Scalar_work = (obj2.A1 * obj3.B1) + (obj2.A2 * obj3.B2);
    cout << "Scalar_work =" << " " << Scalar_work << endl;
    cout << endl;
    return Scalar_work;
  }
  const double Corner(){
    fi = (objC.Scalar_work / (objA.A * objB.B));
    cosine_value = acos(objC.fi);
    gradys = objC.cosine_value * 180 / pi;
    cout << "Cosine of the angle fi =" << " " << fi << endl;
    cout << endl;
    cout << "radian cosine_value =" << " " << cosine_value << endl;
    cout << endl;
    cout << "The degree of the angle of the vector =" << " " << gradys << endl;
    cout << endl;
    return fi;
    return cosine_value;
    return gradys;
  }
}objA, objB, objC;


int main() {
  setlocale(LC_ALL, "rus");
  /*algebra * p = nullptr;
  geometriy * v = nullptr;
  algebra obj;
  geometriy obj1;
  p = &obj;
  v = &obj1;
  const double pi = 3.14;
  objA.Re = 1;
  objA.Im = -1;
  objB.Re = 4;
  objB.Im = 5;
  objC.r = 2;
  objC.phi = pi / 6;
  p->Algebraicform(objA, objB);
  p->show(objA);
  p->show(objB);
  v->Trigenometricform(objC, objC);*/
  /*Cosinuscomplexnumber obj3, obj4;
  cout << "Pleas enter the number x =" << " ";
  cin >> obj3.x;
  cout << "Pleas enter the number Rx =" << " ";
  cin >> obj3.Rx;
  obj4.Hyperbolic_cosine_and_sinus(obj3);
  obj4.Caluation_of_cosine(obj3);*/

  cout << "Enter the first vector" << " "<<"A1 ="<<" ";
  cin >> objA.A1;
  cout << endl;
  cout << "Enter  the second number of vectors " << " "<<"A2 ="<<" ";
  cin >> objA.A2;
  cout << endl;
  cout << "Enter the third number of vector" << " "<<"B1 ="<<" ";
  cin >> objB.B1;
  cout << endl;
  cout << "Enter the fourth number of vectors" << " "<<"B2 ="<<" ";
  cin >> objB.B2;
  cout << endl;
  objA.work(objA);
  objB.work1(objB);
  objC.work2(objA,objB);
  objC.Corner();
  
 
  system("pause");
  return 0;
}

