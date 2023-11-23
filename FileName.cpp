#include <iostream>
using namespace std;

int main()
{
	int conversion_rate = 10;
	float total_amount, discount;
	int loyalty_points = 0;
	float final_amount;
	int redeemed_points;
	char b;
	do {
		cout << "enter the total amount of purchase\n";
		cin >> total_amount;
		loyalty_points += total_amount / conversion_rate;
		cout << "you've got a total of " << loyalty_points << " loyalty points \n";
		cout << "would you like to redeem your points? (y/n)\n";
		char a;
		cin >> a;
		if (a == 'y' || a == 'Y')
		{
			cout << "enter the amount of points that you would like to redeem\n";
			cin >> redeemed_points;
			if (redeemed_points > loyalty_points) {
				cout << "not enough points!!!\n";
				return 1;
			}
			discount = redeemed_points / 10 * 5;
			loyalty_points -= redeemed_points;
			cout << "you get a total of $" << discount << " discount \n";
			final_amount = total_amount - discount;
			cout << "your final amount would be $" << final_amount << "\n";
			cout << "your remaining loyalty points are: " << loyalty_points << "\n";
		}
		else {
			cout << "your total would be: $" << total_amount << endl;
			cout << "loyalty points: " << loyalty_points << endl;

		}
		cout << "Ty for shopping! would you like to make another purchase? (y/n)\n";
		cin >> b;


	} while (b == 'y' || b == 'Y');

	return 0;
}
