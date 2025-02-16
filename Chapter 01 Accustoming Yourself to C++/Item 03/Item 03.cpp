#include "CTextBlock.h"
#include "TextBlock.h"
int main() {
	TextBlock tb("Hello");
	std::cout << tb[0]; //non const
	tb[0] = 'x'; //allowed, not allowed if op[] return char instead of char&
	const TextBlock ctb("World");
	std::cout << ctb[0]; // const
	//ctb[0] = 'x'; //error

	//CTextBlock
	const CTextBlock cctb("Hello");
	char* pc = &cctb[0];
	*pc = 'J';
}