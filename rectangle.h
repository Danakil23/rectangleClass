#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Shapes
{
    public:

    Shapes(int nb_corner, double length, double width);
    Shapes();
    ~Shapes();

    void print() const;
    double perimeter ();
    double surface ();


    protected:

    int m_nb_corner;
    double m_length;
    double m_width;
    double m_result;
};


#endif // RECTANGLE_H_INCLUDED
