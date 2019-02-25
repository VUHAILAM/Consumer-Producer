#ifndef CONSUMER_H
#define CONSUMER_H

#include "Producer.h"

class Consumer
{
    private:
    public:
        Consumer();
        ~Consumer();
        void printNumber(Producer *pro);
        
};

#endif //CONSUMER_H