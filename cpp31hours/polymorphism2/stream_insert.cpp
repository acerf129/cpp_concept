#include "stream_insert.h"

std::ostream& operator <<(std::ostream& out ,const StreamInsert&operand){
    operand.stream_insert(out);
    return out;
}