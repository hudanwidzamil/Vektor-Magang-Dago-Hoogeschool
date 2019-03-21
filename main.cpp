#include <iostream>
using namespace std;

class vektor {
public:
    vektor(int a,int b){
        x=a;
        y=b;
    }
    vektor(){
    }
    void print(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    vektor tambah(vektor d){
        x=d.x+x;
        y=d.y+y;
        return vektor(x,y);
    }
    vektor kali(int c){
        int xtemp=c*x;
        int ytemp=c*y;
        x=xtemp;
        y=ytemp;
        return vektor(x,y);
    }
    vektor copy(vektor e){
        x=e.x;
        y=e.y;
        return vektor(x,y);
    }
    vektor project(vektor z){
        int a;
        int b;
        a=((x*z.x+y*z.y)/(z.x*z.x+z.y*z.y))*z.x;
        b=((x*z.x+y*z.y)/(z.x*z.x+z.y*z.y))*z.y;
        return vektor(a,b);
    }
    int x;
    int y;
};

vektor tambah(vektor V1,vektor V2);
void swapvektor(vektor &V1,vektor &V2);
int main() {
    vektor V1(1,3);
    vektor V2(7,2);
    vektor V3=tambah(V1,V2);
    V3.print();
    V1.kali(2);
    V1.print();
    vektor V4=V3.tambah(V1);
    V4.print();
    V1.copy(V4);
    V1.print();
    vektor V5=V4.project(V2);
    V5.print();
    swapvektor(V1,V2);
    V1.print();
    V2.print();
    return 0;
}
vektor tambah(vektor V1,vektor V2){
    vektor hasil;
    hasil.x=V1.x+V2.x;
    hasil.y=V1.y+V2.y;
    return hasil;
}

void swapvektor(vektor &V1, vektor &V2) {
    vektor temp;
    temp.x=V1.x;
    temp.y=V1.y;
    V1.x=V2.x;
    V1.y=V2.y;
    V2.x=temp.x;
    V2.y=temp.y;
};
