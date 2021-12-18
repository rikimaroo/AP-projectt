#ifndef _cache
#define _cache

#include<string>
#include<vector>

class cache
{
private:
    std::string repair;
    std::string gender;
    std::string mark_waxe;
public:
    //cache(/* args */);
    //~cache();

    void set_repair(std::string);
    std::string get_repair();

    void set_gender(std::string);
    std::string get_gender();

    void set_mark_waxe(std::string);
    std::string get_mark_waxe();

    void print();

    std::vector<cache> inf;

};

#endif