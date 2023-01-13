#include <iostream>
using namespace std;

int main() {
	int num[10], sum, avg;
	
	cout<<"Please enter the numbers: ";
	
	for (int i =0; i<10; i++){
	cin>>num[i];
	cout<<"Please enter the next number: ";
	}
		for (int i= 0; i<10; i++){
		 sum=sum +num[i];
		}
		cout<<"The summation is: "<<sum<<endl;
			for(int i=0; i<10; i++){
			 avg=(sum/10);
			 }
		cout<<"the average is: "<<avg;
			 
		}
	
	
    
	/*
    int array[5];
    int i, max, min;

    cout << "Enter size of the array: ";
    cin >> size;

    cout << "\nEnter " << size << " elements in the array: ";
    for (i = 0; i < size; i++)
        cin >> array[i];

    max = array[0];
    min = array[0];

    for (i = 1; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];

        if (array[i] < min)
            min = array[i];
    }

    cout << "\nMaximum element =" << max << "\n";
    cout << "Minimum element =" << min;
*/



#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;

int main()
{
    int A[20];

    // Seed the random number generator
    srand(time(0));

    // Fill the array with random numbers between -150 and 150
    for (int i = 0; i < 20; i++) {
        A[i] = (rand() % 300) - 150;
    }

    cout << "Even and negative numbers in the array: " << endl;
    for (int i = 0; i < 20; i++) {
        if (A[i] < 0 && A[i] % 2 == 0) {
            cout << A[i] << " ";
        }
    }

    return 0;
}


