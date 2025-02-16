#include "Widget.h"
//base
class WidgetImpl {
public:
	virtual ~WidgetImpl() = default;
	virtual void setData(int a, double b) = 0;
	virtual void displayData()const = 0;
};