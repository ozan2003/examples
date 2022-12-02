// This was my first assignment in Introduction to Programming, completed on November 30, 2022.

#include <iostream> 
#include <string> // For strings.
#include <time.h> // for time(). 
#include <cmath> // I used it to calculate the standard deviation. 


struct Date
{
	int day;
	int month;
	int year;
};

struct StructofStudent
{
	std::string name;
	std::string surname;

	int id;

	int quiz1;
	int quiz2;
	int assignment1;
	int assignment2;
	int project;
	int midterm;
	int final;

	int midyeargrade;
	int semestergrade;

	Date birthdate;
};


// Here, an array named "student" with the type of StructofStudent.
StructofStudent student[100];



// Name list of 30 names for random name assignment.
std::string NameList[30] = {"Connor", "Noah", "Oliver", "Elijah", "James", "William", "Benjamin", "Lucas", "Henry", "Vincent", 
					   "Ethan", "Jack", "Hank", "Gavin", "Walter", "Olivia", "Emma", "Charlotte", "Amy", "Katya",
					   "Alice", "Anna", "Evelyn", "Valerie", "Elizabeth", "Laura", "Emily", "Diana", "Chloe", "Lucy"};



// Surname list of 30 names for random name assignment.
std::string SurnameList[30] = {"Smith", "Johnson", "Williams", "Brown", "Jones", "Green", "Miller", "Davis", "Foster", "Graham",
						  "Cooper", "Hill", "Wilson", "Anderson", "Morgan", "Taylor", "Moore", "Jackson", "Martin", "Lee",
						  "Lawrence", "Thompson", "White", "Harris", "Bell", "Clark", "Holmes", "Lewis", "Robinson", "Walker"};



// A function that converts a grade between 0 and 100 to a letter according to its range.
void print_numerical_to_letter_grade(int g)
{
	if (0 <= g && g <= 39)
		std::cout << "F";

	else if (40 <= g && g <= 49)
		std::cout << "E";

	else if (50 <= g && g <= 54)
		std::cout << "D";

	else if (55 <= g && g <= 59)
		std::cout << "D+";

	else if (60 <= g && g <= 64)
		std::cout << "C";

	else if (65 <= g && g <= 69)
		std::cout << "C+";

	else if (70 <= g && g <= 74)
		std::cout << "B";

	else if (75 <= g && g <= 79)
		std::cout << "B+";

	else if (80 <= g && g <= 84)
		std::cout << "A-";

	else if (85 <= g && g <= 89)
		std::cout << "A";

	else if (90 <= g && g <= 100)
		std::cout << "A+";

	else
		std::cout << "Invalid grade..." << std::endl;
}

// Function that checks whether the grade is between 0 and 100.
void gradecheck(int a)
{
	std::cin >> a;
	
	while ((!(0 <= a && a <= 100)))
	{
		std::cout << "\nPlease enter a grade between 0 and 100: ";

		std::cin >> a;
	}
}







// Prints the students 20 by 20.
void displaylist()
{

	std::cout << "\nDisplaying list...\n#####################\n\n";

	for (int i = 0; i < 100; i++)
	{
		std::cout <<"Student #" << i + 1 << "\n-----------------------------------";
		
		std::cout << "\nName: " << student[i].name << "\n";
		std::cout << "Surname: " << student[i].surname << "\n";
		std::cout << "ID: " << student[i].id << "\n";

		std::cout << "Date of Birth: " << student[i].birthdate.day << "." << student[i].birthdate.month << "." 
															          << student[i].birthdate.year << " (D/M/Y)" << "\n";

		std::cout << "1st Quiz Grade: " << student[i].quiz1;
		std::cout << " ("; print_numerical_to_letter_grade(student[i].quiz1); std::cout << ")\n";
		
		std::cout << "2nd Quiz Grade: " << student[i].quiz2;
		std::cout << " ("; print_numerical_to_letter_grade(student[i].quiz2); std::cout << ")\n";

		std::cout << "1st Assignment Grade: " << student[i].assignment1;
		std::cout << " ("; print_numerical_to_letter_grade(student[i].assignment1); std::cout << ")\n";

		std::cout << "2nd Assignment Grade: " << student[i].assignment2;
		std::cout << " ("; print_numerical_to_letter_grade(student[i].assignment2); std::cout << ")\n";

		std::cout << "Project Grade: " << student[i].project;
		std::cout << " ("; print_numerical_to_letter_grade(student[i].project); std::cout << ")\n";

		std::cout << "Midterm Grade: " << student[i].midterm;
		std::cout << " ("; print_numerical_to_letter_grade(student[i].midterm); std::cout << ")\n";

		std::cout << "The Final Grade: " << student[i].final;
		std::cout << " ("; print_numerical_to_letter_grade(student[i].final); std::cout << ")\n";

		
		std::cout << "Mid-year Grade: " << student[i].midyeargrade;
		std::cout << " ("; print_numerical_to_letter_grade(student[i].midyeargrade); std::cout << ")\n";
		
		std::cout << "Semester Grade: " << student[i].semestergrade;
		std::cout << " ("; print_numerical_to_letter_grade(student[i].semestergrade); std::cout << ")\n\n\n";

		if (((i+1) % 20 == 0) && (i != 0) && ((i+1) != 100))
		{
			std::cout << "The first 20 students are displayed. Press any key to display the next 20. ";

			char key;
			std::cin >> key;

			std::cout << "Please wait...";

			system("cls"); // Clears the console window.
		}
	}
}


 

// Returns the highest grade.
int highestgrade(StructofStudent student[100])
{
	int i{};
	int max = 0;
	
	for (int i = 0; i < 100; i++) // Checking every grade to see if there's any greater.
	{
		if (student[i].semestergrade > max)
		{
			max = student[i].semestergrade;
		}
	}

	return max;
}




// Returns the lowest grade.
int lowestgrade(StructofStudent student[100])
{
	int j{};
	int min = 100;
	
	for (int j = 0; j < 100; j++) // Checking every grade to see if there's any lower.
	{
		if (student[j].semestergrade < min)
		{
			min = student[j].semestergrade;
		}
	}

	return min;
}




// Prints the arithmetic mean.
void printmean()
{
	double sum{};

	for (int i = 0; i < 100; i++)
	{
		sum += student[i].semestergrade;
	}

	std::cout << "\nThe arithmetic mean of students' grades: " << sum / 100.0 << "\n\n\n";
}




// Prints the standard deviation.
void print_standard_deviation()
{
	double sum{}, mean{}, standarddeviation{};

	for (int i = 0; i < 100; i++)
	{
		sum += student[i].semestergrade;
	}

	mean = sum / 100.0;

	
	
	for (int i = 0; i < 100; i++)
	{
		standarddeviation += pow(student[i].semestergrade - mean, 2);
	}

	standarddeviation = sqrt(standarddeviation / 100.0);

	std::cout << "\nThe standart deviation of students' grades: " << standarddeviation << "\n\n\n";
}




// Gives the number of students whose grades fall within any two values.
void print_grade_between_two_numbers(StructofStudent student[100])
{
	int low, high;
	int counter{};
	
	std::cout << "\n\nPlease enter two numbers between 0 and 100 for the interval: ";
	std::cin >> low >> high;

	if (low > high)
	{
		int temp = low;

		low = high;

		high = temp;
	}
	else if (low == high)
	{
		std::cout << "The numbers are equal... Please enter again: ";

		std::cin >> low >> high;
	}
	else if (!(((0 <= low && low <= 100)) && ((0 <= high && high <= 100))))
	{
		std::cout << "The numbers are outside of the desired interval... Please enter again: ";

		std::cin >> low >> high;
	}
	

	for (int i = 0; i < 100; i++)
	{
		if (low < student[i].semestergrade && student[i].semestergrade < high)
		{
			counter++;
		}
	}

	std::cout << "\nThere are " << counter << " students within the entered interval. \n\n\n";
}




// Gives the number of students whose grades are below any given value.
void print_grade_lower_than_given_value(StructofStudent student[100])
{
	int value{}, counter{};
	
	std::cout << "\n\nPlease enter the value: ";
	std::cin >> value;

	if (!(0 <= value && value <= 100))
	{
		std::cout << "Please enter the value between 0 and 100: ";
		std::cin >> value;
	}

	for (int i = 0; i < 100; i++)
	{
		if (0 <= student[i].semestergrade && student[i].semestergrade < value)
		{
			counter++;
		}
	}

	std::cout << "\nThere are " << counter << " students with a grade below " << value << ". \n\n\n";
}




// Gives the number of students whose grades are above any given value.
void print_grade_greater_than_given_value(StructofStudent student[100])
{
	int value{}, counter{};

	std::cout << "\n\nPlease enter the value: ";
	std::cin >> value;

	if (!(0 <= value && value <= 100))
	{
		std::cout << "Please enter the value between 0 and 100: ";
		std::cin >> value;
	}

	for (int i = 0; i < 100; i++)
	{
		if (value < student[i].semestergrade && student[i].semestergrade <= 100)
		{
			counter++;
		}
	}

	std::cout << "\nThere are " << counter << " students with a grade above " << value << ". \n\n\n";
}





int main()
{
	srand(time(NULL));
	
	int choice{}, menuchoice{};

	L369:
	std::cout << "To enter students at random, press 1.\n";
	std::cout << "To manually enter students, press 2. ";

	std::cin >> choice;
	
	std::cout << "\n";
	
	
	

	switch (choice)
	{
		
	
		case 1:
		{
			
			// Random assignment of the student's name, surname, number, quiz grade, etc.
			// From the 1st to the 100th student; a name, surname, date of birth, and other grades are assigned at random.
			for (int i = 0; i < 100; i++)
			{
				
				student[i].name = NameList[rand() % 30];

				student[i].surname = SurnameList[rand() % 30];

				
				student[i].birthdate.day = rand() % 30 + 1;

				student[i].birthdate.month = rand() % 12 + 1;

				student[i].birthdate.year = rand() % (2005 - 1990) + 1990; // Generates a random number between 1990 and 2005.

				
				for (int r = 0; r < 100; r++)
				{

					student[r].id = rand() % 100000 + 10000;

					student[r].quiz1 = rand() % 100;
					student[r].quiz2 = rand() % 100;

					student[r].assignment1 = rand() % 100;
					student[r].assignment2 = rand() % 100;

					student[r].project = rand() % 100;

					student[r].midterm = rand() % 100;

					student[r].final = rand() % 100;

					// Mid-year and semester grades are calculated and assigned to the students based on the randomly assigned grades.
					student[r].midyeargrade = (student[r].midterm * 0.5) + 
											(student[r].quiz1 * 0.07) + 
											(student[r].quiz2 * 0.07) + 
											(student[r].assignment1 * 0.10) + 
											(student[r].assignment2 * 0.10) + 
											(student[r].project * 0.16);

					student[r].semestergrade = (student[r].midyeargrade * 0.55) + (student[r].final * 0.45);
					
				}
			}
             goto L497;
		}
		break;

		
		case 2:
		{
			std::cout << "------------------------------------------------------------------------------\n";
			
			// The names, surnames, and grades of 100 students are assigned by hand.
			for (int i = 0; i < 100; i++)
			{
				std::cout << "Enter the student #" << i + 1 << "'s name: ";
				std::cin >> student[i].name;
				

				std::cout << "Enter the student #" << i + 1 << "'s surname: ";
				std::cin >> student[i].surname;
				

				std::cout << "Enter the student #" << i + 1 << "'s ID Number: ";
				std::cin >> student[i].id;

				std::cout << "Enter the student #" << i + 1 << "'s day, month and year of birth respectively: ";
				std::cin >> student[i].birthdate.day >> student[i].birthdate.month >> student[i].birthdate.year;
				

				std::cout << "Enter the student #" << i + 1 << "'s 1st quiz grade: ";
				gradecheck(student[i].quiz1);
				

				std::cout << "Enter the student #" << i + 1 << "'s 2nd quiz grade: ";
				gradecheck(student[i].quiz2);
				

				std::cout << "Enter the student #" << i + 1 << "'s 1st assignment grade: ";
				gradecheck(student[i].assignment1);
				

				std::cout << "Enter the student #" << i + 1 << "'s 2nd assignment grade: ";
				gradecheck(student[i].assignment2);
				

				std::cout << "Enter the student #" << i + 1 << "'s midterm grade: ";
				gradecheck(student[i].midterm);
				

				std::cout << "Enter the student #" << i + 1 << "'s final grade: ";
				gradecheck(student[i].final);
				std::cout << "\n";

				
			}
	        goto L497;
		}
		break;

		
		default:
		{
			std::cout << "Error... Please enter again.\n\n\n"; goto L369;
		}
		
	
		L497:
		std::cout << "*************************************************************************************\n"
			    "To display the list of students, press 1.\n"
				"To display the highest grade in the class, press 2.\n"
				"To display the lowest grade in the class, press 3.\n"
				"To compute the mean of the class, press 4.\n"
				"To compute the standard deviation of the class, press 5.\n"
				"To print students whose grades fall within a given interval, press 6.\n"
				"To print students with grades lower than a certain value, press 7.\n"
				"To print students with grades greater than a certain value, press 8.\n"
				"To exit, press 9. ";

		

		std::cin >> menuchoice;
		
		
		switch (menuchoice)
		{
			
			case 1: displaylist(); goto L497; break;
			

			case 2: std::cout << "\nThe highest grade in the class: " << highestgrade(student) << "\n\n\n"; goto L497; break;
			
		
			case 3: std::cout << "\nThe lowest grade in the class: " << lowestgrade(student) << "\n\n\n"; goto L497; break;
			

			case 4: printmean(); goto L497; break;
			

			case 5: print_standard_deviation(); goto L497; break;
			

			case 6: print_grade_between_two_numbers(student); goto L497; break;
			 

			case 7: print_grade_lower_than_given_value(student); goto L497; break;
			

			case 8: print_grade_greater_than_given_value(student); goto L497; break;

		
			case 9: break;
			

			default: std::cout << "\nInvalid choice... Please enter a value 1 through 9.\n\n\n"; goto L497;
		}

	
	}
	

	return 0;
}