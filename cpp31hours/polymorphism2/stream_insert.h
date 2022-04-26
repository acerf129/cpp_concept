#ifndef STREAM_INSERT_H
#define STREAM_INSERT_H
#include <iostream>
class StreamInsert{
    friend std::ostream& operator <<(std::ostream& out ,const StreamInsert&operand);
    public :
        virtual void stream_insert(std::ostream& out )const=0;
};

#endif