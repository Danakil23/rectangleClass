#include <iostream>

#include "rectangle.h"


using namespace std;


Shapes::Shapes() : m_nb_corner(0), m_length(0), m_width(0)
{

}

Shapes::Shapes(int nb_corner, double length, double width): m_nb_corner(nb_corner), m_length(length), m_width(width)
{
    m_result = 0;
}

Shapes::~Shapes ()
{

}

// Methodes************************************************************

void Shapes::print() const
{
    cout << "result: " <<  m_result << endl;
}

double Shapes::perimeter()
{
    m_result = (m_length + m_width)*2;
    return m_result;
}

double Shapes::surface()
{
    m_result = m_length * m_width;
    return m_result;
}
