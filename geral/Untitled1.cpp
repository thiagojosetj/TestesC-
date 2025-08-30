#include <iostream>
using namespace std;

int main() {
    
    string name;
    double salary, sale, per, totalSalary;
    
    cin >> name;
    cin >> salary;
    cin >> sale;
    
    per = sale * 0.15;
    totalSalary = per + salary;
    
    printf("TOTAL = R$ %.2f\n", totalSalary);

    return 0;
}

