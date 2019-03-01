#ifndef PRODUCER_H
#define PRODUCER_H

#include <chrono>
#include <thread>
#include <queue>

class Producer {
    private:
        std::queue<int> m_queue;
        std::thread m_pro_thread;
    public:
        Producer();
        ~Producer();
        void generateNumber();
        int takeTopNumber();
        bool isEmpty();
        void displayQueue();
        void run();
};

#endif //PRODUCER_H