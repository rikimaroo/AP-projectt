#include<iostream>
#include<bits/stdc++.h>
#include"shoe.h"

using namespace std;

shoe::shoe(string type)
{
    //set_gender();
    //set_model(type);
    //set_mark(brand);
    set_color();
}

void shoe::set_gender()
{
    string gen;
    if (gen.empty())
    {
        cout << "noe kafsh ro entekhab konid" << endl
            << "2-men \nor \n1-feminien" << endl;
        
        cin >> gen;
    }
    
    transform(gen.begin(), gen.end(), gen.begin(), ::tolower);

    if (gen != "men" && gen != "feminien")
    {
        throw invalid_argument("invalid gender");
    }
    
    gender = gen;
}

string shoe::get_gender() const
{
    return gender;
}

/*void shoe::set_model(string type = "NULL")
{
    /*if (type == "NULL")
    {
        cout << "model kafsh ra entekhab konid..." << endl; 
        
        if (gender == "men")
        {
            cout << "1-oxford \n " << "2-kalej \n" << "3-sport" << endl;
        }
        else if (gender == "feminien")
        {
            cout << "1-pump \n " << "2-platform \n" << "3-sport" << endl;
        }

        cin >> type;
        transform(type.begin(), type.end(), type.begin(), ::tolower);
    }*///hamchenin ina
    
    /*set_model(type);
}*/

/*void shoe::set_mark(string brand)
{
    set_mark(brand);
}*/


void shoe::set_color()
{
    string name;
    if (name == "NULL")
    {
        cout << "rang kafsh ra entekhab konid..." << endl
             << "1-black \n" << "2-brown \n" << "3-white" << endl;
        cin >> name;
    }
    transform(name.begin(), name.end(), name.begin(), ::tolower);

    /*if (name != "black" && name != "brown" && name != "white")
    {
        throw invalid_argument("invalid color shoe");
    }*/
    
    color = name;
}

string shoe::get_color() const
{
    return color;
}

void shoe::print()//for test vector
{
    cout << "gender is  ---> " << get_gender() << endl;
    waxe::print();
    cout << "color is  ---> " << get_color() << endl;
}