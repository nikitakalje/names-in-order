#include <iostream>

using namespace std;
void PrintNamesInOrder(string names[], int nNames);
void PrintNamesStartingWith(string names[], int nNames, char letter);

int main()
{

  string names[6]={"Tim", "Jill", "June", "Tony", "Tina", "Bob"};

    cout<<"Names: ";
    for(int i=0; i<6; i++)
    {
      cout<<names[i]<< " ";
    }
    cout<<endl;
  int num=6;
  PrintNamesInOrder(names,num);

  return 0;
}
void PrintNamesInOrder(string names[], int nNames)
{
  cout<<"Print names in order: "<<endl;
  for(int i=65; i<90; i++)
  {
    PrintNamesStartingWith(names, nNames, i);
  }

}
void PrintNamesStartingWith(string names[], int nNames, char letter)
{

  for(int i=0; i<nNames; i++)
  {
    if(names[i].at(0)==letter)
    {
      cout<<names[i]<<endl;
    }
  }
}
