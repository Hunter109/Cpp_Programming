#include<iostream>
using namespace std;
class c;
class b;
class a{
    int x;
    public:
    a(int x){
        this->x=x;
    }
    friend void max(a,b,c);

};
class b{
    int y;
    public:
    b(int y){
        this->y=y;
    }
    friend void max(a,b,c);
};
class c{
    int z;
    int w;
    public:
    c(int w, int z){
        this->w=w;
        this->z=z;
    }
    friend void max(a,b,c);
};
void max(a u, b w, c p){
    if (u.x>w.y && u.x>p.w && u.x>p.z)
    {
        cout<<"the maximum number is "<<u.x<<endl;
    }
    else if(w.y>u.x && w.y>p.w && w.y>p.z){
          cout<<"the maximum number is "<<w.y<<endl;
    }
     else if(p.w>u.x && p.w>w.y && p.w > p.z){
          cout<<"the maximum number is "<<p.w<<endl;
    }
    else{
        cout<<"the maximum number is "<<p.z<<endl;
    }
}

int main ()
{
    a a1(8);
    b b1(6);
    c c1(19,22);
    max(a1,b1,c1);


return 0;
}