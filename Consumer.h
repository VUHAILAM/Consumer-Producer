#ifndef CONSUMER_H
#define CONSUMER_H

#include "Producer.h"

class Consumer
{
    private:
        std::thread m_con_thread;
    public:
        Consumer();
        ~Consumer();
        void printNumber(Producer *pro);
        void run(Producer *pro);
};

#endif //CONSUMER_H