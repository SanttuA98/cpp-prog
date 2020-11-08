#include <iostream>
#include <set>
#include <algorithm>
#include <cstring>
using namespace std;

const int SIZE=5;
const int LEN=30;

void print(const string& item)
{
    cout << item << endl;
}

int main()
{

    char names[SIZE][LEN];
int i, j;
    for(i=0; i<SIZE; i++){
         cout<<"Please enter "<<(i+1)<<". name: ";
         cin.getline(names[i], LEN, '\n');

    }

  char temp[LEN];
    for(i=0; i<SIZE-1; i++)
     for(j=i+1; j<SIZE; j++){
          if(strcmp(names[i], names[j])==1){
               strcpy(temp, names[i]);
               strcpy(names[i], names[j]);
               strcpy(names[j], temp);

          }


     }


  for(i=0; i<SIZE; i++){
     cout<<names[i]<<endl;
  }
    


/*
    set<string> sortedItems;

    for(int i = 1; i <= SIZE; ++i)
    {
        string name;
        cout << i << ". ";
        cin >> name;

        sortedItems.insert(name);
    }

    for_each(sortedItems.begin(), sortedItems.end(), &print);
 
 
 */
    return 0;
}