#include<iostream>
using namespace std;

class Complex{
    private:
        float real;
        float img;
    public:
    
    Complex (){
        real = 0;
        img = 0;
    }
    Complex (int r , int i){
        real = r;
        img = i;
    }
    
    void display() {
        cout << real << " + " << img << "i" << endl;
    }
    
    Complex addComplex(Complex c1, Complex c2);
        
};
Complex Complex :: addComplex(Complex c1, Complex c2){
            Complex c3;
            c3.real = c1.real + c2.real;
            c3.img = c1.img + c2.img;
            return c3;
            
        }
int main(){
    Complex c1(1,2);
    Complex c2(1,2);
    Complex c3;
    Complex sum = c3. addComplex(c1,c2);
    sum.display();
    return 0;
}
