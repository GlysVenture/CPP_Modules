//
// Created by Tadeusz Kondracki on 2/28/22.
//

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed tx = point.getX() - c.getX();
	Fixed ty = point.getY() - c.getY();
	Point rela(a.getX() - c.getX(), a.getY() - c.getY());
	Point relb(b.getX() - c.getX(), b.getY() - c.getY());

	Fixed rb = (rela.getX() * ty - rela.getY() * tx) / (rela.getX() * relb.getY() - relb.getX() * rela.getY());
	Fixed ra = (tx - rb * relb.getX()) / rela.getX();

	if (ra < 0 || rb < 0 || ra + rb > 1)
		return false;
	return true;
}
