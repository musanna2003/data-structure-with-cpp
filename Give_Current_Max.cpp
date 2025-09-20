#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int marks;
    Student (string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp {
    public:
    bool operator()(Student l, Student r){
        if (l.marks < r.marks) return true;
        else if (l.marks == r.marks) {
            if (l.roll > r.roll) return true;
            else return false;
        }
        else return false;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue <Student,vector<Student>,cmp> pq;
    for (int i = 0; i < n; i++){
        string n;
        int r;
        int m;
        cin >> n >> r >> m;
        Student s(n,r,m);
        pq.push(s);
    }

    int test;
    cin >> test;
    for (int t = 0; t < test; t++){
        int qry;
        cin >> qry;
        if (qry == 0){
            string n;
            int r;
            int m;
            cin >> n >> r >> m;
            Student s(n,r,m);
            pq.push(s);
            if(!pq.empty()) cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else {
                cout << "Empty" << endl;
            }
        }
        else if (qry == 1){ 
            if(!pq.empty()) cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else {
                cout << "Empty" << endl;
            }
        }
        else if (qry == 2){
            if(!pq.empty()){
                pq.pop();
                if(!pq.empty()) cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                else {
                    cout << "Empty" << endl;
                }
            }
            else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}