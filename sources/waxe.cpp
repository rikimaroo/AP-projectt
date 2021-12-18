#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<cctype>
#include"waxe.h"

using namespace std;

waxe::waxe(string type, string brand)
{
    set_model(type);
    set_mark(brand);
    //set_color(name);
}

waxe::~waxe()
{
}

void waxe::set_model(string type = "NULL")
{
    type;
    /*if (type == "NULL")
    {
        cout << "model waxei ke mikhaid entekhab konid \n"
             << "1-abri \n" << "2-ghatrei \n" << "3-fori \n" << "3-ferchei" << endl;
        cin >> type;
    }
    
    transform(type.begin(), type.end(), type.begin(), ::tolower);//to lower type
    
    if (type != "abri" && type != "ghatrei" && type != "fori" && type != "ferchei")
    {
        throw invalid_argument("invalid model waxe");
    }*///inam bayad bere to main
        
    model = type;    
}

string waxe::get_model() const
{
    return model;
}

void waxe::set_mark(string brand)
{
    /*if (brand == "NULL")
    {
        cout << "brand waxe khod ra entekhab konid...." << endl 
             << "1-panda \n" << "2-pwax \n" << "3-kingly" << endl;
        
        cin >> brand;
    }
    
    transform(brand.begin(), brand.end(), brand.begin(), ::tolower);//to lower brand

    if (brand != "panda" && brand != "pwax" && brand != "kingly")
    {
        throw invalid_argument("invalid brand for waxe");
    }*///ina bayad to main bashe fekr konam

    model = brand;
}

string waxe::get_mark() const
{
    return mark;
}

/*void waxe::set_color(string name)felan lazem nist
{
    for (size_t i = 0; i < name.size(); i++)
    {
        if (!(isalpha(name[i])))
        {
            throw invalid_argument("invalid name color");
        }
        
    }

    model = name;
}

string waxe::get_color() const
{
    return color;
}*/

void waxe::print()
{
    cout << "model is --->" << model << endl
         << "mark is  --->" << mark << endl;
}