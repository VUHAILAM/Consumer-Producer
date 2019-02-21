#ifndef PRODUCER_H
#define PRODUCER_H

#include <queue>

class Producer {
    private:
        std::queue<int> m_queue;

    public:
        Producer();
        ~Producer();
        void generateNumber();
        int topNumber();
        bool isEmpty();
};

#endif //PRODUCER_H