#include "shape.h"

int Shape::m_count{0};

Shape::Shape(std::string_view source)
    :m_description(source)
{
    ++m_count;
}
