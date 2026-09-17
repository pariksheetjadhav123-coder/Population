#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<string,long long>statePopulation;
    statePopulation["Maharashtra"] = 12900000000;
    statePopulation["Gujrat"] = 120000000;
    statePopulation["Karnatak"] = 7600000;
    statePopulation["Rajasthan"] = 45000000;
    statePopulation["Tamil Nadu"] = 344440000;
    statePopulation["Uttar Pradesh"] = 4500000;
    statePopulation["Madhya Pradesh"] = 4600000;

    string stateName;
    cout<<"Enter the name of state :";
    getline(cin,stateName);
    map<string, long long>::iterator it = statePopulation.find(stateName);
    if(it != statePopulation.end())
    {
        cout<<"Population of"<<stateName<<"="<<it->second<<endl;
        
    }
    else
    {
        cout<<"State is Not found in the Map"<<endl;
    }
    return 0;
}
