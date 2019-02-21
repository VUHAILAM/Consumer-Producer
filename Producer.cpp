#include "Producer.h"

#include<random>

Producer::Producer() {
}

Producer::~Producer() {

}

bool Producer::isEmpty() {
    return m_queue.empty();
}

int Producer::topNumber() {
    if (!m_queue.empty) {
        int topNumber = m_queue.front;
        m_queue.pop;
        return topNumber;
    } else return -1;
}

void Producer::generateNumber() {
    std::random_device rd;
    std::mt19937 gen(rd);
    std::uniform_int_distribution<> num(1, 100);
    m_queue.push(dis(gen));
}