//#include<iostream>
//#include<vector>
//#include<string>
//#include <map>
//#include<cmath>
//#include<math.h>
//#include<cstring>
//#include<cstdlib>
//#include<cstdio>
//#include <set>
//#include<ctime>
//using namespace std;



//int Count = 0;
//struct Bintree {
//  Bintree* p1 = nullptr;
//  Bintree* p2 = nullptr;
//  Bintree* p3 = nullptr;
//  Bintree* p4 = nullptr;
//  int n = 0;
//};
//static Bintree* Maketree(int N) {
//  Bintree* p;
//  p = new Bintree;
//  Count++;
//  p->n = Count;
//  if (N > 1) {
//    p->p1 = Maketree(N - 1);
//    p->p2 = Maketree(N - 1);
//    p->p3 = Maketree(N - 1);
//    p->p4 = Maketree(N - 1);
//  }
//  return p;
//
//  delete p;
//}

//struct Cars {
//  string Markcar;
//  string colorcar;
//  int yearcar = 0;
//}; 
//static void printcars(Cars a) {
//  cout << a.Markcar << " ";
//  cout << a.colorcar << " ";
//  cout << a.yearcar << endl;
//  cout << "\n";
//}

//struct Tours_t {
//  int poeple;
//  int days;
//  double reat;
//  double prise;
//}; Tours_t Sweden; Tours_t Norwae;
//Tours_t Uk; Tours_t obshee;
//
//static void point(Tours_t *tabl) {
//  
//  cout <<"poeple"<<" "<< tabl->poeple << ","<<" ";
//  cout <<"days"<<" "<< tabl->days << ","<<" ";
//  cout <<"reat"<<" "<< tabl->reat << endl; 
//  
//}
//static double sumpoint(Tours_t *itog) {
//
//  cout << "the price is" << " " << itog->prise << endl;
//  return itog->prise;
//}

//struct Employee_t {
//  std::string name;
//  std::string department;
//  std::string telephone;
//  int salary = 0;
//  std::string currency;
//};
//
//static void informationaboutthecompany(Employee_t str) {
//  std::cout << str.name << ",";
//  std::cout << str.department << ",";
//  std::cout << str.telephone << ",";
//  std::cout << str.salary << " ";
//  std::cout << str.currency << endl;
//  cout << endl;
//}
//
//static void smallSalary(Employee_t& strlen) {
//
//  std::cout << strlen.name << endl;
//  cout << endl;
// 
//}


//struct Student {
//  string name = "";
//  int grup = 0;
//  int performance = 0;
//  double average_ball = 0;
//  double sum_srednee = 0;
//};

//static void sum(Student str) {
//  cout << "Name student:" << " " << str.name << endl;
//  cout << "Grup:" << " " << str.grup << endl;
//  cout << "Sum_srednee:" << " " << str.sum_srednee << endl;
//}


//int main() {
//  setlocale(LC_ALL, "rus");

  /*Bintree* q = nullptr;
  q = Maketree(2);
  cout << "Elements in tree:" << "" << Count << endl;
  cout << q->n << endl;
  cout << q->p1->n << endl;
  cout << q->p1->p3->n << endl;
  cout << q->p2->n << endl;
  cout << q->p2->p4->n << endl;
  cout << q->p1->p1->n << endl;
  //cout << q->p2->p2->n << endl;*/

  /*const int size = 4;
  Tours_t tours[size]{};
  cout << "Informashions:" << endl;
  cout << endl;
  for (int i = 0; i < size; i++) {
    Sweden.poeple = 2;
    Sweden.days = 3;
    Sweden.reat = 155.5;
    Sweden.prise = Sweden.poeple * Sweden.days * Sweden.reat;
  }

  for (int i = 0; i < size; i++) {
    Norwae.poeple = 1;
    Norwae.days = 3;
    Norwae.reat = 265.5;
    Norwae.prise = Norwae.poeple * Norwae.days * Norwae.reat;
  }

  for (int i = 0; i < size; i++){
    Uk.poeple = 2;
    Uk.days = 4;
    Uk.reat = 455.5;
    Uk.prise = Uk.poeple * Uk.days * Uk.reat;
  }

  cout << "Sweden:" << " ";
  point(&Sweden);
  sumpoint(&Sweden);
  cout << endl;
  cout << "Norwae:" << " ";
  point(&Norwae);
  sumpoint(&Norwae);
  cout << endl;
  cout << "Uk:" << " ";
  point(&Uk);
  sumpoint(&Uk);
  //cout << endl;*/

  /*Employee_t employees1; Employee_t employees2;
  Employee_t employees3;
  Employee_t* p = nullptr;
  Employee_t* d = nullptr;
  Employee_t* c = nullptr;
  p = &employees1;
  d = &employees2;
  c = &employees3;
  int n = 5;
  for (int i = 0; i < n; i++) {
    p->name = "Ivanov";
    p->department = "бухгалтерия";
    p->telephone = "t.233-33-33";
    p->salary = 28000;
    p->currency = "roubles";
  }
  cout << endl;
  for (int i = 0; i < n; i++) {
    d->name = "Petrov";
    d->department = "ИТ-отдел";
    d->telephone = "t.233-33-34";
    d->salary = 45000;
    d->currency = "roubles";
  }
  cout << endl;
  for (int i = 0; i < n; i++) {
    c->name = "Sidorov";
    c->department = "клиентский отдел";
    c->telephone = "t.233-33-35";
    c->salary = 25000;
    c->currency = "roubles";
  }
  cout << "Informations:" << endl;;
  cout << endl;
  informationaboutthecompany(*p);
  informationaboutthecompany(*d);
  informationaboutthecompany(*c);

  cout << "С зарплатой менее 30 000 рублей:" << endl;
  cout << endl;
  if (p->salary < 30000) {
    smallSalary(*p);
  }
  if (d->salary < 30000) {
    smallSalary(*d);
  }
  if (c->salary < 30000) {
    smallSalary(*c);
  }
  else {
    cout << "Сотрудников с зарплатой менее 30000 тыс. нет" << endl;
  }*/

  /*Student student;
  Student* p = nullptr;
  p = &student;
  const int n = 5;
  int count = 0;
  std::cout << "---------||------------" << endl;
  std::cout << "Enter name student:" << " ";
  cin >> p->name;
  std::cout << "Enter number grup:" << " ";
  cin >> p->grup;
  if (p->grup == 0) {
    exit(0);
  }
  std::cout << "Enter grades:" << endl;
  std::cout << endl;
  for (int i = 0; i < n; i++) {
    std::cout << "Student assessment:";
    p->performance = 2 + rand() % 4;
    std::cout << p->performance << endl;
    std::cout << endl;
    p->average_ball += p->performance;
    p->sum_srednee = p->average_ball / 5;
  }

  if (p->sum_srednee > 4) {
    std::cout << "Students with an average ball above 4:" << endl;
  }
  else if (p->sum_srednee < 4 || p->sum_srednee == 4) {
    std::cout << "Students with an average ball above 4 no" << endl;
  }
  sum(*p); count++;
  std::cout << "------------------------" << endl;
  std::cout << endl;*/

  /*system("pause");
  return 0;
}*/

