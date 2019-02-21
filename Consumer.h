#ifndef CONSUMER_H
#define CONSUMER_H

#include "Producer.h"

class Consumer
{
    private:
        Producer producer;
    public:
        Consumer();
        ~Consumer();
        void printNumber();
        
};

#endif //CONSUMER_H