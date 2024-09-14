/*  create a class 'cricketer' that contains name of cricketer, his age, number of matches he played and his average runs.
    create an array of datatype 'cricketer' to hold 'n' such cricketers and then write a program to read these records.
*/


#include <bits/stdc++.h>
using namespace std;


class cricketer{
    private:
    string name;
    int age;
    int matches;
    int avg_runs;

    public:
        //  setters......
    void set_name(string name){
        this->name = name;
    }

    void set_age(int age){
        this->age = age;
    }

    void set_matches(int matches){
        this->matches = matches;
    }

    void set_avg_runs(int avg_runs){
        this->avg_runs = avg_runs;
    }

        //  getters......
    string get_name(){
        return name;
    }

    int get_age(){
        return age;
    }

    int get_matches(){
        return matches;
    }

    int get_avg_runs(){
        return avg_runs;
    }

};


int main(){

    int n;
    cout<<"Enter the no. of players you want in a team : ";
    cin>>n;
    cout<<endl;

    vector <cricketer> team;

    //  taking data..........

    for (int i=0; i<n; i++){
        cricketer *crick = new cricketer;       //  dynamic memory allocation........
        string name;
        int age;
        int matches;
        int avg_runs;

        cout<<"Enter the data for player "<<i+1<<endl;

        cout<<"Enter name : ";
        cin>>name;
        crick->set_name(name);

        cout<<"Enter age : ";
        cin>>age;
        crick->set_age(age);

        cout<<"Enter matches : ";
        cin>>matches;
        crick->set_matches(matches);

        cout<<"Enter avg_runs : ";
        cin>>avg_runs;
        crick->set_avg_runs(avg_runs);

        team.push_back(*crick);                 //  finally pushing it in the vector.

        cout<<endl;

    }

    cout<<"***************************************************************************************************************************************"<<endl<<endl;


    //  showing data........

    for (int i=0; i<n; i++){

        cout<<"The data for player "<<i+1<<" is as follows :-"<<endl;

        cout<< "Name : "<< team[i].get_name() <<endl;
        cout<< "Age : "<< team[i].get_age() <<endl;
        cout<< "Matches : "<< team[i].get_matches() <<endl;
        cout<< "Average runs : "<< team[i].get_avg_runs() <<endl;

        cout<<endl;
    }


    return 0;
}