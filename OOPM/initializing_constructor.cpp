#include<iostream>
using namespace std;
class Date{
    private: 
        int day;
        int month;
        int year;
    public:
        Date(){
            day = 1;
            month = 1;
            year = 2001;
        }
        void set_date(int d , int m , int y ){
            day = d;
            month = m ;
            year = y ;
        }
        void display_date(){
            cout<<"The date is : "<<day<<"/"<<month<<"/"<<year<<endl;
        }
};
int main(){
    Date d1;
    cout<<"By default "<<endl;
    d1.display_date();
    
    d1.set_date(31,4,2007);
    d1.display_date();
    return 0;
    
}
