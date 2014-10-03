#include <cstdlib>
#include <iostream>
#include <vector>


void messUpArray(int[],int);
void printArray(int[],int);
void bubbleSort(int[],int);//works
void insertionSort(int[],int);
void selectionSort(int[],int);//works
void bucketSort(int[],int,int);

int main()
{
     int sortMeBitches[30];
     messUpArray(sortMeBitches,30);
     printArray(sortMeBitches,30);
     //bubbleSort(sortMeBitches,30);
     insertionSort(sortMeBitches,30);
     //selectionSort(sortMeBitches,30);
     printArray(sortMeBitches,30);
     return 0;
}

void messUpArray(int toScrew[],int length)
{
     for(int i=0;i<length;i++)
     {
          toScrew[i] = rand()%100;
     }
}

void printArray(int toPrint[],int length)
{
     for(int counter = length-1; counter>=0; counter--)
     {
          std::cout<<toPrint[counter]<<',';
     }
     std::cout<<std::endl;
}

void bubbleSort(int toSort[],int length)
{
     int holder;
     bool somethingDone;

     do
     {
          somethingDone = false;
          for(int i = 1; i< length; i++)
          {
               if(toSort[i-1]<toSort[i])
               {
                    holder = toSort[i-1];
                    toSort[i-1] = toSort[i];
                    toSort[i] = holder;
                    somethingDone = true;
               }
          }
     }while(somethingDone);
}

void insertionSort(int toSort[], int length)
{
     int number, whileCounter;
     for (int counter = 1; counter < length; counter++)
     {
          //number = toSort[counter];
          whileCounter = counter;
          while(whileCounter>0 && toSort[whileCounter-1]>toSort[whileCounter])
          {
               number = toSort[whileCounter];
               toSort[whileCounter] = toSort[whileCounter-1];
               toSort[whileCounter-1] = number;
               whileCounter--;
          }
          //toSort[whileCounter] = number;
     }
}

void selectionSort(int toSort[], int length)
{
     int minimum,holder;
     for(int counter = 0
     ; counter < length; counter++)
     {
          minimum = counter;
          for(int secondCount = counter+1; secondCount<length;secondCount++)
          {
               if(toSort[secondCount]<toSort[minimum])
               {
                    minimum = secondCount;
               }
          }
          if(minimum!= counter)
          {
               holder = toSort[minimum];
               toSort[minimum] = toSort[counter];
               toSort[counter]=holder;
          }
     }
}

void bucketSort(int toSort[], int length, int numOfBuckets)
