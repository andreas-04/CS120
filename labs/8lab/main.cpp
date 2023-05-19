/*
Andreas neacsu
oct 21
lab #8
*/
#include <iostream>
#include <fstream>

double highestTemp(double [], int);
double lowestTemp(double [], int);
double avgHighTemp(double [], int);
double avgLowTemp(double [], int);
double avgChangeInSnowDepth(double [], int);

int main()
{
    double index[31];
    double high[31];
    double low[31];
    double inchsRain[31];
    double newSnow[31];
    double snowDepth[31];

    std::ifstream infile;
    infile.open("weather.txt");

    for(int i = 0; i < 31; i++)
    {
        infile >> index[i];
        infile >> high[i];
        infile >> low[i];
        infile >> inchsRain[i];
        infile >> newSnow[i];
        infile >> snowDepth[i];
    }
    std::cout <<"The highest temprature was " << highestTemp(high, 31) << " degrees\n";
    std::cout <<"The lowest temprature was " << lowestTemp(low, 31) << " degrees\n";
    std::cout <<"The average daily temp was " << avgHighTemp(high, 31) << " degrees\n";
    std::cout <<"The average daily low temp was " << avgLowTemp(low, 31) << " degrees\n";
    std::cout <<"The average change in snow depth was " << avgChangeInSnowDepth(snowDepth, 31) << " inches\n";


}
double highestTemp(double *arr, int size)
{
    double highestTemp = arr[0];
    for( int i = 0; i < size; i++)
    {
        if(arr[i] > highestTemp){highestTemp = arr[i];}
    }
    return highestTemp;
}

double lowestTemp(double *arr, int size)
{
    double lowestTemp = arr[0];
    for( int i = 0; i < size; i++)
    {
        if(arr[i] < lowestTemp){lowestTemp = arr[i];}
    }
    return lowestTemp;
}

double avgHighTemp(double *arr, int size)
{
    double sum;
    for(int i =0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

double avgLowTemp(double *arr, int size)
{
    double sum;
    for(int i =0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}
double avgChangeInSnowDepth(double *arr, int size)
{
    double sum;
    for(int i =0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}