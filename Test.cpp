#include <iostream>
using namespace std;

int main(){
  double rate, hours, totalPay;
  cout << "Enter total hours worked: ";
  cin >> hours;

  cout << "Enter hourly pay rate: ";
  cin >> rate;

  if (hours < 40)
    totalPay = hours * rate;
  else
    totalPay = 40 * rate + (hours - 40) * (1.5 * rate);

  printf("Total pay is $%.2f\n", totalPay);

  return 0;
}
