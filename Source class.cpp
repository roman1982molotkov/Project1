#include<iostream>
#include<cmath>
#include<set>
using namespace std;

//class Cosins {
//public:
//  int N;
//  double x;
//  void set(double* a, Cosins p)const {
//    p.x; p.N;
//    int i = 0;
//    a[0] = 1;
//    for (i = 1; i <= N; i++);
//    a[i] = a[i - 1] * (-1) * x * x / (2 * i - 1) / (2 * i);
//  }
//  void show(double* a) {
//    int i = 0;
//    int k = 9;
//    for (; i < k; i++) {
//      cout << a[i] << " ";
//      cout << endl;
//    }
//  }
//  double mycos(double* a, int k) {
//    int i = 0;
//    double s = 0;
//    for (; i < k; i++) {
//      s += a[i];
//    }
//    return s;
//  }
//}object1, object2;

//class mathematics {
//public:
//  int N = 100;
//  int n = 1;
//  double sh(double z) {
//    double s = z;
//    double q = z;
//    for (; n <= N; n++) {
//      q *= z * z / (2 * n) / (2 * n + 1);
//      s += q;
//    }
//    return s;
//  };
//
//  double sh(double z, int m) {
//    double s = z;
//    double q = z;
//    for (; n <= m; n++) {
//      q *= z * z / (2 * n) / (2 * n + 1);
//      s += q;
//    }
//    return s;
//  };
//
//} obj1, obj2;

//Вычисление факториала
//class factorial {
//public:
//  int n;
//  int work(int n) {
//    if (n == 1)return 1;
//    else  return n * work(n - 1);
//  }
//  void shou() {
//    cout << object2.work(object1.n) << endl;
//    cout << endl;
//  }
//}object1, object2;

//Вычисление двойного факториала
//class two_factorial {
//public:
//  int n;
//  int work(int n) {
//    int i = 2;
//    if (n < 0) {
//      cout << "An error cannot be conveyed" << endl;
//      exit(0);
//    }
//    if (n == 0 || n == 1) {
//      return 1;
//    }
//    return n * work(n - i);
//  }
//  void numberfactorial() {
//    cout << object2.work(object1.n) << endl;
//  }
//}object1, object2;

//Вычисление модуля вектора в трехмерном декартовом пространстве
//class Vector_module {
//public:
//  float a;
//  float b;
//  float c;
//  double d;
//  double sum(double p) {
//    cout << p << endl;
//    cout<<endl;
//    return p;
//  }
//}obj,obj1;

//Решение квадратного уровнения и нахождение его корней
class Square_level {
public:
  double a;
  double b;
  double c;
  double x;
  double x1;
  double x2;
  double num(double p,double s)const {
    return p, s;
  }
  double sum(double f) const {
    return f;
  }

  bool operator==(const Square_level& other) const {
    return false;
  }
}obj, obj1, obj2;


int main() {
  setlocale(LC_ALL, "rus");
  /* double* a = nullptr;
   int N = 0;
   cout << "Enter x =" << " ";
   cin >> object1.x;
   cout << "Enter N =" << " ";
   cin >> object1.N;
   a = new double[object1.N + 1];
   object2.set(a, object1);
   object2.show(a);
   for (int i = 1; i <= 5; i++) {
     cout << N * i / 5 << " : " << object2.mycos(a, object1.N * i / 5) << " : " <<
       (1 - object2.mycos(a, N * i / 5) / cos(object1.x)) * 100 << "%\n";

   }
   cout << "cos(x) = " << cos(object1.x) << endl;

   delete[] a;*/

   /*double x = 0;
     int i = 1;
     int m = 10;
     cout << "Enter x =" << " ";
     cin >> x;
     for (; i < m; i++) {
       cout << i << "" << ":sh(" << x << ") = " << obj1.sh(x,i) << endl;
     }
     cout << "---------------------------------" << endl;
     cout << obj2.N << "" << ":sh(" << x << ") = " << obj1.sh(x) << endl;
     cout << "Test value = " << sinh(x) << endl;*/

     /*cout << "Enter the number of factorial =" << " ";
         cin >> object1.n;
         cout << endl;
         object2.work(object1.n);
         cout << "The number of factorial =" << " ";
         object2.shou();*/

         /*cout << "Enter the number of factorial = " << "";
         cin >> object1.n;
         object2.work(object1.n);
         cout << endl;
         cout << "The factor of the number" << " ";
         object2.numberfactorial();
         cout << endl;*/

         /*cout << "Enter the first coordinate of the vector =" << " ";
         cin >> obj.a;
         cout << "\n";
         cout << "Enter the second coordinate of the vector =" << " ";
         cin >> obj.b;
         cout << "\n";
         cout << "Enter the third coordinate of the vector =" << " ";
         cin >> obj.c;
         cout << "\n";
         cout << "Vector module in three - dimensional space =" << " ";
         obj.d = sqrt((pow(obj.a, 2) + pow(obj.b, 2) + pow(obj.c, 2)));
         std::ignore = sqrt(obj.d);
         obj1.sum(obj.d);*/

  double D = 0;
  cout << "Enter coefficients for square levels:" << endl;
  cin >> obj.a;
  cin >> obj.b;
  cin >> obj.c;
  D = pow(obj.b, 2) - 4 * obj.a * obj.c;
  if (D > 0) {
    cout << "The level has two roots" << endl;
    cout << "The discriminant is equal =" << " " << D << endl;
    cout << "The roots of the level are equal:" << endl;
    obj. x1 = (-obj.b + sqrt(D)) / 2 * obj.a;
    cout << "x1 =" << " " << obj.x1 << endl;
    obj. x2 = (-obj.b - sqrt(D)) / 2 * obj.a;
    cout << "x2 =" << " " << obj.x2 << endl;
    obj1.num(obj.x1,obj.x2);
  }
  else if (D == 0) {
    cout << "The level has one root" << endl;
    cout << "The discriminant is equal =" << " " << D << endl;
    cout << "The root root is equal:" << endl;
    obj.x =  - obj.b / (static_cast<double>(2) * obj.a);
    cout << "x =" << " " << obj.x << endl;
    obj2.sum(obj.x);
  }
  else if (D < 0) {
    cout << "The level has no roots" << endl;
    cout << "The discriminant is equal =" << " " << D << endl;
  }
  cout << "\n";









  system("pause");
  return 0;
}