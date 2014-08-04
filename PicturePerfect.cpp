#include <iostream>
using namespace std;

int main()
{
	int pic = 0;
	int temp;
	int a;
	int b;

	
	cout << "Enter number of pictures: "<< endl;
	cin >> pic;
		
	int per = 2 * (pic + 1);
			
	for (int i = 1; i <= pic; i++)
	{
		for (int j = 1; j <= pic; j++)
		{ 					
			if ((pic % j == 0) && (i * j == pic)) // Takes factors of pic
			{
				temp = 2 * (i + j);	
							
				if (temp < per) // Replaces old perimeter if new perimeter is smaller
				{
					per = temp;
					a = i;
					b = j;
				}		
			}
		}
	}
	
	cout << per << endl;
	
	cout << a << " x " << b << endl; 
	
	return 0;
}
