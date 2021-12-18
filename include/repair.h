#ifndef _repair
#define _repair

#include<string>

class repair
{
private:
    bool sew;
    bool glue;

public:
    //info();
    //~info();

    void set_type_repair(std::string);

    bool get_sew() const;

    bool get_glue() const;

    void print();
    
};


#endif