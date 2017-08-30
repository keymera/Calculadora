#include <cstdlib>
#include <iostream>
 
using namespace std;
 
float sumar(float,float);
float restar(float, float);
float multiplicar(float, float);
float dividir(float,float);
 
typedef float (*tfunc)(float,float);
 
int main(int argc, char *argv[])
{
    char signo, operador[]={'+','-','*','/'};
    float a,b,z;
    cout<<"Que operacion matematica quieres hacer?"<<endl;
    cin>>a>>signo>>b;
 
    tfunc *func;
    func = new tfunc[4];
 
    func[0]=sumar;
    func[1]=restar;
    func[2]=multiplicar;
    func[3]=dividir;
 
    for (int i=0;i<4;i++){
      if (signo==operador[i]){
        z=func[i](a,b);}}
    cout<<"El resultado es: "<<z<<endl;
 
    delete(func);
 
    system("PAUSE");
    return EXIT_SUCCESS;
}
 
float sumar(float a,float b){
    return a+b;}
 
float restar(float a,float b){
    return a-b;}
 
float multiplicar(float a,float b){
    return a*b;}
 
float dividir(float a,float b){
    return a/b;}
