#include <memory>
#include <iostream>
using namespace std;

#include "printcls.h"

int main()
{
    string const m {"This is a Single Thread application."};
//    auto pclass {new PrintCls()};
//    auto pclass {unique_ptr<PrintCls>{new PrintCls(m)}};
    auto pclass {make_unique<PrintCls>(m)};

    pclass->print();
    pclass->setMsg("This is a Main Thread application.");
    pclass->print();

//    delete pclass;

    return 0;
}
