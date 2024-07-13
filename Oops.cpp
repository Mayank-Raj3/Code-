
#include<bits/stdc++.h>
using namespace std;
#define int                           long long
#define ll                               long long
#define ld                               long double
#define nline                          "\n"
#define ff                               first
#define ss                            second
#define pb                            push_back
#define all(var)                      var.begin(), var.end()
#define sz(x) (                       (int)(x).size())
#define jay_shri_ram                  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define rall(x)                       (x).rbegin(), (x).rend()

//debugger
#ifndef ONLINE_JUDGE
#define db(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define db(x)
#endif
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V>
void _print(pair <T, V> p) { cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}"; } template <class T> void _print(vector <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; } template <class T> void _print(set <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; } template <class T> void _print(multiset <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; } template <class T, class V> void _print(map <T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }
/*{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}*/



/*{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}*/

// Inheritance
class Person {
// private:
//     string name_;
//     int age_ ;

public :
    string name_;
    int age_ ;
    Person() {
        cout << "constructor called " << nline;
        name_ = "";
        age_ = 0;
    }

    ~Person() {
        cout << "destructor called " << nline;
    }

    Person(string name , int age) {
        name_ = name;
        age_ = age;
    }
    /*
        Person(string name , int age = 2) {
            name_ = name;
            age_ = age;
        }
    */

    // Getter-Setter pattern : better to do with constructor
    void setPersonDetail(string name , int age) {
        name_ = name;
        age_ = age;
    }
    void getPersonDetail() {
        cout << name_ << " " << age_ << nline;
    }



    int add(int a  , int b , int c ) {
        return a + b + c ;
    }

    /*
    int add(int a  , int b , int c = 10 ) {
        return a + b + c;
    } // gives error we cant do this
    */

    int add(int a , int b = 10 ) {
        return a + b ;
    }

};

class Employee : public Person {
// private:
//     string company_;
//     int id_ ;
public:
    string company_;
    int id_ ;

    void getEmployeeDetailes() {
        cout << company_ << " " << id_ << " " << name_ << " " << age_ << nline;
    }

};
/*{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}*/
class Base {
public:
    Base(int a) : a_(a) {}
protected:
    int a_;
};

struct Derived : public Base {
public:
    Derived(int a, int b) : Base(a), b_(b) {}
    void print() {
        cout << a_ << " " << b_ << nline;
    }
    int b_;
};

// class Derived2: public Derived {
// public:
//     Derived2(int a, int b) : Derived(a, b) {}
//     void print() {
//         cout << a_ << " " << b_ << nline;
//     }
// };


/*{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}*/
// constructor member initiazer list
class A {
private:
    string a_ , b_ ;
public:
    A(string a , string b): a_(a), b_(b) {} //member initiazer list
    void getDetailsInA() {
        cout << a_ << " " << b_ << nline;
    }

};

/*{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}*/

class Animal {
public:
    virtual void sound() {
        cout << "NO SOUND" << nline;
    }
};
class Cat : public Animal {
    void sound() {
        cout << "Mew" << nline;
    }
};

class Dog : public Animal {
    void sound() {
        cout << "Bhow Bhow" << nline;
    }
};

void playSound(Animal &ani) {
    ani.sound();
}
void solve() {

    // Person p ;
    // cout << p.add(1, 4) << nline ; //constructor called
    // Inheritance Employe IS-A Person

    // Employee e ;
    // e.getPersonDetail();

    // A a1("Hellow" , "mayank") ;
    // a1.getDetailsInA();

    // Derived d(1, 2);
    // d.print();

    // int a = 10 ;
    // int *b  = &a ;
    // cout << *b << nline;


    Cat c;
    playSound(c);


}
// destructor called here



int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    jay_shri_ram;
    solve();
}
/*----------------------------------EndsHere----------------------------------*/

