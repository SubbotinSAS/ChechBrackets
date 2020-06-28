#include <iostream>
#include <cmath>

using namespace std;

double boo(double h){
    double y;
    y = pow(h,2);
    return y;
}

double(*func)(double h);

class Neuron{
public:
    int newn;
    double x[80];
    double w[80];
    double summ[80];
    double h = 0.0;
    double output;
    Neuron(int n, double (*func)(double)){
        newn = n;
        for(int i=0;i<newn;i++){
            cout<<"Enter X value"<<endl;
            cout<<"X"<<i<<": ";
            cin>>x[i];
            cout<<"Enter W value"<<endl;
            cout<<"W"<<i<<": ";
            cin>>w[i];
            summ[i] = x[i]*w[i];
        }
        for(int p=0;p<newn;p++){
            h += summ[p];
        }
        output = boo(h);
    };
    Neuron(const Neuron &other)
    {
        this->newn = other.newn;
        for(int o=0;o<newn;o++){
        this->x[o] = other.x[o];
        this->w[o] = other.w[o];
        this->summ[o] = other.summ[o];
        }
        this->h = other.h;
        this->output = other.output;
    }
void leee(){
    cout<<h<<endl;
    output = boo(h);
    cout<<"Y="<<output<<endl;
}
Neuron & operator = (const Neuron &other)
{
    this->newn = other.newn;
    if(this->x!=nullptr){
        delete[] this->x;
    }
    if(this->w!=nullptr){
        delete[] this->w;
    }
    if(this->summ!=nullptr){
        delete[] this->summ;
    }
    if(this->h!=0.0){
        this->h = 0.0;
    }
    if(this->output!=0.0){
        this->output = 0.0;
    }
    for(int u=0;u<newn;u++){
        this->x[u] = other.x[u];
        this->w[u] = other.w[u];
        this->summ[u] = other.summ[u];
        }
        this->h = other.h;
        this->output = other.output;
    return *this;
}
    ~Neuron()
    {
        delete[]x;
        delete[]w;
        delete[]summ;
    }
};

int main()
{
    int n;
    cout << "Inputs count: ";
    cin>>n;
    Neuron a(n,boo);
    Neuron b(n,boo);
    b.leee();
    Neuron c(n,boo);
    c.leee();
    b = c = a;
    cout<<b.h<<endl;
    cout<<b.output<<endl;
    return 0;
}
