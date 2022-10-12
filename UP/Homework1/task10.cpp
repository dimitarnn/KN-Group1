#include <iostream>
#include <cmath>

const double EPSILON = 0.001;

struct point
{
    int x, y;

    point (int _x, int _y)
    {
        x = _x;
        y = _y;
    }
};

const point point1 = point(0, 1);
const point point2 = point(-1, 0);
const point point3 = point(-3, 0);
const point pointO = point(-1, 1);
const double radius = 1;  

bool is_in_circle(point p, point o, int r)
{
    return (p.x - o.x) * (p.x - o.x) + (p.y - o.y) * (p.y - o.y) <= r * r;
}

double get_segment_length(point a, point b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

double get_triangle_area(point point_a, point point_b, point point_c)
{
    double side_a = get_segment_length(point_b, point_c);
    double side_b = get_segment_length(point_a, point_c);
    double side_c = get_segment_length(point_a, point_b);
    double p = (side_a + side_b + side_c) / 2;

    return sqrt(p * (p - side_a) * (p - side_b) * (p - side_c));
}

bool is_in_triangle(point p, point a, point b, point c)
{
    double area = get_triangle_area(a, b, c);
    double area1 = get_triangle_area(a, b, p);
    double area2 = get_triangle_area(a, c, p);
    double area3 = get_triangle_area(b, c, p);

    return fabs(area1 + area2 + area3 - area) < EPSILON;
}

int main()
{
    int x, y;
    std::cin >> x >> y;

    point p = point(x, y);
    

    bool check1 = is_in_triangle(p, point1, point2, point3);
    bool check2 = is_in_circle(p, pointO, radius);
    
    std::cout << (check1 && check2) << std::endl;

    return 0;
}