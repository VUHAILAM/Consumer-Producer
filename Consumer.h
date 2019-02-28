#ifndef CONSUMER_H
#define CONSUMER_H

#include "Producer.h"

class Consumer
{
    private:
        std::thread m_con_thread;
        Producer *m_pro;
    public:
        Consumer(Producer *pro);
        ~Consumer();
        void printNumber();
        void run();
};

#endif //CONSUMER_H