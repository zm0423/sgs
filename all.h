#ifndef ALL_H
#define ALL_H

class war;

//about cards

/*  detail :(from left)   
 *   12 : id num         
 *   34 : suit
 *   5-8 : number
 */
    
struct cardinfo
{
    w_char name;
    unsigned char detail;
};

class card_base
{
 public:
    card_base(w_char name, int number, int suit){
        info.name = name;
        info.detail = (suit << 4) | number;
    }
    virtual void use() = 0;
    cardinfo &detail(){return detail};
 protected:
    cardinfo info;
};







class hero
{
    
};

#endif