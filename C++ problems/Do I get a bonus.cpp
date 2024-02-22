#include<string>
using namespace std;

string bonus_time(int salary, bool bonus)
{
    return bonus ? "$" + to_string(salary * 10) :"$" + to_string(salary);
}