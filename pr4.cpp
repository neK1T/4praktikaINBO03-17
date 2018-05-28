#include <iostream>
using namespace std;
void mass(int *x,int b){
	x= new int[b];
}
void sort(int *mas)
{
    int b;
    for (int i = 0; i <= 12;i++)
    {
        if ((mas[i] % 2 != 0) && (mas[i + 1] % 2 == 0))
        {
            b = mas[i];
            mas[i] = mas[i + 1];
           mas[i + 1] = b;
        }
    }
}
int main()
{
int size;
int *arr;
mass(arr,12);
for (int i=0;i<12;i++)
{
	cout << "Enter value " << i+1 << " ";
	cin >> arr[i];
}
sort(arr);
for (int i=1;i<13;i++){
	cout << "x["<< i << "]  =  " << arr[i]  << "    " << endl;
}	
	delete [] arr;
return 0;
}
