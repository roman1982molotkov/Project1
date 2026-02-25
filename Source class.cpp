#include<iostream>
#include<cmath>
#include<math.h>
//#include<math.h>
//#include<set>
#include<Windows.h>
#include<cstdlib>
#include<cstdio>
//#include<stdio.h>
//#include<ctime>
//#include<complex>
//#include<string>
#include<vector>
#include<stdexcept>
#include<functional>
#include<exception>
#include<random>
#include<iomanip>
#include <expected>










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




//class Vektor {
//protected:
//  vector <int> array1;
//  string name;
//public:
//  Vektor() = default;
//
//  Vektor(vector<int>array2, string name) {
//    array1 = array2;
//    this->name = name;
//  }
//  void number()const {
//    cout << " " << "================" << name << "================" << endl;
//    for (int i : array1) {
//      cout << " " << i;
//    }
//    cout << endl;
//    cout << " " << "В массиве вектора цифры больше десяти но меньше пятнадцати" << endl;
//    for (int a : array1) {
//      if (a > 10 && a < 15) {
//        cout << " " << a << endl;
//      }
//    }
//    cout << endl;
//  }
//  ~Vektor() {};
//};

//Произведение вектора
class  Vector_representation
{
private:
  char z = 86;
  char z1 = 61;
  int lines_a{};
  int lines_b{};
  float array[3]{};
  float array1[3]{};
  float proizvedenievec[3]{};
public:
  Vector_representation(int a, int b) :lines_a(a), lines_b(b) {}

  void filling_in_the_array()
  {
    if (lines_a > 3 || lines_b > 3)
    {
      std::cout << "Error!" << " " << "error code 1" << std::endl;
      exit(0);
    }

    std::cout << "\n";
    std::cout << z <<" " << "1" << " " << z1 << " ";

    for (int i = 0; i < lines_a; ++i)
    {
      std::cin >> array[i];
    }
    std::cout << "\n";

    std::cout << z << " " << "2" << " " << z1 << " ";

    for (int j = 0; j < lines_b; ++j)
    {
      std::cin >> array1[j];
    }
    std::cout << "\n";
  }
  float The_product_of_the_vector()
  {
    proizvedenievec[0] = array[1] * array1[2] - array[2] * array1[1];
    proizvedenievec[1] = array[2] * array1[0] - array[0] * array1[2];
    proizvedenievec[2] = array[0] * array1[1] - array[1] * array1[0];

    return proizvedenievec[0], proizvedenievec[1], proizvedenievec[2];
  }
  void print_The_product_of_the_vector()const
  {
    std::cout << "The product of the vector is" << std::endl;
    std::cout << "\n";
    std::cout << "Vector ->" << " ";
    for (int i = 0; i < 3; i++)
    {
      std::cout << proizvedenievec[i] << " ";
    }
    std::cout << "\n";
    std::cout << "\n";
  }

  ~Vector_representation() {}
};



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
  obj4.Caluation_of_cosine(obj3);

  cout << "Enter the first vector" << " " << "A1 =" << " ";
  cin >> objA.A1;
  cout << endl;
  cout << "Enter  the second number of vectors " << " " << "A2 =" << " ";
  cin >> objA.A2;
  cout << endl;
  cout << "Enter the third number of vector" << " " << "B1 =" << " ";
  cin >> objB.B1;
  cout << endl;
  cout << "Enter the fourth number of vectors" << " " << "B2 =" << " ";
  cin >> objB.B2;
  cout << endl;
  objA.work(objA);
  objB.work1(objB);
  objC.work2(objA, objB);
  objC.Corner();

  Number number(5);
  number.number();*/

  /*typedef int s;
  s sim = 5;
  cout << "sim =" << " " << sim << endl;
  enum color { red = 10, blue, elow, blake }car{};
  car = red;
  color vam = blue;
  cout << "car =" << " " << car << endl;
  cout << "vam =" << " " << vam << endl;*/

  /*vector<int>array3;
  for (int i = 1; i <= 15; i++) {
    array3.push_back(i);
  }
  Vektor num(array3, "Vector");
  num.number();*/

  //Произведение вектора
  int c = 0;
  int m = 0;
  std::cout << " " << "==== Enter an array of three elements in size ====" << std::endl;
  std::cout << "======================//==========================" << std::endl;
  std::cout << "\n";
  std::cout << "lines_a = ";
  std::cin >> c;
  std::cout << "\n";
  std::cout << "lines_b = ";
  std::cin >> m;
  std::cout << "\n";

  Vector_representation obj(c, m);
  obj.filling_in_the_array();
  obj.The_product_of_the_vector();
  obj.print_The_product_of_the_vector();

  system("pause");
  return 0;
}

