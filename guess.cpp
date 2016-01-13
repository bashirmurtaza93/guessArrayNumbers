#include<iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

using std::cout;
using std::cin;
using std::vector;
using std::endl;
/* New Possible change, instead of vectoring being cleared, it would stay full.
The player would have to memorize the entire sequence as it continues.
*/



int main() {
	int number[] = { 1,2,3,4 };

	srand(time(NULL));

	int tries = 3;
	while (tries > 0) {
		cout << "Welcome" << endl;
		vector<int> rando;
		vector<int> player;
		int a = 5;
		int z = 0;

		for (int x = 0; x < a; x++) {
			int temp = rand() % 4 + 0;

			rando.push_back(number[temp]);
			//random[x] = rand() % a + 1;
      }
		while (z < a) {
			cout << rando[z] << endl;
			z++;
		}
		 
		for (int x = 0; x < a; x++) {
			int playerTemp;
			cout << "Enter a number " << endl;
			cin >> playerTemp;
			player.push_back(playerTemp);

		}
		if (player == rando) {
			cout << "You're correct!" << endl;
			rando.clear();
			player.clear();
			a++;
			break;

		}
		else {
			cout << "You're wrong!" << endl;
			rando.clear();
			player.clear();
			tries--;
			a--;
			break;
		}



		/* Print stuff here


		*/
	} // end while



}
