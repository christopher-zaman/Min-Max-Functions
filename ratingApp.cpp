#include <iostream>

using namespace std;

int main()
{
	// Initilize variables
	int ratingSum = 0;
	int ratingCount = 0;
	int rateHighest = 0;
	int rateLowest = 5;

	while (true) // our main loop
	{
		// display menu
		cout << endl;
		cout << "Welcome to China Border Protection" << endl;
		cout << "===== Satisfaction Survey ========" << endl;
		cout << "1- Submit Rating" << endl;
		cout << "2- View Rating" << endl;
		cout << "3- Reset Rating" << endl;
		cout << "0- Exit" << endl;
		int choice;
		cout << "Your choice? ";
		cin >> choice;

		// Submit Rating feature
		if (choice == 1)
		{
			int rating;
			cout << "Your rating (1-4)? ";
			cin >> rating;
			if (rating > 0 && rating < 5)
			{
				ratingCount++; // increment number of ratings
				ratingSum += rating; // add rating to the rating sum

				if (rating > rateHighest)
				{
					rateHighest = rating;
				}

				if (rating < rateLowest)
				{
					rateLowest = rating;
				}

				cout << "Your rating is recorded." << endl;
			}
			else
			{
				cout << "You must enter a number from 1 to 4." << endl;
			}
		}
		// View Rating feature
		else if (choice == 2)
		{
			if (ratingCount == 0)
			{
				cout << "There are no ratings for this officer yet." << endl;
			}
			else
			{
				cout << "Highest Rating: " << rateHighest << endl;
				cout << "Lowest Rating: " << rateLowest << endl;
				int avg = ratingSum / ratingCount;
				cout << "Average Rating: " << avg << endl;
			}
		}
		// Reset Rating feature
		else if (choice == 3)
		{
			ratingCount = 0;
			ratingSum = 0;
			rateHighest = 0;
			rateLowest = 5;
			cout << "The ratings for this officer is reset." << endl;
		}
		// Exit feature
		else if (choice == 0)
		{
			cout << "Thank you for using CBPSS v1.0" << endl;
			break;
		}
	}
}