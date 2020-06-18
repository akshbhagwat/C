#include <iostream> 
using namespace std;

#define max(a, b)  a > b ? a : b
#define min(a, b)  a < b ? b : a
#define INFI 10000 

struct Point
{
    int x;
    int y;
};

bool OnSegment(Point p, Point q, Point r)
{
    if (q.x <= (max(p.x, r.x)) && q.x >= (min(p.x, r.x)) && q.y <= (max(p.y, r.y)) && q.y >= (min(p.y, r.y)))
        return true;

    return false;
}

int Orientation(Point p, Point q, Point r)
{
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);

    if (val == 0) 
        return 0; 
   
    if (val > 0)
        return 1;
    else
        return 2;
}

bool DoIntersect(Point p1, Point q1, Point p2, Point q2)
{
    int c1 = Orientation(p1, q1, p2);
    int c2 = Orientation(p1, q1, q2);
    int c3 = Orientation(p2, q2, p1);
    int c4 = Orientation(p2, q2, q1);

    if (c1 != c2 && c3 != c4)
        return true;

    if (c1 == 0 && OnSegment(p1, p2, q1)) 
        return true;

    if (c2 == 0 && OnSegment(p1, q2, q1)) 
        return true;

    if (c3 == 0 && OnSegment(p2, p1, q2)) 
        return true;

    if (c4 == 0 && OnSegment(p2, q1, q2)) 
        return true;

    return false;
}

bool IsInside(Point* polygon, int n, Point p)
{
    if (n < 3)
        return false;

    Point extreme = { INFI, p.y };

    int count = 0, i = 0;

    do
    {
        int next = (i + 1) % n;

        if (DoIntersect(polygon[i], polygon[next], p, extreme))
        {
            if (Orientation(polygon[i], p, polygon[next]) == 0)
                return OnSegment(polygon[i], p, polygon[next]);

            count++;
        }
        i = next;
    } while (i != 0);

    return (count & 1);
}

int main()
{
    Point polygon[] = { {1,0}, {8, 3}, {8, 8}, {1, 5}};
    
    int n = sizeof(polygon) / sizeof(polygon[0]);
    
    Point p = {3, 5};
   
    if (IsInside(polygon, n, p))
        cout << "True \n";
    else
        cout << "False \n";

    return 0;
}
