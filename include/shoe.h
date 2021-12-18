#ifndef _shoe
#define _shoe

#include<string>
#include"waxe.h"

using namespace std;

class shoe : public waxe
{
private:
    string gender;//men or vomen
    //string model;
    //string mark;
    string color;
public:
    shoe(string = "NULL");
    //~shoe();
    void set_gender();
    string get_gender() const;

    //void set_model(string);
    //string get_model() const;

    //virtual void set_mark(string) override;
    //string get_mark() const;

    void set_color();
    string get_color() const;

    virtual void print() override;
};

#endif


