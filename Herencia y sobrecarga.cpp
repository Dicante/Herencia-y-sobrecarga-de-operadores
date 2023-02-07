//Jose Julian Dicante Rivera

#include <iostream>
#include <string.h>

using namespace std;

class Mamifero
{
    protected:
        int nacimiento;
        string lugar_nacimiento;  

    protected:
    public:
        Mamifero(int n, string ln): nacimiento(n), lugar_nacimiento(ln){}

        void imprimir_nacimiento()
        {
            cout<<"Anio de nacimiento: "<<nacimiento<<endl<<"lugar de nacimiento: "<<lugar_nacimiento<<endl;
        }

        //Operadores

        friend Mamifero operator + (Mamifero a, Mamifero b)
        {
            return Mamifero(a.nacimiento + b.nacimiento, a.lugar_nacimiento + b.lugar_nacimiento);
        }

        bool operator == (const Mamifero &a)
        {
            if (nacimiento == a.nacimiento && lugar_nacimiento == a.lugar_nacimiento)
            {
                return true;
            }
            return false;
        }

        bool operator != (const Mamifero &a)
        {
            if (nacimiento != a.nacimiento || lugar_nacimiento != a.lugar_nacimiento)
            {
                return true;
            }
            return false;
        }

        bool operator < (const Mamifero &a)
        {
            if (nacimiento < a.nacimiento)
            {
                return true;
            }
            return false;
        }

        bool operator > (const Mamifero &a)
        {
            if (nacimiento > a.nacimiento)
            {
                return true;
            }
            return false;
        }
};

class Felino : public Mamifero
{
    protected:
        string dieta;
        string raza;
        string circo;

    protected:
    public:
        Felino(int n, string ln, string d, string r, string c): Mamifero(n, ln), dieta(d), raza(r), circo(c){}
        
        void imprimir_dieta()
        {
            cout<<"Su dieta es: "<<dieta<<endl;
        }
        
        void imprimir_raza()
        {
            cout<<"La raza es: "<<raza<<endl;
        }

        void cambiar_circo(string nuevo_circo)
        {
            circo = nuevo_circo;
            cout<<"Nombre del circo cambiado!"<<endl;
        }

        //Operadores

        friend Felino operator + (Felino a, Felino b)
        {
            a.nacimiento += b.nacimiento;
            a.lugar_nacimiento += b.lugar_nacimiento;
            a.dieta += b.dieta;
            a.raza += b.raza;
            a.circo += b.circo;
            return Felino(a);
        }

        bool operator == (const Felino &a)
        {
            if (nacimiento == a.nacimiento && lugar_nacimiento == a.lugar_nacimiento && dieta == a.dieta && raza == a.raza && circo == a.circo)
            {
                return true;
            }
            return false;
        }

        bool operator != (const Felino &a)
        {
            if (nacimiento != a.nacimiento || lugar_nacimiento != a.lugar_nacimiento || dieta != a.dieta || raza != a.raza || circo != a.circo)
            {
                return true;
            }
            return false;
        }

        bool operator < (const Felino &a)
        {
            if (nacimiento < a.nacimiento && lugar_nacimiento < a.lugar_nacimiento && dieta < a.dieta && raza < a.raza && circo < a.circo)
            {
                return true;
            }
            return false;
        }

        bool operator > (const Felino &a)
        {
            if (nacimiento > a.nacimiento && lugar_nacimiento > a.lugar_nacimiento && dieta > a.dieta && raza > a.raza && circo > a.circo)
            {
                return true;
            }
            return false;
        }
};

class GatoDomestico : public Felino
{
    protected:
        string dueno;

    protected:
    public:
        GatoDomestico(int n, string ln, string d, string r, string c, string due): Felino(n, ln, d, r, c), dueno(due){}

        void cambiar_dueno(string nuevo_dueno)
        {
            dueno = nuevo_dueno;
            cout<<"Duenio cambiado!"<<endl;
        }

        //Operadores

        friend GatoDomestico operator + (GatoDomestico a, GatoDomestico b)
        {
            a.nacimiento += b.nacimiento;
            a.lugar_nacimiento += b.lugar_nacimiento;
            a.dieta += b.dieta;
            a.raza += b.raza;
            a.circo += b.circo;
            a.dueno += b.dueno;
            return GatoDomestico(a);
        }

        bool operator == (const GatoDomestico &a)
        {
            if (nacimiento == a.nacimiento && lugar_nacimiento == a.lugar_nacimiento && dieta == a.dieta && raza == a.raza && circo == a.circo && dueno == a.dueno)
            {
                return true;
            }
            return false;
        }

        bool operator != (const GatoDomestico &a)
        {
            if (nacimiento != a.nacimiento || lugar_nacimiento != a.lugar_nacimiento || dieta != a.dieta || raza != a.raza || circo != a.circo || dueno == a.dueno)
            {
                return true;
            }
            return false;
        }

        bool operator < (const GatoDomestico &a)
        {
            if (nacimiento < a.nacimiento && lugar_nacimiento < a.lugar_nacimiento && dieta < a.dieta && raza < a.raza && circo < a.circo && dueno < a.dueno)
            {
                return true;
            }
            return false;
        }

        bool operator > (const GatoDomestico &a)
        {
            if (nacimiento > a.nacimiento && lugar_nacimiento > a.lugar_nacimiento && dieta > a.dieta && raza > a.raza && circo > a.circo && dueno > a.dueno)
            {
                return true;
            }
            return false;
        }
};




int main()
{
    GatoDomestico Minino(2012, "Guadalajara", "Salmon", "Gato azul ruso", "", "Alex");
    Felino EstellaCirco(2016, "Monterrey", "Atun", "Gato kohana", "Circo hooley");

    int opc;
    string aux;

    do
    {
        system("cls");
        cout<<"Elija una opccion:"<<endl<<endl;
        cout<<" 1. Imprimir la dieta de Minino y de EstrellaCirco"<<endl;
        cout<<" 2. Imprimir el ano y lugar de nacimiento de Minino y de EstrellaCirco"<<endl;
        cout<<" 3. Cambiar el nombre del dueno de Minino"<<endl;
        cout<<" 4. Imprimir la raza de Minino y de EstrellaCirco"<<endl;
        cout<<" 5. Cambiar el nombre del circo en el que actua EstrellaCirco"<<endl;
        cout<<" 6. Salir"<<endl<<" : "; 
        cin>>opc;   

        switch (opc)
        {
            case 1:
                system("cls");
                cout<<"Imprimir la dieta de Minino y de EstrellaCirco"<<endl<<endl;
                cout<<"Minino, ";
                Minino.imprimir_dieta();
                cout<<"EstrellaCirco, ";
                EstellaCirco.imprimir_dieta();
                system("pause");
            break;
            case 2:
                system("cls");
                cout<<"Imprimir el ano y lugar de nacimiento de Minino y de EstrellaCircoo"<<endl<<endl;
                cout<<"Minino, ";
                Minino.imprimir_nacimiento();
                cout<<"EstrellaCirco, ";
                EstellaCirco.imprimir_nacimiento();
                system("pause");
            break;
            case 3:
                system("cls");
                cout<<"Imprimir el ano y lugar de nacimiento de Minino y de EstrellaCircoo"<<endl<<endl;
                cout<<"Ingrese el nuevo dueno de Minino: ";
                fflush(stdin);
                getline(cin, aux);
                Minino.cambiar_dueno(aux);
                system("pause");
            break;
            case 4:
                system("cls");
                cout<<"Imprimir la raza de Minino y de EstrellaCirco"<<endl<<endl;
                cout<<"Minino, ";
                Minino.imprimir_raza();
                cout<<"EstrellaCirco, ";
                EstellaCirco.imprimir_raza();
                system("pause");
            break;
            case 5:
                system("cls");
                cout<<"Cambiar el nombre del circo en el que actua EstrellaCirco"<<endl<<endl;
                cout<<"Ingrese el nuevo circo: ";
                fflush(stdin);
                getline(cin, aux);
                EstellaCirco.cambiar_circo(aux);
                system("pause");
            break;
        }
    } while (opc != 6);


    return 0;
}