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

