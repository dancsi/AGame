#ifndef OBJECT_H_INCLUDED
#define OBJECT_H_INCLUDED
#define ACCEL 1 // Ubrzanje ukoliko igrac drzi taster.
#define MAX_V 5 // Maksimalna brzina. Oba broja cemo menjati kako bude trebalo.

class Vector
{
    double x, y;  // Bolje je da budu decimalne koordinate, pa da program zaokruzuje, posto bi se mnogo gubilo da su celobrojne.
    Vector operator+(Vector);
};

Vector Vector::operator+(Vector b)
{
    this->x+=b.x;
    this->y+=b.y;
    return *this;
}

enum Object_Type {S, W}; // Square, Wall

class Object
{
    public:
    Object_Type Type;
    protected:
    Vector Bottom_Left, Upper_Right; // Koordinate, jednoznacno odredjuju pravougaonik/kvadratic.
    bool Should_Delete; // Da li treba da se unisti, npr. kada kvadratic udari u bodljikavi zid, ili
                        // ako ikada budemo imali unistive zidove (ne židove) :).
    double Spd_X, Spd_Y; // Brzine po osama
    double Angle; // Ugao kretanja. Trebace valjda. Nalazi se ovde u slucaju da budemo imali pokretne zidove ili slicno.
};

class Square: public Object
{
    public:
    bool Up, Down, Left, Right; // Da li su odgovarajuci tasteri pritisnuti.
    double Accel_X, Accel_Y; // Ubrzanja po X i Y osi.
    Square();
};

Square::Square()
{
    Type=S;
}

class Wall: public Object
{
    Wall();
};

Wall::Wall()
{
    Type=W;
}



#endif // OBJECT_H_INCLUDED
