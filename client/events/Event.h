#ifndef EVENT_H_INCLUDED
#define EVENT_H_INCLUDED
#include "Object.h"

enum Event_Type {User_Action, SS_Collision, SW_Collision, Max_Spd, Zero_Spd}; // Tipovi dogadjaja, verovatno ce trebati negde.
enum Button {Up, Down, Left, Right, No_Up, No_Down, No_Left, No_Right}; // Moguci tasteri koje je igrac pritisnuo, odnosno pustio.

class Event
{
    public:
    Event_Type Type;
    double Time; // Vreme dogadjaja
};

class User_Action_Event: public Event
{
    Button B;  // Sta je tacno igrac uradio.
    void Set_A (Object);
    User_Action_Event()
};

void User_Action_Event::Set_A (Object *Tmp)
{
    if(B==0 || B==5) Tmp.Accel_Y+=ACCEL;
    else if(B==1 || B==4) Tmp.Accel_Y-=ACCEL;
    else if(B==2 || B==7) Tmp.Accel_X-=ACCEL;
    else if(B==3 || B==6) Tmp.Accel_X+=ACCEL;
}

User_Action_Event::User_Action_Event()
{
    Type=User_Action;
    Time=Tmp_Time; // Dobija od servera ili odakle vec.

}

class Square_to_Square_Collision: public Event
{
    Object Obj1, Obj2;
    Square_to_Square_Collision();
    void Collide();
};

Square_to_Square_Collision::Square_to_Square_Collision(Object O1, Object O2) // Objekti koji se sudaraju
{
    Type=SS_Collision;
    Time=Find_Time(O1, O2);
    Obj1=O1; // Da se sacuvaju u memoriji.
    Obj2=O2; // -||-
}

void Square_to_Square_Collision::Collide()
{
        // To be done, izveo na papiru, bice otkucano.
}

// Ubacicu ostale pre ili kasnije

#endif // EVENT_H_INCLUDED
