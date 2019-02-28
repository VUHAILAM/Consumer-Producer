#include "Producer.h"

#include <iostream>
#include <random>


Producer::Producer() {

}

Producer::~Producer() {
    
}

bool Producer::isEmpty() {
    return m_queue.empty();
}

int Producer::topNumber() {
    if (!m_queue.empty()) {
        int topNumber = m_queue.front();
        m_queue.pop();
        return topNumber;
    } else return -1;
}

void Producer::generateNumber() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> num(1, 100);

    for(int i = 0; i < 100; i++) {
        int number = num(gen);
        std::cout << "Producer generate " << number << std::endl;
        m_queue.push(number);
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

void Producer::displayQueue() {
        while(!m_queue.empty()){
            std::cout << m_queue.front() << " ";
            m_queue.pop();
        }          
}

void Producer::run() {
    m_pro_thread = std::thread(&Producer::generateNumber, this); 
    if(m_pro_thread.joinable()) {
        m_pro_thread.join();
    }
}

