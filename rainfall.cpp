#include"rainfall.h"



void getData(double rainfalls[num]) 
{
	  //int i = 0;
	  //do
	  //{
		//i++;
		//cout << "Enter  rainfall of " << month[i] << endl;
		//cin >> rainfalls[i];
	//}while ((i < num && isdigit(rainfalls[i]))
	
		for (int i = 0; i < num; i++)
		{
			cout << "Enter  rainfall of " << month[i] << endl;
			
			cin >> rainfalls[i];
			if (!cin)
			{
				throw string("Error");
				

			}
		}
	
}
//function to calculate the total rainfall
double totalRainfall(double rainfalls[num])
{
	double sum = 0;
	for (int i = 0; i < num; i++) 
	{
		sum += rainfalls[i];
	}
	return sum;
}
//function to calculate the average rainfall
double average(double rainfalls[num])
{
	double sum, average;
	sum = totalRainfall(rainfalls);
	average = sum / num;
	return average;

}
//function returning the index of the wettest month 
int wettestMonth(double rainfalls[num])
{
	int index1 = 0;
	double min = *rainfalls;
	for (int i = 0; i < num; i++)
	{
		if (min < rainfalls[i])
		{
			min = rainfalls[i];
			index1 = i;
		}
	}
	return index1;
}
//function returning the index of the driest month 
int driestMonth(double rainfalls[num])
{
	int index =0;
	double max = *rainfalls;
	for (int j = 0; j < num; j++)
	{
		if (max > rainfalls[j])
		{
			max = rainfalls[j];
			index = j;
		}
	}
	return index;
}
//display function
void display(double rainfalls[num])
{
	int wet = wettestMonth(rainfalls);
	int dry = driestMonth(rainfalls);
	// cout << "Total rainfall: " << totalRainfall(rainfalls) << " inches" << endl;;
	// cout <<"Average Monthly rainfall "<<average(rainfalls)<<" inches"<<endl;
	// cout <<"The most rain fell in " <<month[wet]<<" with "<< rainfalls[wet]<<" inches"<<endl;
	// cout << "The least rain fell in "<<month[dry]<< " with " << rainfalls[dry]<<" inches"<<endl;
  ofstream printData;
  printData.open("data.txt", ios::out);
  printData<<"Total rainfall: " << totalRainfall(rainfalls) << " inches" << endl;
  printData<<"Average Monthly rainfall "<<average(rainfalls)<<" inches"<<endl;
  printData<<"The most rain fell in " <<month[wet]<<" with "<< rainfalls[wet]<<" inches"<<endl;
  printData<< "The least rain fell in "<<month[dry]<< " with " << rainfalls[dry]<<" inches"<<endl;
  printData.close();// close the file
}