#include <iostream>

bool leap_year(int year){
    bool ly;
    ly = false;
    if ( year % 4 == 0 and year % 100 != 0 )
    {
        ly = true;
    }

    // TODO: check whether the year is a leap year or not
    // store result in variable ly

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1
    if ((d1 == 30 and (m1 == 4 or m1 == 6 or m1 == 9 or m1 == 11))or(d1 == 31 and m1 != 12)or(leap_year(y1) and m1 == 2 and d1 == 29)or((not(leap_year(y1))) and m1 == 2 and d1 == 28))
    {
        m2 = m1 + 1;
        d2 = 1;
        y2 = y1;
    }
    else
    {
        if (d1 == 31 and m1 == 12)
        {
            m2 = 1;
            d2 = 1;
            y2 = y1+1;
        }
        else
        {
            m2 = m1;
            d2 = d1+1;
            y2 = y1;
        }
    }
    
    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)

}

int main(){
    int d1,m1,y1,d2,m2,y2;
    std::cin >> d1 >> m1 >> y1;
    next_date(d1,m1,y1,d2,m2,y2);
    std::cout << d2 << " " << m2 << " " << y2 << std::endl;
    // TODO: write a main to test the function
}