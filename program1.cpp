#include <iostream>
#include <cmath>
using namespace std;

class complexe {
    double Re;
    double Img;

public:
    complexe(double a = 0, double b = 0)
    {
        Re = a;
        Img = b;
    }
    void afficher()
    {
    	cout << Re;
    	
    	//Pour ne pas afficher 4 + -5i (si Img est negatif)
        if (Img >= 0)
            cout << " + ";
            
        cout << Img << "i" << endl;
    }
    double module()
    {
        return sqrt(Re * Re + Img + Img);
    }
    complexe conjugue()
    {
        complexe k;
        k.Re = Re;
        k.Img = -Img;
        return k;
    }
    //Opérateur : complexe + complexe
    complexe operator+(complexe a)
    {
        complexe s;
        s.Re = Re + a.Re;
        s.Img = Img + a.Img;
        return s;
    }
    //Opérateur : complexe + double
    complexe operator+(double x)
    {
        complexe s;
        s.Re = Re + x;
        s.Img = Img;
        return s;
    }
    //Opérateur : complexe - complexe
    complexe operator-(complexe a)
    {
        complexe s;
        s.Re = Re - a.Re;
        s.Img = Img - a.Img;
        return s;
    }
    //Opérateur : complexe * complexe
    complexe operator*(complexe a)
    {
        complexe p;
        p.Re = Re * a.Re - Img * a.Img;
        p.Img = Re * a.Img + Img * a.Re;
        return p;
    }
    //Même principe pour la division (utiliser le conjugé)
    
    //Opérateur : double + complexe
friend complexe operator+(double, complexe);
};
complexe operator+(double x, complexe a)
{
    complexe s;
    s.Re = a.Re + x;
    s.Img = a.Img;
    return s;
    
   
}
int main()
{
    complexe a(2, 3), b(6, 4), k;
    cout << "Complexe A = ";
    a.afficher();
    cout << "Le module de A est : " << a.module() << endl;
    cout << "Le conjugue de A est : ";
    a.conjugue().afficher();
    
    cout << "A = ";
    a.afficher();
    cout << "B = ";
    b.afficher();
    
    cout << "A + B = ";
    k = (a + b);
	k.afficher();
    
    cout << "A + 12 = ";
    k = (a + 12);
	k.afficher();
    
    cout << "8 + A = ";
    k = (8 + a);
	k.afficher();
    
    cout << "A * B = ";
    k = (a * b);
	k.afficher();
    
    cout << "B - A = ";
    k = (b - a);
	k.afficher();
}
