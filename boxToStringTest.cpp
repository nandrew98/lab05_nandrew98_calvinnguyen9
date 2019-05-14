#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"



/*
int main() {

  struct Point p1,p2;

  initPoint(&p1,3.0,4.0);  
  assertEquals("(3,4)", pointToString(p1), "pointToString(p1)");

  initPoint(&p2,3.14159,6.2831853071);
  assertEquals("(3.14,6.28)", pointToString(p2), "pointToString(p2)");
  assertEquals("(3,6)", pointToString(p2,1), "pointToString(p2,1)");
  assertEquals("(3.142,6.283)", pointToString(p2,4), "pointToString(p2,4)");
  assertEquals("(3.1416,6.2832)", pointToString(p2,5), "pointToString(p2,5)");

		   
  return 0;
}
*/
int main(){
	struct Box b1;
	initBox(&b1,3.2222222222,4.22222222222,5.2222222222,6.2222222222);
	assertEquals("ul=(3,4),w=5,h=6", boxToString(b1,1), "boxToString(b2,1)");
	assertEquals("ul=(3.2,4.2),w=5.2,h=6.2", boxToString(b1,2), "boxToString(b2,2)");
	assertEquals("ul=(3.22,4.22),w=5.22,h=6.22", boxToString(b1,3), "boxToString(b2,3)");

	return 0;
}

