#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        
        */
        // Write your constructor here
Student(string firstName, string lastName, int identification, vector<int> scores)
            : Person(firstName, lastName, identification), testScores(scores) {}
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
char calculate() {
            int sum = 0;
            int n = testScores.size();
            for (int i = 0; i < n; i++) {
                sum += testScores[i];
            }
            int avg = sum / n;
            if (avg >= 90 && avg <= 100) {
                return 'O';
            } else if (avg >= 80 && avg < 90) {
                return 'E';
            } else if (avg >= 70 && avg < 80) {
                return 'A';
            } else if (avg >= 55 && avg < 70) {
                return 'P';
            } else if (avg >= 40 && avg < 55) {
                return 'D';
            } else {
                return 'T';
            }
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}

/*
In the Student class constructor, we take in the necessary parameters and call the constructor of the Person class using Person(firstName, lastName, identification). We also initialize the testScores vector using testScores(scores).

In the calculate method, we calculate the average score by summing up all the test scores and dividing by the number of test scores. We then use if-else statements to determine the appropriate letter grade based on the average score, and return the corresponding character.





*/
