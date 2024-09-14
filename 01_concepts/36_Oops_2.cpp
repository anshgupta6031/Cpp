                                                    //  Getters and setters



#include <bits/stdc++.h>
using namespace std;


class player{

    private:        //  while programming it is advised to define all the variables under private so that it does not get altered from outside anyhow.
    int score;
    int health;


    public:                     //  the functions under public can access the variables under private as they are in the same class and are not accessed from outside.

        //  defining setters.......

    void set_score(int score){                 //  accessing score through member function.....
        player :: score = score;              //    here '::' is known as scope resolution operator, and 'player :: score' refers to the score variable of the player class which is private.
    }

    void set_health(int health){
        this->health = health;                  //  here, 'this->health' refers to the health variable of the player class which is private.
    }


        //  defining getters........

    int get_score(){
        return score;
    }

    int get_health(){
        return health;
    }

};


int add_score(player a, player b){          //  passing class into a function........
    return a.get_score() + b.get_score();
}


player max_score(player a, player b){           //  returning class from a function.......
    if (a.get_score() > b.get_score()) return a;
    else return b;
}


int main(){

    player ansh;                    //  static(compile time) memory allocation.........
    ansh.set_score(20);         //  ansh.score = 20;  will not work as the the member score is private. So, to access the member score, a setter function is made to access the member score.
    ansh.set_health(100);       //  the same applies with member health....

    cout<< ansh.get_score() <<endl;         //  cout<< ansh.score;   will not work as the the member score is private. So, to access the member score, a getter function is made to access the member score.
    cout<< ansh.get_health() <<endl<<endl;        //  the same applies with member health....


    player *guru = new player;        //  dynamic(run time) memory allocation.........
    (*guru).set_score(70);
    guru->set_health(80);               //  '(*guru).set_score()' and 'guru->set_score()' do the same thing.


    cout <<"Added score of guru and ansh is : "<< add_score(ansh, *guru) <<endl<<endl;


    player temp = max_score(ansh, *guru);
    cout <<"The maximum score is : " << temp.get_score()<<endl<<endl;


    return 0;
}