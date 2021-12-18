#include"cache.h"

#include<iostream>
#include<string>

using namespace std;

void cache::set_repair(string re)
{
    repair = re;
}

string cache::get_repair()
{
    return repair;
}

void cache::set_gender(string ge)
{
    gender = ge;
}

string cache::get_gender()
{
    return gender;
}

void cache::set_mark_waxe(string mw)
{
    mark_waxe = mw;
}

string cache::get_mark_waxe()
{
    return mark_waxe;
}

void cache::print()
{
    inf.shrink_to_fit();
    for (size_t i = 0; i < inf.size(); i++)
    {
        cout << "repair       --->  " << inf[i].get_repair() << endl
             << "gender       --->  " << inf[i].get_gender() << endl
             << "mark_waxe    --->  " << inf[i].get_mark_waxe() << endl;
    }
    cout << "---------------" << endl;
}